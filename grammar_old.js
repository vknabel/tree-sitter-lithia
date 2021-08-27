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
        $.package_definition,
        $._terminator,
        repeat(seq($.import_definition, $._terminator)),
        repeat(seq($.statement, $._terminator))
        // repeat($.test_definition)
      ),

    package_definition: ($) => seq("package", field("name", $.identifier)),
    import_definition: ($) =>
      seq("import", $._import_module, optional($._import_members)),
    _import_module: ($) => sepRepeat1(".", $.identifier),
    _import_members: ($) =>
      seq("{", sepRepeat($._terminator, $.identifier), "}"),

    _definition: ($) =>
      choice(
        $.function_definition,
        $.let_definition,
        $.data_definition,
        $.enum_definition
      ),
    // test_definition: ($) =>
    //   seq(
    //     $.import_definition,
    //     repeat(choice($._global_definition, $._describe_definition))
    //     repeat($._describe_definition),
    //   ),
    // _describe_definition: ($) => "describe",

    function_definition: ($) =>
      seq(
        "func",
        field("name", $.identifier),
        field("implementation", $.function_expression)
      ),

    function_expression: ($) =>
      choice(
        // $._function_paramterless_expression,
        $._function_parameter_expression
      ),
    _function_paramterless_expression: ($) =>
      seq("=>", $._expression, $._terminator),
    _function_parameter_expression: ($) =>
      seq(
        "{",
        seq(field("params", $._function_paramters), "=>"),
        optional($._terminator),
        field("body", sepRepeat($._terminator, $.statement)),
        optional($._terminator),
        "}"
      ),
    _function_paramters: ($) => sepRepeat1(",", $.identifier),

    let_definition: ($) =>
      seq(
        "let",
        field("name", $.identifier),
        "=",
        field("value", $._expression)
      ),
    data_definition: ($) =>
      seq("data", $.identifier, optional($._data_property_definition)),
    _data_property_definition: ($) =>
      seq("{", sepRepeat($._terminator, $.data_property), "}"),
    data_property: ($) => seq($.identifier, sepRepeat(",", $.identifier)),
    enum_definition: ($) =>
      seq("enum", $.identifier, optional($._enum_case_definition)),
    _enum_case_definition: ($) => seq("{", repeat($.enum_case), "}"),
    enum_case: ($) =>
      choice($.identifier, $.data_definition, $.enum_definition),

    statement: ($) => choice($._definition, $._expression),
    _expression: ($) => choice($.invocation),

    invocation: ($) =>
      seq($._simple_value, optional($.invocation_argument_list)),
    _simple_value: ($) => choice($._literal, $.selector_expression),
    invocation_argument_list: ($) =>
      field("arguments", sepRepeat1(",", $._argument)),
    _argument: ($) =>
      seq($._simple_value, field("single_param", optional($._argument))),
    _literal: ($) =>
      choice(
        $.type_structuring,
        $.array_literal,
        $.identifier,
        $.number,
        $.function_expression,
        $.grouping_expression
      ),

    grouping_expression: ($) => seq("(", $._expression, ")"),
    selector_expression: ($) =>
      seq($._literal, ".", sepRepeat1(".", $.identifier)),
    array_literal: ($) => seq("[", sepRepeat(",", $._argument), "]"),
    type_structuring: ($) =>
      seq(
        field("type", $.identifier),
        ".switch (", // TODO: Remove "."
        sepRepeat1(",", $.structing_case),
        ")"
      ),
    structing_case: ($) => seq($.identifier, ":", $._argument),

    _terminator: ($) => choice(";", "\n"),
    identifier: ($) => token(seq(letter, repeat(choice(letter, unicodeDigit)))),
    number: ($) => /[0-9]+/,

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: ($) =>
      token(
        choice(seq("//", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"))
      ),
  },
});

function sepRepeat1(separator, rule) {
  return seq(rule, repeat(seq(separator, rule)));
}

function sepRepeat(separator, rule) {
  return optional(sepRepeat1(separator, rule));
}
