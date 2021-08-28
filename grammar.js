const unicodeLetter = /\p{L}/;
const unicodeDigit = /[0-9]/;
const unicodeChar = /./;
const unicodeValue = unicodeChar;
const letter = choice(unicodeLetter, "_");

module.exports = grammar({
  name: "Lithia",

  extras: ($) => [$.comment, /\s/],

  rules: {
    source_file: ($) =>
      seq(
        seq(field("package", $.package_declaration), $._statement_terminator),
        repeat(seq($._top_level_declaration, $._statement_terminator))
        // repeat(seq($.statement, $._statement_terminator))
        // repeat($.test_definition)
      ),

    // package example
    package_declaration: ($) => seq("package", field("name", $.identifier)),

    _top_level_declaration: ($) =>
      choice(
        $.import_declaration,
        $.enum_declaration,
        $.data_declaration,
        $.function_declaration,
        $.let_declaration,
        $._expression
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
    import_declaration: ($) =>
      seq(
        "import",
        field("name", $._import_module),
        field("members", optional($._import_members))
      ),
    _import_module: ($) => sepRepeat1(".", $.identifier),
    _import_members: ($) =>
      seq("{", sepRepeat($._list_terminator, $.identifier), "}"),

    // let abc def
    // let abc = def
    let_declaration: ($) =>
      seq(
        "let",
        field("name", $.identifier),
        optional("="),
        field("value", $._expression)
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
      seq(sepRepeat1($._list_terminator, $.data_property)),
    data_property: ($) =>
      seq($.identifier, repeat(alias($.identifier, $.data_property_parameter))),

    // enum X
    // enum X { Abc, enum Def, data X }
    enum_declaration: ($) =>
      seq(
        "enum",
        field("name", $.identifier),
        field("cases", optional(seq("{", optional($.enum_case_list), "}")))
      ),
    enum_case_list: ($) => seq(sepRepeat1($._list_terminator, $._enum_case)),
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
    _statement: ($) => choice($._scope_level_declaration, $._expression),

    _expression: ($) =>
      choice(
        choice($._argument, seq($.invocation_expression)),
        $.unary_expression,
        $.binary_expression
      ),
    unary_expression: ($) =>
      prec(2, choice(seq("!", $._expression), seq("-", $._expression))),
    binary_expression: ($) =>
      choice(
        prec.left(7, seq($._expression, "*", $._expression)),
        prec.left(7, seq($._expression, "/", $._expression)),

        prec.left(6, seq($._expression, "+", $._expression)),
        prec.left(6, seq($._expression, "-", $._expression)),

        prec.left(4, seq($._expression, "==", $._expression)),
        prec.left(4, seq($._expression, "!=", $._expression)),
        prec.left(4, seq($._expression, ">=", $._expression)),
        prec.left(4, seq($._expression, ">", $._expression)),
        prec.left(4, seq($._expression, "<", $._expression)),
        prec.left(4, seq($._expression, "<=", $._expression)),

        prec.right(4, seq($._expression, "&&", $._expression)),
        prec.right(4, seq($._expression, "||", $._expression)),

        prec.right(0, seq($._expression, "$", $._expression))
      ),
    invocation_expression: ($) => seq($._argument, repeat1($._argument)),
    _argument: ($) => choice($.member_access, $._literal, $.switch_expression),
    member_access: ($) => seq($._literal, repeat1(seq(".", $.identifier))),

    switch_expression: ($) =>
      seq("switch", field("type", $._argument), field("body", $.switch_body)),
    switch_body: ($) => seq("{", optional($._switch_case_list), "}"),
    _switch_case_list: ($) => sepRepeat1($._list_terminator, $.switch_case),
    switch_case: ($) =>
      seq(field("label", $._expression), ":", field("body", $._expression)),

    _literal: ($) =>
      choice(
        $.identifier,
        $.string_literal,
        $.group_literal,
        $.function_literal,
        $.number_literal,
        $.array_literal
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
    group_literal: ($) => seq("(", field("expression", $._expression), ")"),
    number_literal: ($) => $._number,
    array_literal: ($) =>
      seq("[", sepRepeat($._list_terminator, $._expression), "]"),

    // { }
    // { param param => some calls }
    function_literal: ($) =>
      seq(
        "{",
        seq(field("parameters", optional($.parameter_list)), "=>"),
        field("body", optional($._statement_list)),
        "}"
      ),
    parameter_list: ($) => repeat1($.identifier),

    _statement_terminator: ($) => choice(/(\n+|;)/),
    _list_terminator: ($) => choice(/(\n+|,)/),
    identifier: ($) => token(seq(letter, repeat(choice(letter, unicodeDigit)))),
    _number: ($) => /[0-9]+/,

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
