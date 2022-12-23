const unicodeLetter = /\p{L}/;
const unicodeDigit = /[0-9]/;
const unicodeChar = /./;
const unicodeValue = unicodeChar;
const letter = choice(unicodeLetter, "_");

module.exports = grammar({
  name: "lithia",

  extras: ($) => [$.comment, /\s/],

  rules: {
    source_file: ($) =>
      seq(
        optional($._shebang),
        optional(seq($.module_declaration, optional($._statement_terminator))),
        sepRepeat($._statement_terminator, $._top_level_declaration)
      ),

    _shebang: ($) => token(seq("#!", /.*/)),

    // module example
    module_declaration: ($) => seq("module", field("name", $.identifier)),

    _top_level_declaration: ($) =>
      choice(
        $.import_declaration,
        $.enum_declaration,
        $.data_declaration,
        $.extern_declaration,
        $.function_declaration,
        $.let_declaration,
        $._complex_expression
      ),
    _scope_level_declaration: ($) =>
      choice(
        $.function_declaration,
        $.let_declaration,
        $.enum_declaration,
        $.data_declaration
      ),

    // import booleans
    // import some.api {
    //     fetch
    // }
    // import alias = some.api
    // import alias = some.api {
    //     fetch
    // }
    import_declaration: ($) =>
      seq(
        "import",
        field("alias", optional(seq($.identifier, "="))),
        field("name", $.import_module),
        field("members", optional($.import_members))
      ),
    import_module: ($) => sepRepeat1(".", $.identifier),
    import_members: ($) =>
      seq("{", sepRepeat($._implicit_list_terminator, $.identifier), "}"),

    // let abc def
    // let abc = def
    let_declaration: ($) =>
      seq(
        "let",
        field("name", $.identifier),
        optional("="),
        field("value", $._complex_expression)
      ),

    // func
    function_declaration: ($) =>
      seq(
        "func",
        field("name", $.identifier),
        field("function", $.function_literal)
      ),

    // data X
    // data X { abc, def xyz }
    data_declaration: ($) =>
      seq(
        "data",
        field("name", $.identifier),
        optional(
          seq("{", field("properties", optional($.data_property_list)), "}")
        )
      ),
    data_property_list: ($) =>
      seq(optional($.comment), sepRepeat1($._statement_terminator, $._data_property)),
    _data_property: ($) =>
      choice($.data_property_value, $.data_property_function),
    data_property_value: ($) => field("name", $.identifier),
    data_property_function: ($) =>
      seq(field("name", $.identifier), field("parameters", $.parameter_list)),
    // seq($.identifier, repeat(alias($.identifier, $.data_property_parameter))),

    // extern X
    // extern X { abc, def xyz }
    // extern f a, b, c
    extern_declaration: ($) =>
      seq(
        "extern",
        field("name", $.identifier),
        optional(
          choice(
            seq("{", field("properties", optional($.data_property_list)), "}"),
            field("parameters", $.parameter_list)
          )
        )
      ),

    // enum X
    // enum X { Abc, enum Def, data X }
    enum_declaration: ($) =>
      seq(
        "enum",
        field("name", $.identifier),
        optional(seq("{", field("cases", optional($.enum_case_list)), "}"))
      ),
    enum_case_list: ($) => seq(optional($.comment), sepRepeat1($._implicit_list_terminator, $._enum_case)),
    _enum_case: ($) =>
      repeat1(
        choice(
          alias($.identifier, $.enum_case_reference),
          $.data_declaration,
          $.enum_declaration
        )
      ),

    // statement list
    _statement_list: ($) =>
      seq(sepRepeat1($._statement_terminator, $._statement)),
    _statement: ($) =>
      choice($._scope_level_declaration, $._complex_expression),

    _complex_expression: ($) =>
      choice(
        // a
        $._argument,
        // a b, c, (d e)
        $.complex_invocation_expression,
        // a + b
        $.binary_expression,
        // !a
        $.unary_expression
      ),
    complex_invocation_expression: ($) =>
      seq(
        field("function", $._argument),
        sepRepeat1(",", $._simple_expression)
      ),
    // a b
    simple_invocation_expression: ($) =>
      seq(field("function", $._argument), $._argument),

    _simple_expression: ($) =>
      choice(
        $._argument,
        $.simple_invocation_expression,
        $.unary_expression,
        $.binary_expression
      ),
    _operand_expression: ($) =>
      choice($._argument, $.unary_expression, $.binary_expression),
    unary_expression: ($) =>
      prec(
        2,
        choice(
          seq(field("operator", "!"), $._argument),
        )
      ),
    binary_expression: ($) =>
      choice(
        prec.left(
          7,
          seq(
            $._operand_expression,
            field("operator", "*"),
            $._operand_expression
          )
        ),
        prec.left(
          7,
          seq(
            $._operand_expression,
            field("operator", "/"),
            $._operand_expression
          )
        ),

        prec.left(
          6,
          seq(
            $._operand_expression,
            field("operator", "+"),
            $._operand_expression
          )
        ),
        prec.left(
          6,
          seq(
            $._operand_expression,
            field("operator", "-"),
            $._operand_expression
          )
        ),

        prec.left(
          4,
          seq(
            $._operand_expression,
            field("operator", "=="),
            $._operand_expression
          )
        ),
        prec.left(
          4,
          seq(
            $._operand_expression,
            field("operator", "!="),
            $._operand_expression
          )
        ),
        prec.left(
          4,
          seq(
            $._operand_expression,
            field("operator", ">="),
            $._operand_expression
          )
        ),
        prec.left(
          4,
          seq(
            $._operand_expression,
            field("operator", ">"),
            $._operand_expression
          )
        ),
        prec.left(
          4,
          seq(
            $._operand_expression,
            field("operator", "<"),
            $._operand_expression
          )
        ),
        prec.left(
          4,
          seq(
            $._operand_expression,
            field("operator", "<="),
            $._operand_expression
          )
        ),

        prec.right(
          4,
          seq(
            $._operand_expression,
            field("operator", "&&"),
            $._operand_expression
          )
        ),
        prec.right(
          4,
          seq(
            $._operand_expression,
            field("operator", "||"),
            $._operand_expression
          )
        )
      ),
    _argument: ($) => choice($.member_access, $._literal, $.type_expression),
    member_access: ($) => seq(field("object", $._literal), field("members", repeat1(seq(".", alias($.identifier, $.member_identifier))))),

    type_expression: ($) =>
      seq("type", field("type", $._argument), field("body", $.type_body)),
    type_body: ($) => seq("{", optional($._type_case_list), "}"),
    _type_case_list: ($) => sepRepeat1($._explicit_list_terminator, $.type_case),
    type_case: ($) =>
      seq(
        field("label", $.identifier),
        ":",
        field("body", $._simple_expression)
      ),

    _literal: ($) =>
      choice(
        $.identifier,
        $.string_literal,
        $.group_literal,
        $.function_literal,
        $._number_literal,
        $.array_literal,
        $.dict_literal,
      ),
    string_literal: ($) =>
      seq(
        '"',
        repeat(
          choice(token.immediate(prec(1, /[^"\n\\]+/)), $.escape_sequence)
        ),
        '"'
      ),

    escape_sequence: ($) =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[^xuU]/,
            /\d{2,3}/,
            /x[0-9a-fA-F]{2,}/,
            /u[0-9a-fA-F]{4}/,
            /U[0-9a-fA-F]{8}/
          )
        )
      ),
    group_literal: ($) =>
      seq("(", field("expression", $._complex_expression), ")"),
    _number_literal: ($) => choice($.int_literal, $.float_literal),
    int_literal: ($) => $._int,
    float_literal: ($) => $._float,
    array_literal: ($) =>
      seq("[", sepRepeat($._explicit_list_terminator, $._simple_expression), "]"),
    dict_literal: ($) =>
      seq("[", choice(":", sepRepeat1($._explicit_list_terminator, $.dict_entry)), "]"),
    dict_entry: ($) => seq(field("key", $._simple_expression), ":", field("value", $._simple_expression)),

    // { }
    // { param, param => some calls }
    function_literal: ($) =>
      seq(
        "{",
        seq(field("parameters", optional($.parameter_list)), "=>"),
        field("body", optional(alias($._statement_list, $.function_body))),
        "}"
      ),
    parameter_list: ($) => sepRepeat1($._explicit_list_terminator, $.identifier),

    _statement_terminator: ($) => /(\n+|;)/,
    _implicit_list_terminator: ($) => /(\n+|,)/,
    _explicit_list_terminator: ($) => ",",
    identifier: ($) => token(seq(letter, repeat(choice(letter, unicodeDigit)))),
    _number: ($) => choice($._int, $._float),
    _int: ($) => /-?[0-9]+/,
    _float: ($) => /-?(?:(?:0|[1-9]\d*)(?:\.\d*)?|\.\d+)(?:\d[eE][+\-]?\d+)?/,

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: ($) =>
      token(
        choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"))
      ),
  },
});

function sepRepeat1(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)), optional(separator));
}

function sepRepeat(separator, rule) {
  return optional(sepRepeat1(separator, rule));
}
