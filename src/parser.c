#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 414
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 93
#define ALIAS_COUNT 1
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 19

enum {
  anon_sym_package = 1,
  anon_sym_import = 2,
  anon_sym_DOT = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_let = 6,
  anon_sym_EQ = 7,
  anon_sym_func = 8,
  anon_sym_data = 9,
  anon_sym_extern = 10,
  anon_sym_enum = 11,
  anon_sym_COMMA = 12,
  anon_sym_BANG = 13,
  anon_sym_STAR = 14,
  anon_sym_SLASH = 15,
  anon_sym_PLUS = 16,
  anon_sym_DASH = 17,
  anon_sym_EQ_EQ = 18,
  anon_sym_BANG_EQ = 19,
  anon_sym_GT_EQ = 20,
  anon_sym_GT = 21,
  anon_sym_LT = 22,
  anon_sym_LT_EQ = 23,
  anon_sym_AMP_AMP = 24,
  anon_sym_PIPE_PIPE = 25,
  anon_sym_type = 26,
  anon_sym_COLON = 27,
  anon_sym_DQUOTE = 28,
  aux_sym_string_literal_token1 = 29,
  sym_escape_sequence = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  anon_sym_EQ_GT = 35,
  aux_sym__statement_terminator_token1 = 36,
  aux_sym__list_terminator_token1 = 37,
  sym_identifier = 38,
  sym__number = 39,
  sym_comment = 40,
  sym_source_file = 41,
  sym_package_declaration = 42,
  sym__top_level_declaration = 43,
  sym__scope_level_declaration = 44,
  sym_import_declaration = 45,
  sym_import_module = 46,
  sym_import_members = 47,
  sym_let_declaration = 48,
  sym_function_declaration = 49,
  sym_data_declaration = 50,
  sym_data_property_list = 51,
  sym__data_property = 52,
  sym_data_property_value = 53,
  sym_data_property_function = 54,
  sym_extern_declaration = 55,
  sym_enum_declaration = 56,
  sym_enum_case_list = 57,
  aux_sym__enum_case = 58,
  sym__statement_list = 59,
  sym__statement = 60,
  sym__complex_expression = 61,
  sym_complex_invocation_expression = 62,
  sym_simple_invocation_expression = 63,
  sym__simple_expression = 64,
  sym__operand_expression = 65,
  sym_unary_expression = 66,
  sym_binary_expression = 67,
  sym__argument = 68,
  sym_member_access = 69,
  sym_type_expression = 70,
  sym_type_body = 71,
  sym__type_case_list = 72,
  sym_type_case = 73,
  sym__literal = 74,
  sym_string_literal = 75,
  sym_group_literal = 76,
  sym_number_literal = 77,
  sym_array_literal = 78,
  sym_function_literal = 79,
  sym_parameter_list = 80,
  sym__statement_terminator = 81,
  sym__list_terminator = 82,
  aux_sym_source_file_repeat1 = 83,
  aux_sym_import_module_repeat1 = 84,
  aux_sym_import_members_repeat1 = 85,
  aux_sym_data_property_list_repeat1 = 86,
  aux_sym_enum_case_list_repeat1 = 87,
  aux_sym__statement_list_repeat1 = 88,
  aux_sym_complex_invocation_expression_repeat1 = 89,
  aux_sym__type_case_list_repeat1 = 90,
  aux_sym_string_literal_repeat1 = 91,
  aux_sym_array_literal_repeat1 = 92,
  alias_sym_enum_case_reference = 93,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_package] = "package",
  [anon_sym_import] = "import",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_func] = "func",
  [anon_sym_data] = "data",
  [anon_sym_extern] = "extern",
  [anon_sym_enum] = "enum",
  [anon_sym_COMMA] = ",",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_type] = "type",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ_GT] = "=>",
  [aux_sym__statement_terminator_token1] = "_statement_terminator_token1",
  [aux_sym__list_terminator_token1] = "_list_terminator_token1",
  [sym_identifier] = "identifier",
  [sym__number] = "_number",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_package_declaration] = "package_declaration",
  [sym__top_level_declaration] = "_top_level_declaration",
  [sym__scope_level_declaration] = "_scope_level_declaration",
  [sym_import_declaration] = "import_declaration",
  [sym_import_module] = "import_module",
  [sym_import_members] = "import_members",
  [sym_let_declaration] = "let_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_data_declaration] = "data_declaration",
  [sym_data_property_list] = "data_property_list",
  [sym__data_property] = "_data_property",
  [sym_data_property_value] = "data_property_value",
  [sym_data_property_function] = "data_property_function",
  [sym_extern_declaration] = "extern_declaration",
  [sym_enum_declaration] = "enum_declaration",
  [sym_enum_case_list] = "enum_case_list",
  [aux_sym__enum_case] = "_enum_case",
  [sym__statement_list] = "function_body",
  [sym__statement] = "_statement",
  [sym__complex_expression] = "_complex_expression",
  [sym_complex_invocation_expression] = "complex_invocation_expression",
  [sym_simple_invocation_expression] = "simple_invocation_expression",
  [sym__simple_expression] = "_simple_expression",
  [sym__operand_expression] = "_operand_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym__argument] = "_argument",
  [sym_member_access] = "member_access",
  [sym_type_expression] = "type_expression",
  [sym_type_body] = "type_body",
  [sym__type_case_list] = "_type_case_list",
  [sym_type_case] = "type_case",
  [sym__literal] = "_literal",
  [sym_string_literal] = "string_literal",
  [sym_group_literal] = "group_literal",
  [sym_number_literal] = "number_literal",
  [sym_array_literal] = "array_literal",
  [sym_function_literal] = "function_literal",
  [sym_parameter_list] = "parameter_list",
  [sym__statement_terminator] = "_statement_terminator",
  [sym__list_terminator] = "_list_terminator",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_import_module_repeat1] = "import_module_repeat1",
  [aux_sym_import_members_repeat1] = "import_members_repeat1",
  [aux_sym_data_property_list_repeat1] = "data_property_list_repeat1",
  [aux_sym_enum_case_list_repeat1] = "enum_case_list_repeat1",
  [aux_sym__statement_list_repeat1] = "_statement_list_repeat1",
  [aux_sym_complex_invocation_expression_repeat1] = "complex_invocation_expression_repeat1",
  [aux_sym__type_case_list_repeat1] = "_type_case_list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_array_literal_repeat1] = "array_literal_repeat1",
  [alias_sym_enum_case_reference] = "enum_case_reference",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_data] = anon_sym_data,
  [anon_sym_extern] = anon_sym_extern,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [aux_sym__statement_terminator_token1] = aux_sym__statement_terminator_token1,
  [aux_sym__list_terminator_token1] = aux_sym__list_terminator_token1,
  [sym_identifier] = sym_identifier,
  [sym__number] = sym__number,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_package_declaration] = sym_package_declaration,
  [sym__top_level_declaration] = sym__top_level_declaration,
  [sym__scope_level_declaration] = sym__scope_level_declaration,
  [sym_import_declaration] = sym_import_declaration,
  [sym_import_module] = sym_import_module,
  [sym_import_members] = sym_import_members,
  [sym_let_declaration] = sym_let_declaration,
  [sym_function_declaration] = sym_function_declaration,
  [sym_data_declaration] = sym_data_declaration,
  [sym_data_property_list] = sym_data_property_list,
  [sym__data_property] = sym__data_property,
  [sym_data_property_value] = sym_data_property_value,
  [sym_data_property_function] = sym_data_property_function,
  [sym_extern_declaration] = sym_extern_declaration,
  [sym_enum_declaration] = sym_enum_declaration,
  [sym_enum_case_list] = sym_enum_case_list,
  [aux_sym__enum_case] = aux_sym__enum_case,
  [sym__statement_list] = sym__statement_list,
  [sym__statement] = sym__statement,
  [sym__complex_expression] = sym__complex_expression,
  [sym_complex_invocation_expression] = sym_complex_invocation_expression,
  [sym_simple_invocation_expression] = sym_simple_invocation_expression,
  [sym__simple_expression] = sym__simple_expression,
  [sym__operand_expression] = sym__operand_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym__argument] = sym__argument,
  [sym_member_access] = sym_member_access,
  [sym_type_expression] = sym_type_expression,
  [sym_type_body] = sym_type_body,
  [sym__type_case_list] = sym__type_case_list,
  [sym_type_case] = sym_type_case,
  [sym__literal] = sym__literal,
  [sym_string_literal] = sym_string_literal,
  [sym_group_literal] = sym_group_literal,
  [sym_number_literal] = sym_number_literal,
  [sym_array_literal] = sym_array_literal,
  [sym_function_literal] = sym_function_literal,
  [sym_parameter_list] = sym_parameter_list,
  [sym__statement_terminator] = sym__statement_terminator,
  [sym__list_terminator] = sym__list_terminator,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_import_module_repeat1] = aux_sym_import_module_repeat1,
  [aux_sym_import_members_repeat1] = aux_sym_import_members_repeat1,
  [aux_sym_data_property_list_repeat1] = aux_sym_data_property_list_repeat1,
  [aux_sym_enum_case_list_repeat1] = aux_sym_enum_case_list_repeat1,
  [aux_sym__statement_list_repeat1] = aux_sym__statement_list_repeat1,
  [aux_sym_complex_invocation_expression_repeat1] = aux_sym_complex_invocation_expression_repeat1,
  [aux_sym__type_case_list_repeat1] = aux_sym__type_case_list_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_array_literal_repeat1] = aux_sym_array_literal_repeat1,
  [alias_sym_enum_case_reference] = alias_sym_enum_case_reference,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extern] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__statement_terminator_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__list_terminator_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_package_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__scope_level_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_import_module] = {
    .visible = true,
    .named = true,
  },
  [sym_import_members] = {
    .visible = true,
    .named = true,
  },
  [sym_let_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_data_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_data_property_list] = {
    .visible = true,
    .named = true,
  },
  [sym__data_property] = {
    .visible = false,
    .named = true,
  },
  [sym_data_property_value] = {
    .visible = true,
    .named = true,
  },
  [sym_data_property_function] = {
    .visible = true,
    .named = true,
  },
  [sym_extern_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_case_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__enum_case] = {
    .visible = false,
    .named = false,
  },
  [sym__statement_list] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__complex_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_complex_invocation_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_invocation_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_expression] = {
    .visible = false,
    .named = true,
  },
  [sym__operand_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym_member_access] = {
    .visible = true,
    .named = true,
  },
  [sym_type_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_type_body] = {
    .visible = true,
    .named = true,
  },
  [sym__type_case_list] = {
    .visible = false,
    .named = true,
  },
  [sym_type_case] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_group_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_array_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_function_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__statement_terminator] = {
    .visible = false,
    .named = true,
  },
  [sym__list_terminator] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_members_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_property_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_case_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_complex_invocation_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__type_case_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_enum_case_reference] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_body = 1,
  field_cases = 2,
  field_expression = 3,
  field_function = 4,
  field_label = 5,
  field_members = 6,
  field_name = 7,
  field_package = 8,
  field_parameters = 9,
  field_properties = 10,
  field_type = 11,
  field_value = 12,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_cases] = "cases",
  [field_expression] = "expression",
  [field_function] = "function",
  [field_label] = "label",
  [field_members] = "members",
  [field_name] = "name",
  [field_package] = "package",
  [field_parameters] = "parameters",
  [field_properties] = "properties",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 2},
  [12] = {.index = 16, .length = 1},
  [14] = {.index = 17, .length = 2},
  [15] = {.index = 19, .length = 2},
  [16] = {.index = 21, .length = 2},
  [17] = {.index = 23, .length = 2},
  [18] = {.index = 25, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_package, 0},
  [2] =
    {field_function, 0},
  [3] =
    {field_members, 2},
    {field_name, 1},
  [5] =
    {field_name, 1},
    {field_value, 2},
  [7] =
    {field_function, 2},
    {field_name, 1},
  [9] =
    {field_body, 2},
    {field_type, 1},
  [11] =
    {field_expression, 1},
  [12] =
    {field_body, 2},
  [13] =
    {field_parameters, 1},
  [14] =
    {field_name, 1},
    {field_value, 3},
  [16] =
    {field_name, 0},
  [17] =
    {field_body, 3},
    {field_parameters, 1},
  [19] =
    {field_name, 0},
    {field_parameters, 1},
  [21] =
    {field_name, 1},
    {field_properties, 3},
  [23] =
    {field_cases, 3},
    {field_name, 1},
  [25] =
    {field_body, 2},
    {field_label, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [13] = {
    [0] = alias_sym_enum_case_reference,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6528
    ? (c < 2969
      ? (c < 2144
        ? (c < 1015
          ? (c < 248
            ? (c < 'q'
              ? (c < 'g'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'c')))
                : (c <= 'h' || (c < 'm'
                  ? (c >= 'j' && c <= 'k')
                  : c <= 'o')))
              : (c <= 's' || (c < 186
                ? (c < 170
                  ? (c >= 'u' && c <= 'z')
                  : (c <= 170 || c == 181))
                : (c <= 186 || (c < 216
                  ? (c >= 192 && c <= 214)
                  : c <= 246)))))
            : (c <= 705 || (c < 890
              ? (c < 750
                ? (c < 736
                  ? (c >= 710 && c <= 721)
                  : (c <= 740 || c == 748))
                : (c <= 750 || (c < 886
                  ? (c >= 880 && c <= 884)
                  : c <= 887)))
              : (c <= 893 || (c < 908
                ? (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))
                : (c <= 908 || (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)))))))
          : (c <= 1153 || (c < 1791
            ? (c < 1568
              ? (c < 1376
                ? (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : c <= 1522)))
              : (c <= 1610 || (c < 1765
                ? (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))
                : (c <= 1766 || (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : c <= 1788)))))
            : (c <= 1791 || (c < 2042
              ? (c < 1969
                ? (c < 1810
                  ? c == 1808
                  : (c <= 1839 || (c >= 1869 && c <= 1957)))
                : (c <= 1969 || (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : c <= 2037)))
              : (c <= 2042 || (c < 2084
                ? (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)
                : (c <= 2084 || (c < 2112
                  ? c == 2088
                  : c <= 2136)))))))))
        : (c <= 2154 || (c < 2649
          ? (c < 2493
            ? (c < 2417
              ? (c < 2365
                ? (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : (c <= 2247 || (c >= 2308 && c <= 2361)))
                : (c <= 2365 || (c < 2392
                  ? c == 2384
                  : c <= 2401)))
              : (c <= 2432 || (c < 2474
                ? (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : (c <= 2448 || (c >= 2451 && c <= 2472)))
                : (c <= 2480 || (c < 2486
                  ? c == 2482
                  : c <= 2489)))))
            : (c <= 2493 || (c < 2575
              ? (c < 2544
                ? (c < 2524
                  ? c == 2510
                  : (c <= 2525 || (c >= 2527 && c <= 2529)))
                : (c <= 2545 || (c < 2565
                  ? c == 2556
                  : c <= 2570)))
              : (c <= 2576 || (c < 2610
                ? (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)
                : (c <= 2611 || (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)))))))
          : (c <= 2652 || (c < 2831
            ? (c < 2738
              ? (c < 2703
                ? (c < 2674
                  ? c == 2654
                  : (c <= 2676 || (c >= 2693 && c <= 2701)))
                : (c <= 2705 || (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : c <= 2736)))
              : (c <= 2739 || (c < 2784
                ? (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : (c <= 2749 || c == 2768))
                : (c <= 2785 || (c < 2821
                  ? c == 2809
                  : c <= 2828)))))
            : (c <= 2832 || (c < 2911
              ? (c < 2869
                ? (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : (c <= 2864 || (c >= 2866 && c <= 2867)))
                : (c <= 2873 || (c < 2908
                  ? c == 2877
                  : c <= 2909)))
              : (c <= 2913 || (c < 2949
                ? (c < 2947
                  ? c == 2929
                  : c <= 2947)
                : (c <= 2954 || (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)))))))))))
      : (c <= 2970 || (c < 4096
        ? (c < 3406
          ? (c < 3200
            ? (c < 3077
              ? (c < 2984
                ? (c < 2974
                  ? c == 2972
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : c <= 3024)))
              : (c <= 3084 || (c < 3133
                ? (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : (c <= 3112 || (c >= 3114 && c <= 3129)))
                : (c <= 3133 || (c < 3168
                  ? (c >= 3160 && c <= 3162)
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3294
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3342
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5984
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5902
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5900)))
                : (c <= 5905 || (c < 5952
                  ? (c >= 5920 && c <= 5937)
                  : c <= 5969)))))
            : (c <= 5996 || (c < 6279
              ? (c < 6108
                ? (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : (c <= 6067 || c == 6103))
                : (c <= 6108 || (c < 6272
                  ? (c >= 6176 && c <= 6264)
                  : c <= 6276)))
              : (c <= 6312 || (c < 6400
                ? (c < 6320
                  ? c == 6314
                  : c <= 6389)
                : (c <= 6430 || (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)))))))))))))
    : (c <= 6571 || (c < 43138
      ? (c < 8526
        ? (c < 8029
          ? (c < 7312
            ? (c < 7043
              ? (c < 6823
                ? (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : c <= 6987)))
              : (c <= 7072 || (c < 7245
                ? (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : (c <= 7141 || (c >= 7168 && c <= 7203)))
                : (c <= 7247 || (c < 7296
                  ? (c >= 7258 && c <= 7293)
                  : c <= 7304)))))
            : (c <= 7354 || (c < 7680
              ? (c < 7413
                ? (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : (c <= 7404 || (c >= 7406 && c <= 7411)))
                : (c <= 7414 || (c < 7424
                  ? c == 7418
                  : c <= 7615)))
              : (c <= 7957 || (c < 8016
                ? (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : (c <= 8005 || (c >= 8008 && c <= 8013)))
                : (c <= 8023 || (c < 8027
                  ? c == 8025
                  : c <= 8027)))))))
          : (c <= 8029 || (c < 8336
            ? (c < 8144
              ? (c < 8126
                ? (c < 8064
                  ? (c >= 8031 && c <= 8061)
                  : (c <= 8116 || (c >= 8118 && c <= 8124)))
                : (c <= 8126 || (c < 8134
                  ? (c >= 8130 && c <= 8132)
                  : c <= 8140)))
              : (c <= 8147 || (c < 8182
                ? (c < 8160
                  ? (c >= 8150 && c <= 8155)
                  : (c <= 8172 || (c >= 8178 && c <= 8180)))
                : (c <= 8188 || (c < 8319
                  ? c == 8305
                  : c <= 8319)))))
            : (c <= 8348 || (c < 8486
              ? (c < 8469
                ? (c < 8455
                  ? c == 8450
                  : (c <= 8455 || (c >= 8458 && c <= 8467)))
                : (c <= 8469 || (c < 8484
                  ? (c >= 8473 && c <= 8477)
                  : c <= 8484)))
              : (c <= 8486 || (c < 8495
                ? (c < 8490
                  ? c == 8488
                  : c <= 8493)
                : (c <= 8505 || (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : c <= 8521)))))))))
        : (c <= 8526 || (c < 12449
          ? (c < 11688
            ? (c < 11520
              ? (c < 11360
                ? (c < 11264
                  ? (c >= 8579 && c <= 8580)
                  : (c <= 11310 || (c >= 11312 && c <= 11358)))
                : (c <= 11492 || (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : c <= 11507)))
              : (c <= 11557 || (c < 11631
                ? (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))
                : (c <= 11631 || (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : c <= 11686)))))
            : (c <= 11694 || (c < 11823
              ? (c < 11720
                ? (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : c <= 11742)))
              : (c <= 11823 || (c < 12347
                ? (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42538
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42192
                ? (c < 40956
                  ? c == 19968
                  : (c <= 40956 || (c >= 40960 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42527)))))
            : (c <= 42539 || (c < 42946
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42725)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : c <= 42943)))
              : (c <= 42954 || (c < 43015
                ? (c < 43011
                  ? (c >= 42997 && c <= 43009)
                  : c <= 43013)
                : (c <= 43018 || (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65142
        ? (c < 43793
          ? (c < 43588
            ? (c < 43396
              ? (c < 43274
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : c <= 43388)))
              : (c <= 43442 || (c < 43514
                ? (c < 43488
                  ? c == 43471
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : c <= 43709)))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 750
            ? (c < 186
              ? (c < 'u'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 's')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1015
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2208
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2228 || (c < 2308
                  ? (c >= 2230 && c <= 2247)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4186
        ? (c < 3450
          ? (c < 3242
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3205
                ? (c < 3168
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || c == 3294))
                : (c <= 3297 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)))
              : (c <= 3344 || (c < 3406
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3455 || (c < 3751
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)))
              : (c <= 3635 || (c < 3718
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))
            : (c <= 3760 || (c < 3904
              ? (c < 3782
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))
              : (c <= 3911 || (c < 4096
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))))))))
        : (c <= 4189 || (c < 5024
          ? (c < 4698
            ? (c < 4295
              ? (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))))
            : (c <= 4701 || (c < 4802
              ? (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))
              : (c <= 4805 || (c < 4882
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)
                : (c <= 4885 || (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6103
            ? (c < 5888
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : c <= 5880)))
              : (c <= 5900 || (c < 5984
                ? (c < 5920
                  ? (c >= 5902 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 750
            ? (c < 186
              ? (c < 'f'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'c')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1015
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'g'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'c')))
                : (c <= 'k' || (c < 'u'
                  ? (c >= 'm' && c <= 's')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2208
        ? (c < 1162
          ? (c < 710
            ? (c < 'u'
              ? (c < 'g'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'c')))
                : (c <= 'h' || (c < 'm'
                  ? (c >= 'j' && c <= 'k')
                  : c <= 's')))
              : (c <= 'z' || (c < 192
                ? (c < 181
                  ? c == 170
                  : (c <= 181 || c == 186))
                : (c <= 214 || (c < 248
                  ? (c >= 216 && c <= 246)
                  : c <= 705)))))
            : (c <= 721 || (c < 895
              ? (c < 880
                ? (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))
                : (c <= 884 || (c < 890
                  ? (c >= 886 && c <= 887)
                  : c <= 893)))
              : (c <= 895 || (c < 910
                ? (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))
                : (c <= 929 || (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)))))))
          : (c <= 1327 || (c < 1808
            ? (c < 1646
              ? (c < 1488
                ? (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))
                : (c <= 1514 || (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : c <= 1610)))
              : (c <= 1647 || (c < 1774
                ? (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))
                : (c <= 1775 || (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : c <= 1791)))))
            : (c <= 1808 || (c < 2048
              ? (c < 1994
                ? (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : c <= 2042)))
              : (c <= 2069 || (c < 2088
                ? (c < 2084
                  ? c == 2074
                  : c <= 2084)
                : (c <= 2088 || (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)))))))))
        : (c <= 2228 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2230 && c <= 2247)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2432)))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2835
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2809
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)))))
            : (c <= 2856 || (c < 2929
              ? (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))
              : (c <= 2929 || (c < 2958
                ? (c < 2949
                  ? c == 2947
                  : c <= 2954)
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))))))))))
      : (c <= 2972 || (c < 4159
        ? (c < 3412
          ? (c < 3205
            ? (c < 3086
              ? (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3294
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1015
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'm' || (c < 'y'
                  ? (c >= 'o' && c <= 'w')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'b' || (c < 170
                  ? (c >= 'd' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_10(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'd' || (c < 170
                  ? (c >= 'f' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_11(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'f' || (c < 170
                  ? (c >= 'h' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_12(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'j' || (c < 170
                  ? (c >= 'l' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_13(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'l' || (c < 170
                  ? (c >= 'n' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_14(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'm' || (c < 170
                  ? (c >= 'o' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_15(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'n' || (c < 170
                  ? (c >= 'p' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_16(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'o' || (c < 170
                  ? (c >= 'q' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_17(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'q' || (c < 170
                  ? (c >= 's' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_18(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 's' || (c < 170
                  ? (c >= 'u' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_19(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 't' || (c < 170
                  ? (c >= 'v' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_20(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'x' || (c < 170
                  ? c == 'z'
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_21(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 750
            ? (c < 186
              ? (c < 'b'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1015
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(77);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(113);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(110);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '[') ADVANCE(76);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(113);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(58);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(77);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(113);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(81);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == ']') ADVANCE(77);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(113);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(77);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(113);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(48);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '[') ADVANCE(76);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(113);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(48);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '[') ADVANCE(76);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(113);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(58);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(113);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(61);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(116);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(20);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(113);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == '>') ADVANCE(78);
      END_STATE();
    case 21:
      if (lookahead == 'U') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 22:
      if (lookahead == '|') ADVANCE(62);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 32:
      if (eof) ADVANCE(34);
      if (lookahead == '!') ADVANCE(49);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '*') ADVANCE(50);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '-') ADVANCE(54);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '<') ADVANCE(59);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(58);
      if (lookahead == '[') ADVANCE(76);
      if (lookahead == ']') ADVANCE(77);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(113);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(110);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      if (lookahead == '!') ADVANCE(48);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '(') ADVANCE(74);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '[') ADVANCE(76);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(113);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 'i') ADVANCE(92);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_package);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(113);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(113);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(113);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(55);
      if (lookahead == '>') ADVANCE(78);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_func);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(113);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_data);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(113);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_extern);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(113);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_enum);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(113);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(116);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(113);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__statement_terminator_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__statement_terminator_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ';') ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__list_terminator_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__list_terminator_token1);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == ',') ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(113);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead == 'x') ADVANCE(104);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(113);
      if (lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(113);
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(113);
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(113);
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(113);
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(113);
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(113);
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(113);
      if (lookahead == 'k') ADVANCE(112);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(113);
      if (lookahead == 'm') ADVANCE(98);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(113);
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(113);
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(113);
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(113);
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(113);
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(113);
      if (lookahead == 'p') ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(113);
      if (lookahead == 'p') ADVANCE(87);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(113);
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(113);
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(113);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(113);
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(113);
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(113);
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(113);
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(113);
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_20(lookahead)) ADVANCE(113);
      if (lookahead == 'y') ADVANCE(99);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(113);
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(113);
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(113);
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(113);
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(116);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 33},
  [3] = {.lex_state = 33},
  [4] = {.lex_state = 33},
  [5] = {.lex_state = 33},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 4},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 4},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 7},
  [154] = {.lex_state = 5},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 5},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 5},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 33},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 10},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 10},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 10},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 10},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 10},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 10},
  [218] = {.lex_state = 10},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 10},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 5},
  [223] = {.lex_state = 5},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 10},
  [226] = {.lex_state = 16},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 16},
  [231] = {.lex_state = 16},
  [232] = {.lex_state = 5},
  [233] = {.lex_state = 16},
  [234] = {.lex_state = 3},
  [235] = {.lex_state = 5},
  [236] = {.lex_state = 16},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 4},
  [239] = {.lex_state = 5},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 5},
  [242] = {.lex_state = 3},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 6},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 2},
  [252] = {.lex_state = 16},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 16},
  [255] = {.lex_state = 6},
  [256] = {.lex_state = 6},
  [257] = {.lex_state = 6},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 4},
  [262] = {.lex_state = 16},
  [263] = {.lex_state = 4},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 6},
  [266] = {.lex_state = 4},
  [267] = {.lex_state = 6},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 16},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 16},
  [275] = {.lex_state = 4},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 4},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 4},
  [280] = {.lex_state = 4},
  [281] = {.lex_state = 6},
  [282] = {.lex_state = 4},
  [283] = {.lex_state = 6},
  [284] = {.lex_state = 16},
  [285] = {.lex_state = 4},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 6},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 6},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 4},
  [292] = {.lex_state = 2},
  [293] = {.lex_state = 6},
  [294] = {.lex_state = 16},
  [295] = {.lex_state = 4},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 4},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 2},
  [300] = {.lex_state = 16},
  [301] = {.lex_state = 16},
  [302] = {.lex_state = 16},
  [303] = {.lex_state = 16},
  [304] = {.lex_state = 2},
  [305] = {.lex_state = 16},
  [306] = {.lex_state = 16},
  [307] = {.lex_state = 1},
  [308] = {.lex_state = 1},
  [309] = {.lex_state = 4},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 1},
  [313] = {.lex_state = 2},
  [314] = {.lex_state = 2},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 4},
  [317] = {.lex_state = 3},
  [318] = {.lex_state = 1},
  [319] = {.lex_state = 16},
  [320] = {.lex_state = 16},
  [321] = {.lex_state = 16},
  [322] = {.lex_state = 1},
  [323] = {.lex_state = 16},
  [324] = {.lex_state = 1},
  [325] = {.lex_state = 1},
  [326] = {.lex_state = 1},
  [327] = {.lex_state = 1},
  [328] = {.lex_state = 1},
  [329] = {.lex_state = 1},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 16},
  [332] = {.lex_state = 16},
  [333] = {.lex_state = 4},
  [334] = {.lex_state = 16},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 16},
  [341] = {.lex_state = 16},
  [342] = {.lex_state = 1},
  [343] = {.lex_state = 4},
  [344] = {.lex_state = 1},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 1},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 1},
  [350] = {.lex_state = 4},
  [351] = {.lex_state = 1},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 16},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 16},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 16},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 1},
  [360] = {.lex_state = 16},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 1},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 16},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 1},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 16},
  [376] = {.lex_state = 16},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 33},
  [379] = {.lex_state = 1},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 1},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 16},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 1},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 16},
  [393] = {.lex_state = 1},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 33},
  [397] = {.lex_state = 16},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 16},
  [401] = {.lex_state = 33},
  [402] = {.lex_state = 1},
  [403] = {.lex_state = 16},
  [404] = {.lex_state = 16},
  [405] = {.lex_state = 33},
  [406] = {.lex_state = 16},
  [407] = {.lex_state = 16},
  [408] = {.lex_state = 16},
  [409] = {.lex_state = 33},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 1},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 33},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_data] = ACTIONS(1),
    [anon_sym_extern] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(398),
    [sym_package_declaration] = STATE(326),
    [sym__top_level_declaration] = STATE(327),
    [sym_import_declaration] = STATE(327),
    [sym_let_declaration] = STATE(327),
    [sym_function_declaration] = STATE(327),
    [sym_data_declaration] = STATE(327),
    [sym_extern_declaration] = STATE(327),
    [sym_enum_declaration] = STATE(327),
    [sym__complex_expression] = STATE(327),
    [sym_complex_invocation_expression] = STATE(327),
    [sym__operand_expression] = STATE(218),
    [sym_unary_expression] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym__argument] = STATE(6),
    [sym_member_access] = STATE(6),
    [sym_type_expression] = STATE(6),
    [sym__literal] = STATE(28),
    [sym_string_literal] = STATE(28),
    [sym_group_literal] = STATE(28),
    [sym_number_literal] = STATE(28),
    [sym_array_literal] = STATE(28),
    [sym_function_literal] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_package] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_let] = ACTIONS(13),
    [anon_sym_func] = ACTIONS(15),
    [anon_sym_data] = ACTIONS(17),
    [anon_sym_extern] = ACTIONS(19),
    [anon_sym_enum] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_type] = ACTIONS(25),
    [anon_sym_DQUOTE] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym__number] = ACTIONS(35),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_data,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(218), 1,
      sym__operand_expression,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(327), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [83] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_data,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(218), 1,
      sym__operand_expression,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(327), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [166] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_data,
    ACTIONS(19), 1,
      anon_sym_extern,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(218), 1,
      sym__operand_expression,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(327), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [249] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      anon_sym_import,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_let,
    ACTIONS(54), 1,
      anon_sym_func,
    ACTIONS(57), 1,
      anon_sym_data,
    ACTIONS(60), 1,
      anon_sym_extern,
    ACTIONS(63), 1,
      anon_sym_enum,
    ACTIONS(66), 1,
      anon_sym_BANG,
    ACTIONS(69), 1,
      anon_sym_type,
    ACTIONS(72), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(78), 1,
      anon_sym_LBRACK,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(84), 1,
      sym__number,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(218), 1,
      sym__operand_expression,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(327), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [332] = 17,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 1,
      anon_sym_BANG,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      sym_comment,
    STATE(218), 1,
      sym__operand_expression,
    STATE(175), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(264), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(24), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    ACTIONS(93), 12,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [404] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      anon_sym_BANG,
    ACTIONS(113), 1,
      anon_sym_type,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__number,
    STATE(217), 1,
      sym__operand_expression,
    STATE(207), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(310), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(25), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    ACTIONS(93), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(34), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    ACTIONS(111), 8,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [475] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym__operand_expression,
    STATE(370), 1,
      sym__statement_list,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(276), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [551] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym__operand_expression,
    STATE(363), 1,
      sym__statement_list,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(276), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [627] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym__operand_expression,
    STATE(389), 1,
      sym__statement_list,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(276), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [703] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym__operand_expression,
    STATE(399), 1,
      sym__statement_list,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(276), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [779] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym__operand_expression,
    STATE(352), 1,
      sym__statement_list,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(276), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [855] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym__operand_expression,
    STATE(373), 1,
      sym__statement_list,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(276), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [931] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym__operand_expression,
    STATE(371), 1,
      sym__statement_list,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(276), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1007] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym__operand_expression,
    STATE(384), 1,
      sym__statement_list,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(276), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1083] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym__operand_expression,
    STATE(361), 1,
      sym__statement_list,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(276), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1159] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym__operand_expression,
    STATE(387), 1,
      sym__statement_list,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(276), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1235] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    ACTIONS(145), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym__operand_expression,
    STATE(380), 1,
      sym__statement_list,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(276), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1311] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym__operand_expression,
    STATE(383), 1,
      sym__statement_list,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(276), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1387] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    ACTIONS(149), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym__operand_expression,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(342), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1460] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(218), 1,
      sym__operand_expression,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(342), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1533] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_let,
    ACTIONS(15), 1,
      anon_sym_func,
    ACTIONS(17), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_enum,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    STATE(218), 1,
      sym__operand_expression,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(342), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1603] = 13,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(161), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(169), 1,
      sym__number,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    STATE(316), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    ACTIONS(93), 12,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1662] = 13,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    STATE(307), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    ACTIONS(93), 12,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1721] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_type,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__number,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(337), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    ACTIONS(93), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(34), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    ACTIONS(111), 8,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1779] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_DOT,
    ACTIONS(176), 1,
      aux_sym__statement_terminator_token1,
    STATE(26), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(174), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym__number,
  [1816] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(182), 1,
      aux_sym__statement_terminator_token1,
    STATE(26), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(180), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym__number,
  [1853] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_DOT,
    ACTIONS(186), 1,
      aux_sym__statement_terminator_token1,
    STATE(27), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(184), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym__number,
  [1890] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(174), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(176), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__number,
  [1926] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_DOT,
    STATE(29), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(180), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(182), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__number,
  [1962] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(174), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym__number,
  [1994] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(193), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(180), 21,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [2030] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(197), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(195), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym__number,
  [2062] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(184), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(186), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__number,
  [2098] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(201), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(199), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym__number,
  [2130] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(205), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(203), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym__number,
  [2162] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(209), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(207), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym__number,
  [2194] = 16,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      anon_sym_BANG,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(213), 1,
      aux_sym__statement_terminator_token1,
    STATE(218), 1,
      sym__operand_expression,
    STATE(175), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(298), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(24), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [2252] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(217), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(215), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym__number,
  [2284] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(219), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym__number,
  [2316] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(223), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym__number,
  [2348] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(186), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(193), 1,
      anon_sym_DOT,
    STATE(32), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(184), 21,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [2384] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(227), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym__number,
  [2416] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(231), 1,
      anon_sym_DOT,
    STATE(44), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(174), 21,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [2452] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(236), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(234), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym__number,
  [2484] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(240), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(238), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym__number,
  [2516] = 16,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      anon_sym_BANG,
    ACTIONS(95), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_LBRACK,
    ACTIONS(103), 1,
      sym__number,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    ACTIONS(244), 1,
      aux_sym__statement_terminator_token1,
    STATE(218), 1,
      sym__operand_expression,
    STATE(175), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(298), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(24), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [2574] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(246), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym__number,
  [2606] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(252), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(250), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym__number,
  [2638] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    ACTIONS(266), 1,
      sym__number,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(246), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [2693] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      sym__number,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(333), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [2748] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(227), 22,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [2779] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(248), 16,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__number,
  [2810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(252), 16,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__number,
  [2841] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      sym__number,
    ACTIONS(270), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(266), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [2896] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      sym__number,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(333), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [2951] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      sym__number,
    ACTIONS(274), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(333), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [3006] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(217), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(215), 22,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [3037] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(276), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym__number,
  [3068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(229), 16,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__number,
  [3099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(217), 16,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__number,
  [3130] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(280), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym__number,
  [3161] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(223), 22,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [3192] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(174), 22,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [3223] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      sym__number,
    ACTIONS(284), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(279), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [3278] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      sym__number,
    ACTIONS(286), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(333), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [3333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(176), 16,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__number,
  [3364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(197), 16,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__number,
  [3395] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      sym__number,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(333), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [3450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(201), 16,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__number,
  [3481] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      sym__number,
    ACTIONS(290), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(333), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [3536] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(292), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_identifier,
      sym__number,
  [3567] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      sym__number,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(333), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [3622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(205), 16,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__number,
  [3653] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      sym__number,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(253), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [3708] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(209), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(207), 22,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [3739] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      sym__number,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(333), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [3794] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(236), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(234), 22,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [3825] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      sym__number,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(333), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [3880] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      sym__number,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(333), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [3935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(240), 16,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__number,
  [3966] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    ACTIONS(306), 1,
      anon_sym_EQ,
    STATE(218), 1,
      sym__operand_expression,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(329), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(236), 16,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__number,
  [4052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(221), 16,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__number,
  [4083] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      sym__number,
    ACTIONS(308), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(333), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(209), 16,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__number,
  [4169] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      sym__number,
    ACTIONS(310), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(333), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4224] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(219), 22,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [4255] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(240), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(238), 22,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [4286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(225), 16,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__number,
  [4317] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(246), 22,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [4348] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(252), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(250), 22,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [4379] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(197), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(195), 22,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [4410] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      sym__number,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(261), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4465] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      sym__number,
    ACTIONS(314), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(295), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4520] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(201), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(199), 22,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [4551] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_type,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__number,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    ACTIONS(316), 1,
      anon_sym_BANG,
    STATE(217), 1,
      sym__operand_expression,
    STATE(207), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(336), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(25), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(34), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4606] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(205), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(203), 22,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [4637] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_type,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__number,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    ACTIONS(316), 1,
      anon_sym_BANG,
    STATE(217), 1,
      sym__operand_expression,
    STATE(207), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(336), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(25), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(34), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4692] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_type,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__number,
    ACTIONS(316), 1,
      anon_sym_BANG,
    STATE(217), 1,
      sym__operand_expression,
    STATE(215), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(365), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(7), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(34), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4744] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(292), 21,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [4774] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_type,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__number,
    ACTIONS(316), 1,
      anon_sym_BANG,
    STATE(217), 1,
      sym__operand_expression,
    STATE(215), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(386), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(7), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(34), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4826] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_type,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__number,
    ACTIONS(316), 1,
      anon_sym_BANG,
    STATE(217), 1,
      sym__operand_expression,
    STATE(207), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(336), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(25), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(34), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4878] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(280), 21,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [4908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(294), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__number,
  [4938] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_type,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__number,
    ACTIONS(316), 1,
      anon_sym_BANG,
    STATE(217), 1,
      sym__operand_expression,
    STATE(215), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(391), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(7), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(34), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4990] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    STATE(218), 1,
      sym__operand_expression,
    STATE(175), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(298), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(24), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [5042] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      sym__number,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(333), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [5094] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_type,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      sym__number,
    STATE(218), 1,
      sym__operand_expression,
    STATE(214), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(325), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(28), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [5146] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_type,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__number,
    ACTIONS(316), 1,
      anon_sym_BANG,
    STATE(217), 1,
      sym__operand_expression,
    STATE(215), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(381), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(7), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(34), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [5198] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(278), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__number,
  [5228] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_type,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(258), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_LPAREN,
    ACTIONS(262), 1,
      anon_sym_LBRACK,
    ACTIONS(266), 1,
      sym__number,
    STATE(216), 1,
      sym__operand_expression,
    STATE(185), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(343), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(42), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [5280] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_type,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__number,
    ACTIONS(316), 1,
      anon_sym_BANG,
    STATE(217), 1,
      sym__operand_expression,
    STATE(215), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(358), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(7), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(34), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [5332] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(276), 21,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [5362] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_type,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__number,
    ACTIONS(316), 1,
      anon_sym_BANG,
    STATE(217), 1,
      sym__operand_expression,
    STATE(215), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(366), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(7), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(34), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [5414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(282), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      sym__number,
  [5444] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(320), 1,
      anon_sym_type,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(330), 1,
      sym__number,
    STATE(134), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(173), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
  [5488] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    ACTIONS(334), 1,
      anon_sym_type,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 1,
      sym__number,
    STATE(129), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(201), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
  [5532] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    ACTIONS(334), 1,
      anon_sym_type,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 1,
      sym__number,
    STATE(129), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(200), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
  [5576] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    ACTIONS(334), 1,
      anon_sym_type,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 1,
      sym__number,
    STATE(129), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(199), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
  [5620] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    ACTIONS(334), 1,
      anon_sym_type,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 1,
      sym__number,
    STATE(129), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(198), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
  [5664] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(320), 1,
      anon_sym_type,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(330), 1,
      sym__number,
    STATE(134), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(202), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
  [5708] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(320), 1,
      anon_sym_type,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(330), 1,
      sym__number,
    STATE(134), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(203), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
  [5752] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_BANG,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(320), 1,
      anon_sym_type,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(330), 1,
      sym__number,
    STATE(134), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(204), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
  [5796] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_BANG,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    ACTIONS(348), 1,
      anon_sym_type,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(358), 1,
      sym__number,
    STATE(169), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(213), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
  [5840] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_BANG,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    ACTIONS(348), 1,
      anon_sym_type,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(358), 1,
      sym__number,
    STATE(169), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(205), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
  [5884] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_BANG,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    ACTIONS(348), 1,
      anon_sym_type,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(358), 1,
      sym__number,
    STATE(169), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(208), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
  [5928] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_BANG,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    ACTIONS(348), 1,
      anon_sym_type,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(358), 1,
      sym__number,
    STATE(169), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(206), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
  [5972] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(186), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(360), 1,
      anon_sym_DOT,
    STATE(132), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(184), 14,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6001] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(362), 1,
      anon_sym_DOT,
    STATE(130), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(174), 14,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6030] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(365), 1,
      anon_sym_DOT,
    STATE(131), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(174), 14,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [6059] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(360), 1,
      anon_sym_DOT,
    STATE(130), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(180), 14,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6088] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(182), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(368), 1,
      anon_sym_DOT,
    STATE(131), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(180), 14,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [6117] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(186), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(368), 1,
      anon_sym_DOT,
    STATE(133), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(184), 14,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [6146] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(197), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(195), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6170] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(201), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(199), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6194] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(201), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(199), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [6218] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(205), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(203), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [6242] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_type,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__number,
    STATE(347), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(34), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [6280] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_type,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__number,
    STATE(348), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(34), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [6318] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
    ACTIONS(334), 1,
      anon_sym_type,
    ACTIONS(336), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_LBRACK,
    ACTIONS(342), 1,
      sym_identifier,
    ACTIONS(344), 1,
      sym__number,
    STATE(182), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(129), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [6356] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_type,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__number,
    STATE(345), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(34), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [6394] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_type,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__number,
    STATE(330), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(34), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [6432] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(240), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(238), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [6456] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_type,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__number,
    STATE(335), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(34), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [6494] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_type,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_LPAREN,
    ACTIONS(119), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_identifier,
    ACTIONS(123), 1,
      sym__number,
    STATE(338), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(34), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [6532] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(236), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(234), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [6556] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(219), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [6580] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(209), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(207), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [6604] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(246), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [6628] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(223), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [6652] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(252), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(250), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [6676] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_LBRACE,
    ACTIONS(320), 1,
      anon_sym_type,
    ACTIONS(322), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      anon_sym_LBRACK,
    ACTIONS(328), 1,
      sym_identifier,
    ACTIONS(330), 1,
      sym__number,
    STATE(194), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(134), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [6714] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(197), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(195), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [6738] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOT,
    STATE(155), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(174), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(176), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [6766] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(227), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [6790] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    STATE(155), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(180), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(182), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [6818] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(217), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(215), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [6842] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(225), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(223), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6866] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
    ACTIONS(348), 1,
      anon_sym_type,
    ACTIONS(350), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      anon_sym_LPAREN,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(356), 1,
      sym_identifier,
    ACTIONS(358), 1,
      sym__number,
    STATE(211), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(169), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [6904] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(236), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(234), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6928] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(248), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(246), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6952] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(252), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(250), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6976] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(217), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(215), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7000] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(209), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(207), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7024] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(221), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(219), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7048] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(229), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(227), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7072] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(174), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7096] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    STATE(157), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(184), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(186), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [7124] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(240), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(238), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7148] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(174), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [7172] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(205), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(203), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7196] = 7,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(375), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    ACTIONS(377), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(381), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [7227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(197), 12,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [7250] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(93), 12,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(252), 12,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [7298] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(292), 14,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(209), 12,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [7344] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(294), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(292), 14,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [7367] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(240), 12,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [7390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(205), 12,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [7413] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(387), 14,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(248), 12,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [7459] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(276), 14,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7482] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    ACTIONS(93), 12,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym__number,
    ACTIONS(391), 8,
      anon_sym_import,
      anon_sym_let,
      anon_sym_func,
      anon_sym_data,
      anon_sym_extern,
      anon_sym_enum,
      anon_sym_type,
      sym_identifier,
  [7530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(201), 12,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [7553] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(236), 12,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [7576] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(280), 14,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7599] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(225), 12,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [7622] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(282), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(280), 14,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [7645] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(176), 12,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [7668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(221), 12,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [7691] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(387), 14,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [7714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(229), 12,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [7737] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(276), 14,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [7760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(217), 12,
      anon_sym_DOT,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [7783] = 7,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(375), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(399), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(397), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [7814] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(395), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 10,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7841] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(393), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(375), 12,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7866] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(375), 14,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7889] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(377), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(375), 10,
      anon_sym_RBRACE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [7916] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(377), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(375), 12,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [7941] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(385), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(375), 14,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [7964] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_STAR,
    ACTIONS(403), 1,
      anon_sym_SLASH,
    ACTIONS(375), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(405), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(385), 8,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [7992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [8014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(93), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(111), 9,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8038] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_STAR,
    ACTIONS(403), 1,
      anon_sym_SLASH,
    ACTIONS(375), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 10,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [8064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(294), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [8086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(278), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [8108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(389), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [8130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(282), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [8152] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_STAR,
    ACTIONS(403), 1,
      anon_sym_SLASH,
    ACTIONS(385), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(405), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(409), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(411), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(407), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8184] = 4,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(93), 12,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8208] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(111), 9,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8231] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(413), 1,
      anon_sym_STAR,
    ACTIONS(381), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(415), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(419), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(417), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8259] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_STAR,
    ACTIONS(403), 1,
      anon_sym_SLASH,
    ACTIONS(405), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(409), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(411), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(407), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8287] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_SLASH,
    ACTIONS(421), 1,
      anon_sym_STAR,
    ACTIONS(397), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(423), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(427), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(425), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8315] = 9,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    ACTIONS(431), 1,
      anon_sym_data,
    ACTIONS(433), 1,
      anon_sym_enum,
    ACTIONS(435), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(437), 1,
      sym_identifier,
    STATE(225), 1,
      sym__list_terminator,
    STATE(243), 1,
      aux_sym_enum_case_list_repeat1,
    STATE(223), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [8345] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_data,
    ACTIONS(433), 1,
      anon_sym_enum,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_RBRACE,
    STATE(377), 1,
      sym_enum_case_list,
    STATE(219), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [8369] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_data,
    ACTIONS(433), 1,
      anon_sym_enum,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      sym_enum_case_list,
    STATE(219), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [8393] = 7,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_data,
    ACTIONS(433), 1,
      anon_sym_enum,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    ACTIONS(445), 1,
      aux_sym__list_terminator_token1,
    STATE(223), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [8417] = 7,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    ACTIONS(449), 1,
      anon_sym_data,
    ACTIONS(452), 1,
      anon_sym_enum,
    ACTIONS(455), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(457), 1,
      sym_identifier,
    STATE(223), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [8441] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_data,
    ACTIONS(433), 1,
      anon_sym_enum,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(460), 1,
      anon_sym_RBRACE,
    STATE(222), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [8462] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_data,
    ACTIONS(433), 1,
      anon_sym_enum,
    ACTIONS(437), 1,
      sym_identifier,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    STATE(222), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [8483] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_RBRACE,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(368), 1,
      sym_data_property_list,
    STATE(290), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [8501] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    ACTIONS(472), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(470), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8517] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_LBRACE,
    ACTIONS(478), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(476), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8533] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_data,
    ACTIONS(433), 1,
      anon_sym_enum,
    ACTIONS(437), 1,
      sym_identifier,
    STATE(222), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [8551] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(480), 1,
      anon_sym_RBRACE,
    STATE(410), 1,
      sym_data_property_list,
    STATE(290), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [8569] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    STATE(369), 1,
      sym_data_property_list,
    STATE(290), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [8587] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(486), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(484), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8600] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
    STATE(322), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [8615] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(492), 1,
      aux_sym__list_terminator_token1,
    STATE(242), 1,
      aux_sym_import_members_repeat1,
    STATE(314), 1,
      sym__list_terminator,
    ACTIONS(490), 2,
      anon_sym_RBRACE,
      aux_sym__statement_terminator_token1,
  [8632] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(494), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_RBRACE,
    STATE(322), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [8660] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(502), 1,
      aux_sym__list_terminator_token1,
    STATE(237), 1,
      aux_sym_import_members_repeat1,
    STATE(376), 1,
      sym__list_terminator,
    ACTIONS(500), 2,
      anon_sym_RBRACE,
      aux_sym__statement_terminator_token1,
  [8677] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(505), 1,
      aux_sym__list_terminator_token1,
    STATE(238), 1,
      aux_sym_import_members_repeat1,
    STATE(355), 1,
      sym__list_terminator,
    ACTIONS(500), 2,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [8694] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(510), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(508), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8707] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(514), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(512), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8720] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(518), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(516), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8733] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(522), 1,
      aux_sym__list_terminator_token1,
    STATE(237), 1,
      aux_sym_import_members_repeat1,
    STATE(304), 1,
      sym__list_terminator,
    ACTIONS(520), 2,
      anon_sym_RBRACE,
      aux_sym__statement_terminator_token1,
  [8750] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
    ACTIONS(526), 1,
      aux_sym__list_terminator_token1,
    STATE(224), 1,
      sym__list_terminator,
    STATE(258), 1,
      aux_sym_enum_case_list_repeat1,
  [8766] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_DQUOTE,
    STATE(267), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(530), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8780] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_EQ_GT,
    ACTIONS(532), 1,
      aux_sym__list_terminator_token1,
    STATE(277), 1,
      aux_sym_import_members_repeat1,
    STATE(334), 1,
      sym__list_terminator,
  [8796] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(534), 1,
      anon_sym_RBRACK,
    ACTIONS(536), 1,
      aux_sym__list_terminator_token1,
    STATE(85), 1,
      sym__list_terminator,
    STATE(269), 1,
      aux_sym_array_literal_repeat1,
  [8812] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
    ACTIONS(540), 1,
      aux_sym__list_terminator_token1,
    STATE(247), 1,
      aux_sym__type_case_list_repeat1,
    STATE(331), 1,
      sym__list_terminator,
  [8828] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_DQUOTE,
    STATE(289), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(545), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8842] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_DQUOTE,
    STATE(248), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(549), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8856] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
    ACTIONS(553), 1,
      aux_sym__list_terminator_token1,
    STATE(80), 1,
      sym__list_terminator,
    STATE(280), 1,
      aux_sym_array_literal_repeat1,
  [8872] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_LBRACE,
    ACTIONS(557), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(559), 1,
      sym_identifier,
    STATE(402), 1,
      sym_parameter_list,
  [8888] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(282), 1,
      sym_type_case,
    STATE(374), 1,
      sym__type_case_list,
  [8904] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
    ACTIONS(567), 1,
      aux_sym__list_terminator_token1,
    STATE(79), 1,
      sym__list_terminator,
    STATE(250), 1,
      aux_sym_array_literal_repeat1,
  [8920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(322), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [8932] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_DQUOTE,
    STATE(289), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(545), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8946] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_DQUOTE,
    STATE(289), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(545), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8960] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    STATE(255), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(575), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8974] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    ACTIONS(577), 1,
      aux_sym__list_terminator_token1,
    STATE(229), 1,
      sym__list_terminator,
    STATE(258), 1,
      aux_sym_enum_case_list_repeat1,
  [8990] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
    ACTIONS(582), 1,
      aux_sym__statement_terminator_token1,
    STATE(254), 1,
      sym__statement_terminator,
    STATE(259), 1,
      aux_sym_data_property_list_repeat1,
  [9006] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
    ACTIONS(587), 1,
      aux_sym__list_terminator_token1,
    STATE(73), 1,
      sym__list_terminator,
    STATE(280), 1,
      aux_sym_array_literal_repeat1,
  [9022] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_RBRACK,
    ACTIONS(591), 1,
      aux_sym__list_terminator_token1,
    STATE(77), 1,
      sym__list_terminator,
    STATE(291), 1,
      aux_sym_array_literal_repeat1,
  [9038] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    STATE(282), 1,
      sym_type_case,
    STATE(364), 1,
      sym__type_case_list,
  [9054] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
    ACTIONS(597), 1,
      aux_sym__list_terminator_token1,
    STATE(247), 1,
      aux_sym__type_case_list_repeat1,
    STATE(319), 1,
      sym__list_terminator,
  [9070] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_RBRACE,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      aux_sym__statement_terminator_token1,
    STATE(288), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [9086] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    STATE(256), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(607), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [9100] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_RBRACK,
    ACTIONS(611), 1,
      aux_sym__list_terminator_token1,
    STATE(66), 1,
      sym__list_terminator,
    STATE(260), 1,
      aux_sym_array_literal_repeat1,
  [9116] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_DQUOTE,
    STATE(289), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(545), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [9130] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
    ACTIONS(617), 1,
      aux_sym__statement_terminator_token1,
    STATE(233), 1,
      sym__statement_terminator,
    STATE(259), 1,
      aux_sym_data_property_list_repeat1,
  [9146] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(619), 1,
      anon_sym_RBRACK,
    ACTIONS(621), 1,
      aux_sym__list_terminator_token1,
    STATE(87), 1,
      sym__list_terminator,
    STATE(280), 1,
      aux_sym_array_literal_repeat1,
  [9162] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(623), 1,
      anon_sym_RBRACE,
    STATE(282), 1,
      sym_type_case,
    STATE(390), 1,
      sym__type_case_list,
  [9178] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_DOT,
    ACTIONS(627), 1,
      anon_sym_LBRACE,
    ACTIONS(629), 1,
      aux_sym__statement_terminator_token1,
    STATE(26), 1,
      aux_sym_import_module_repeat1,
  [9194] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RBRACK,
    ACTIONS(633), 1,
      aux_sym__list_terminator_token1,
    STATE(56), 1,
      sym__list_terminator,
    STATE(280), 1,
      aux_sym_array_literal_repeat1,
  [9210] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
    ACTIONS(637), 1,
      aux_sym__statement_terminator_token1,
    STATE(22), 1,
      sym__statement_terminator,
    STATE(273), 1,
      aux_sym__statement_list_repeat1,
  [9226] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(640), 1,
      anon_sym_RBRACE,
    STATE(282), 1,
      sym_type_case,
    STATE(354), 1,
      sym__type_case_list,
  [9242] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    ACTIONS(644), 1,
      aux_sym__list_terminator_token1,
    STATE(238), 1,
      aux_sym_import_members_repeat1,
    STATE(321), 1,
      sym__list_terminator,
  [9258] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_RBRACE,
    ACTIONS(648), 1,
      aux_sym__statement_terminator_token1,
    STATE(21), 1,
      sym__statement_terminator,
    STATE(296), 1,
      aux_sym__statement_list_repeat1,
  [9274] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_EQ_GT,
    ACTIONS(650), 1,
      aux_sym__list_terminator_token1,
    STATE(238), 1,
      aux_sym_import_members_repeat1,
    STATE(332), 1,
      sym__list_terminator,
  [9290] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_RBRACE,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      aux_sym__statement_terminator_token1,
    STATE(278), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [9306] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_RBRACK,
    ACTIONS(661), 1,
      aux_sym__list_terminator_token1,
    STATE(57), 1,
      sym__list_terminator,
    STATE(272), 1,
      aux_sym_array_literal_repeat1,
  [9322] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RBRACK,
    ACTIONS(665), 1,
      aux_sym__list_terminator_token1,
    STATE(108), 1,
      sym__list_terminator,
    STATE(280), 1,
      aux_sym_array_literal_repeat1,
  [9338] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(668), 1,
      anon_sym_DQUOTE,
    STATE(289), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(545), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [9352] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    ACTIONS(672), 1,
      aux_sym__list_terminator_token1,
    STATE(263), 1,
      aux_sym__type_case_list_repeat1,
    STATE(320), 1,
      sym__list_terminator,
  [9368] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_DQUOTE,
    STATE(281), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(676), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [9382] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(678), 1,
      anon_sym_RBRACE,
    STATE(282), 1,
      sym_type_case,
    STATE(394), 1,
      sym__type_case_list,
  [9398] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_RBRACK,
    ACTIONS(682), 1,
      aux_sym__list_terminator_token1,
    STATE(69), 1,
      sym__list_terminator,
    STATE(280), 1,
      aux_sym_array_literal_repeat1,
  [9414] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(684), 1,
      anon_sym_DOT,
    ACTIONS(686), 1,
      anon_sym_LBRACE,
    ACTIONS(688), 1,
      aux_sym__statement_terminator_token1,
    STATE(271), 1,
      aux_sym_import_module_repeat1,
  [9430] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(690), 1,
      anon_sym_DQUOTE,
    STATE(293), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(692), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [9444] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    ACTIONS(244), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(694), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [9460] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_DQUOTE,
    STATE(289), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(698), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [9474] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_RBRACE,
    ACTIONS(703), 1,
      aux_sym__statement_terminator_token1,
    STATE(236), 1,
      sym__statement_terminator,
    STATE(268), 1,
      aux_sym_data_property_list_repeat1,
  [9490] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_RBRACK,
    ACTIONS(707), 1,
      aux_sym__list_terminator_token1,
    STATE(51), 1,
      sym__list_terminator,
    STATE(280), 1,
      aux_sym_array_literal_repeat1,
  [9506] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(559), 1,
      sym_identifier,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    ACTIONS(711), 1,
      aux_sym__statement_terminator_token1,
    STATE(351), 1,
      sym_parameter_list,
  [9522] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_DQUOTE,
    STATE(289), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(545), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [9536] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(715), 1,
      anon_sym_RBRACE,
    STATE(282), 1,
      sym_type_case,
    STATE(412), 1,
      sym__type_case_list,
  [9552] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_RBRACK,
    ACTIONS(719), 1,
      aux_sym__list_terminator_token1,
    STATE(71), 1,
      sym__list_terminator,
    STATE(285), 1,
      aux_sym_array_literal_repeat1,
  [9568] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RBRACE,
    ACTIONS(723), 1,
      aux_sym__statement_terminator_token1,
    STATE(20), 1,
      sym__statement_terminator,
    STATE(273), 1,
      aux_sym__statement_list_repeat1,
  [9584] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_RBRACE,
    ACTIONS(727), 1,
      aux_sym__list_terminator_token1,
    STATE(275), 1,
      aux_sym_import_members_repeat1,
    STATE(340), 1,
      sym__list_terminator,
  [9600] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(657), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(652), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [9611] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_LBRACE,
    ACTIONS(629), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(729), 1,
      sym_identifier,
  [9624] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_EQ_GT,
    ACTIONS(733), 1,
      sym_identifier,
    STATE(378), 1,
      sym_parameter_list,
  [9637] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_identifier,
    ACTIONS(735), 1,
      anon_sym_EQ_GT,
    STATE(413), 1,
      sym_parameter_list,
  [9650] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_identifier,
    ACTIONS(737), 1,
      anon_sym_EQ_GT,
    STATE(409), 1,
      sym_parameter_list,
  [9663] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_identifier,
    ACTIONS(739), 1,
      anon_sym_EQ_GT,
    STATE(405), 1,
      sym_parameter_list,
  [9676] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_RBRACE,
    ACTIONS(743), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(745), 1,
      sym_identifier,
  [9689] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_identifier,
    ACTIONS(747), 1,
      anon_sym_EQ_GT,
    STATE(401), 1,
      sym_parameter_list,
  [9702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_identifier,
    ACTIONS(749), 1,
      anon_sym_EQ_GT,
    STATE(396), 1,
      sym_parameter_list,
  [9715] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(753), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(751), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [9726] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_LBRACE,
    ACTIONS(757), 1,
      aux_sym__statement_terminator_token1,
    STATE(379), 1,
      sym_import_members,
  [9739] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(759), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(500), 2,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [9750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    ACTIONS(761), 1,
      anon_sym_COMMA,
    STATE(315), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [9763] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    ACTIONS(763), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [9776] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
    ACTIONS(478), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(766), 1,
      anon_sym_LBRACE,
  [9789] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym_identifier,
    ACTIONS(768), 1,
      anon_sym_LBRACE,
    ACTIONS(770), 1,
      aux_sym__statement_terminator_token1,
  [9802] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    ACTIONS(745), 1,
      sym_identifier,
    ACTIONS(772), 1,
      aux_sym__statement_terminator_token1,
  [9815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    STATE(311), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [9828] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(753), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(751), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [9839] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(500), 3,
      anon_sym_RBRACE,
      aux_sym__statement_terminator_token1,
      aux_sym__list_terminator_token1,
  [9848] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_RBRACE,
    ACTIONS(472), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(776), 1,
      anon_sym_LBRACE,
  [9861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
    STATE(350), 1,
      sym_type_case,
  [9874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
    STATE(350), 1,
      sym_type_case,
  [9887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    ACTIONS(784), 1,
      sym_identifier,
  [9897] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RBRACE,
    ACTIONS(786), 1,
      aux_sym__statement_terminator_token1,
  [9907] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      sym_identifier,
    STATE(308), 1,
      sym_import_module,
  [9917] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    ACTIONS(510), 1,
      aux_sym__statement_terminator_token1,
  [9927] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    ACTIONS(792), 1,
      aux_sym__statement_terminator_token1,
  [9937] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(794), 1,
      aux_sym__statement_terminator_token1,
    STATE(2), 1,
      sym__statement_terminator,
  [9947] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(796), 1,
      aux_sym__statement_terminator_token1,
    STATE(186), 1,
      sym__statement_terminator,
  [9957] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
    ACTIONS(800), 1,
      aux_sym__statement_terminator_token1,
  [9967] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_RBRACE,
    ACTIONS(804), 1,
      aux_sym__statement_terminator_token1,
  [9977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_LBRACE,
    STATE(105), 1,
      sym_type_body,
  [9987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      sym_identifier,
    STATE(350), 1,
      sym_type_case,
  [9997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_EQ_GT,
    ACTIONS(784), 1,
      sym_identifier,
  [10007] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RBRACK,
    ACTIONS(808), 1,
      aux_sym__list_terminator_token1,
  [10017] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_EQ_GT,
    ACTIONS(784), 1,
      sym_identifier,
  [10027] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_LBRACE,
    STATE(177), 1,
      sym_type_body,
  [10037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_LBRACE,
    STATE(179), 1,
      sym_type_body,
  [10063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(328), 1,
      sym_function_literal,
  [10073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_identifier,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
  [10083] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_RBRACE,
    ACTIONS(818), 1,
      sym_identifier,
  [10093] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RBRACE,
    ACTIONS(820), 1,
      aux_sym__statement_terminator_token1,
  [10103] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
    ACTIONS(824), 1,
      aux_sym__list_terminator_token1,
  [10113] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    ACTIONS(518), 1,
      aux_sym__statement_terminator_token1,
  [10123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_type_body,
  [10133] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    ACTIONS(514), 1,
      aux_sym__statement_terminator_token1,
  [10143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_LBRACE,
    STATE(209), 1,
      sym_type_body,
  [10153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_LBRACE,
    STATE(101), 1,
      sym_type_body,
  [10163] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
    ACTIONS(486), 1,
      aux_sym__statement_terminator_token1,
  [10173] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
    ACTIONS(832), 1,
      aux_sym__list_terminator_token1,
  [10183] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_RBRACE,
    ACTIONS(836), 1,
      aux_sym__statement_terminator_token1,
  [10193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_RBRACE,
  [10200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      sym_identifier,
  [10207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_RBRACE,
  [10214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_identifier,
  [10221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_RBRACE,
  [10228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym_identifier,
  [10235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_RPAREN,
  [10242] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(850), 1,
      aux_sym__statement_terminator_token1,
  [10249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym_identifier,
  [10256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_RBRACE,
  [10263] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(856), 1,
      aux_sym__statement_terminator_token1,
  [10270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_RBRACE,
  [10277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
  [10284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_RPAREN,
  [10291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_RPAREN,
  [10298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym_identifier,
  [10305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_RBRACE,
  [10312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_RBRACE,
  [10319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RBRACE,
  [10326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_RBRACE,
  [10333] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(876), 1,
      aux_sym__statement_terminator_token1,
  [10340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      anon_sym_RBRACE,
  [10347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
  [10354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym_identifier,
  [10361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      sym_identifier,
  [10368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_RBRACE,
  [10375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_EQ_GT,
  [10382] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(890), 1,
      aux_sym__statement_terminator_token1,
  [10389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_RBRACE,
  [10396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_RPAREN,
  [10403] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(896), 1,
      aux_sym__statement_terminator_token1,
  [10410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_RBRACE,
  [10417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_RBRACE,
  [10424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      sym_identifier,
  [10431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
  [10438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      anon_sym_RBRACE,
  [10445] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(908), 1,
      aux_sym__statement_terminator_token1,
  [10452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_RBRACE,
  [10459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
  [10466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RPAREN,
  [10473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_identifier,
  [10480] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(918), 1,
      aux_sym__statement_terminator_token1,
  [10487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_RBRACE,
  [10494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_COLON,
  [10501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_EQ_GT,
  [10508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      sym_identifier,
  [10515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      ts_builtin_sym_end,
  [10522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(930), 1,
      anon_sym_RBRACE,
  [10529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(932), 1,
      sym_identifier,
  [10536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      anon_sym_EQ_GT,
  [10543] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__statement_terminator_token1,
  [10550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      sym_identifier,
  [10557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      sym_identifier,
  [10564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_EQ_GT,
  [10571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      sym_identifier,
  [10578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym_identifier,
  [10585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      sym_identifier,
  [10592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      anon_sym_EQ_GT,
  [10599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_RBRACE,
  [10606] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(954), 1,
      aux_sym__statement_terminator_token1,
  [10613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      anon_sym_RBRACE,
  [10620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_EQ_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 166,
  [SMALL_STATE(5)] = 249,
  [SMALL_STATE(6)] = 332,
  [SMALL_STATE(7)] = 404,
  [SMALL_STATE(8)] = 475,
  [SMALL_STATE(9)] = 551,
  [SMALL_STATE(10)] = 627,
  [SMALL_STATE(11)] = 703,
  [SMALL_STATE(12)] = 779,
  [SMALL_STATE(13)] = 855,
  [SMALL_STATE(14)] = 931,
  [SMALL_STATE(15)] = 1007,
  [SMALL_STATE(16)] = 1083,
  [SMALL_STATE(17)] = 1159,
  [SMALL_STATE(18)] = 1235,
  [SMALL_STATE(19)] = 1311,
  [SMALL_STATE(20)] = 1387,
  [SMALL_STATE(21)] = 1460,
  [SMALL_STATE(22)] = 1533,
  [SMALL_STATE(23)] = 1603,
  [SMALL_STATE(24)] = 1662,
  [SMALL_STATE(25)] = 1721,
  [SMALL_STATE(26)] = 1779,
  [SMALL_STATE(27)] = 1816,
  [SMALL_STATE(28)] = 1853,
  [SMALL_STATE(29)] = 1890,
  [SMALL_STATE(30)] = 1926,
  [SMALL_STATE(31)] = 1962,
  [SMALL_STATE(32)] = 1994,
  [SMALL_STATE(33)] = 2030,
  [SMALL_STATE(34)] = 2062,
  [SMALL_STATE(35)] = 2098,
  [SMALL_STATE(36)] = 2130,
  [SMALL_STATE(37)] = 2162,
  [SMALL_STATE(38)] = 2194,
  [SMALL_STATE(39)] = 2252,
  [SMALL_STATE(40)] = 2284,
  [SMALL_STATE(41)] = 2316,
  [SMALL_STATE(42)] = 2348,
  [SMALL_STATE(43)] = 2384,
  [SMALL_STATE(44)] = 2416,
  [SMALL_STATE(45)] = 2452,
  [SMALL_STATE(46)] = 2484,
  [SMALL_STATE(47)] = 2516,
  [SMALL_STATE(48)] = 2574,
  [SMALL_STATE(49)] = 2606,
  [SMALL_STATE(50)] = 2638,
  [SMALL_STATE(51)] = 2693,
  [SMALL_STATE(52)] = 2748,
  [SMALL_STATE(53)] = 2779,
  [SMALL_STATE(54)] = 2810,
  [SMALL_STATE(55)] = 2841,
  [SMALL_STATE(56)] = 2896,
  [SMALL_STATE(57)] = 2951,
  [SMALL_STATE(58)] = 3006,
  [SMALL_STATE(59)] = 3037,
  [SMALL_STATE(60)] = 3068,
  [SMALL_STATE(61)] = 3099,
  [SMALL_STATE(62)] = 3130,
  [SMALL_STATE(63)] = 3161,
  [SMALL_STATE(64)] = 3192,
  [SMALL_STATE(65)] = 3223,
  [SMALL_STATE(66)] = 3278,
  [SMALL_STATE(67)] = 3333,
  [SMALL_STATE(68)] = 3364,
  [SMALL_STATE(69)] = 3395,
  [SMALL_STATE(70)] = 3450,
  [SMALL_STATE(71)] = 3481,
  [SMALL_STATE(72)] = 3536,
  [SMALL_STATE(73)] = 3567,
  [SMALL_STATE(74)] = 3622,
  [SMALL_STATE(75)] = 3653,
  [SMALL_STATE(76)] = 3708,
  [SMALL_STATE(77)] = 3739,
  [SMALL_STATE(78)] = 3794,
  [SMALL_STATE(79)] = 3825,
  [SMALL_STATE(80)] = 3880,
  [SMALL_STATE(81)] = 3935,
  [SMALL_STATE(82)] = 3966,
  [SMALL_STATE(83)] = 4021,
  [SMALL_STATE(84)] = 4052,
  [SMALL_STATE(85)] = 4083,
  [SMALL_STATE(86)] = 4138,
  [SMALL_STATE(87)] = 4169,
  [SMALL_STATE(88)] = 4224,
  [SMALL_STATE(89)] = 4255,
  [SMALL_STATE(90)] = 4286,
  [SMALL_STATE(91)] = 4317,
  [SMALL_STATE(92)] = 4348,
  [SMALL_STATE(93)] = 4379,
  [SMALL_STATE(94)] = 4410,
  [SMALL_STATE(95)] = 4465,
  [SMALL_STATE(96)] = 4520,
  [SMALL_STATE(97)] = 4551,
  [SMALL_STATE(98)] = 4606,
  [SMALL_STATE(99)] = 4637,
  [SMALL_STATE(100)] = 4692,
  [SMALL_STATE(101)] = 4744,
  [SMALL_STATE(102)] = 4774,
  [SMALL_STATE(103)] = 4826,
  [SMALL_STATE(104)] = 4878,
  [SMALL_STATE(105)] = 4908,
  [SMALL_STATE(106)] = 4938,
  [SMALL_STATE(107)] = 4990,
  [SMALL_STATE(108)] = 5042,
  [SMALL_STATE(109)] = 5094,
  [SMALL_STATE(110)] = 5146,
  [SMALL_STATE(111)] = 5198,
  [SMALL_STATE(112)] = 5228,
  [SMALL_STATE(113)] = 5280,
  [SMALL_STATE(114)] = 5332,
  [SMALL_STATE(115)] = 5362,
  [SMALL_STATE(116)] = 5414,
  [SMALL_STATE(117)] = 5444,
  [SMALL_STATE(118)] = 5488,
  [SMALL_STATE(119)] = 5532,
  [SMALL_STATE(120)] = 5576,
  [SMALL_STATE(121)] = 5620,
  [SMALL_STATE(122)] = 5664,
  [SMALL_STATE(123)] = 5708,
  [SMALL_STATE(124)] = 5752,
  [SMALL_STATE(125)] = 5796,
  [SMALL_STATE(126)] = 5840,
  [SMALL_STATE(127)] = 5884,
  [SMALL_STATE(128)] = 5928,
  [SMALL_STATE(129)] = 5972,
  [SMALL_STATE(130)] = 6001,
  [SMALL_STATE(131)] = 6030,
  [SMALL_STATE(132)] = 6059,
  [SMALL_STATE(133)] = 6088,
  [SMALL_STATE(134)] = 6117,
  [SMALL_STATE(135)] = 6146,
  [SMALL_STATE(136)] = 6170,
  [SMALL_STATE(137)] = 6194,
  [SMALL_STATE(138)] = 6218,
  [SMALL_STATE(139)] = 6242,
  [SMALL_STATE(140)] = 6280,
  [SMALL_STATE(141)] = 6318,
  [SMALL_STATE(142)] = 6356,
  [SMALL_STATE(143)] = 6394,
  [SMALL_STATE(144)] = 6432,
  [SMALL_STATE(145)] = 6456,
  [SMALL_STATE(146)] = 6494,
  [SMALL_STATE(147)] = 6532,
  [SMALL_STATE(148)] = 6556,
  [SMALL_STATE(149)] = 6580,
  [SMALL_STATE(150)] = 6604,
  [SMALL_STATE(151)] = 6628,
  [SMALL_STATE(152)] = 6652,
  [SMALL_STATE(153)] = 6676,
  [SMALL_STATE(154)] = 6714,
  [SMALL_STATE(155)] = 6738,
  [SMALL_STATE(156)] = 6766,
  [SMALL_STATE(157)] = 6790,
  [SMALL_STATE(158)] = 6818,
  [SMALL_STATE(159)] = 6842,
  [SMALL_STATE(160)] = 6866,
  [SMALL_STATE(161)] = 6904,
  [SMALL_STATE(162)] = 6928,
  [SMALL_STATE(163)] = 6952,
  [SMALL_STATE(164)] = 6976,
  [SMALL_STATE(165)] = 7000,
  [SMALL_STATE(166)] = 7024,
  [SMALL_STATE(167)] = 7048,
  [SMALL_STATE(168)] = 7072,
  [SMALL_STATE(169)] = 7096,
  [SMALL_STATE(170)] = 7124,
  [SMALL_STATE(171)] = 7148,
  [SMALL_STATE(172)] = 7172,
  [SMALL_STATE(173)] = 7196,
  [SMALL_STATE(174)] = 7227,
  [SMALL_STATE(175)] = 7250,
  [SMALL_STATE(176)] = 7275,
  [SMALL_STATE(177)] = 7298,
  [SMALL_STATE(178)] = 7321,
  [SMALL_STATE(179)] = 7344,
  [SMALL_STATE(180)] = 7367,
  [SMALL_STATE(181)] = 7390,
  [SMALL_STATE(182)] = 7413,
  [SMALL_STATE(183)] = 7436,
  [SMALL_STATE(184)] = 7459,
  [SMALL_STATE(185)] = 7482,
  [SMALL_STATE(186)] = 7507,
  [SMALL_STATE(187)] = 7530,
  [SMALL_STATE(188)] = 7553,
  [SMALL_STATE(189)] = 7576,
  [SMALL_STATE(190)] = 7599,
  [SMALL_STATE(191)] = 7622,
  [SMALL_STATE(192)] = 7645,
  [SMALL_STATE(193)] = 7668,
  [SMALL_STATE(194)] = 7691,
  [SMALL_STATE(195)] = 7714,
  [SMALL_STATE(196)] = 7737,
  [SMALL_STATE(197)] = 7760,
  [SMALL_STATE(198)] = 7783,
  [SMALL_STATE(199)] = 7814,
  [SMALL_STATE(200)] = 7841,
  [SMALL_STATE(201)] = 7866,
  [SMALL_STATE(202)] = 7889,
  [SMALL_STATE(203)] = 7916,
  [SMALL_STATE(204)] = 7941,
  [SMALL_STATE(205)] = 7964,
  [SMALL_STATE(206)] = 7992,
  [SMALL_STATE(207)] = 8014,
  [SMALL_STATE(208)] = 8038,
  [SMALL_STATE(209)] = 8064,
  [SMALL_STATE(210)] = 8086,
  [SMALL_STATE(211)] = 8108,
  [SMALL_STATE(212)] = 8130,
  [SMALL_STATE(213)] = 8152,
  [SMALL_STATE(214)] = 8184,
  [SMALL_STATE(215)] = 8208,
  [SMALL_STATE(216)] = 8231,
  [SMALL_STATE(217)] = 8259,
  [SMALL_STATE(218)] = 8287,
  [SMALL_STATE(219)] = 8315,
  [SMALL_STATE(220)] = 8345,
  [SMALL_STATE(221)] = 8369,
  [SMALL_STATE(222)] = 8393,
  [SMALL_STATE(223)] = 8417,
  [SMALL_STATE(224)] = 8441,
  [SMALL_STATE(225)] = 8462,
  [SMALL_STATE(226)] = 8483,
  [SMALL_STATE(227)] = 8501,
  [SMALL_STATE(228)] = 8517,
  [SMALL_STATE(229)] = 8533,
  [SMALL_STATE(230)] = 8551,
  [SMALL_STATE(231)] = 8569,
  [SMALL_STATE(232)] = 8587,
  [SMALL_STATE(233)] = 8600,
  [SMALL_STATE(234)] = 8615,
  [SMALL_STATE(235)] = 8632,
  [SMALL_STATE(236)] = 8645,
  [SMALL_STATE(237)] = 8660,
  [SMALL_STATE(238)] = 8677,
  [SMALL_STATE(239)] = 8694,
  [SMALL_STATE(240)] = 8707,
  [SMALL_STATE(241)] = 8720,
  [SMALL_STATE(242)] = 8733,
  [SMALL_STATE(243)] = 8750,
  [SMALL_STATE(244)] = 8766,
  [SMALL_STATE(245)] = 8780,
  [SMALL_STATE(246)] = 8796,
  [SMALL_STATE(247)] = 8812,
  [SMALL_STATE(248)] = 8828,
  [SMALL_STATE(249)] = 8842,
  [SMALL_STATE(250)] = 8856,
  [SMALL_STATE(251)] = 8872,
  [SMALL_STATE(252)] = 8888,
  [SMALL_STATE(253)] = 8904,
  [SMALL_STATE(254)] = 8920,
  [SMALL_STATE(255)] = 8932,
  [SMALL_STATE(256)] = 8946,
  [SMALL_STATE(257)] = 8960,
  [SMALL_STATE(258)] = 8974,
  [SMALL_STATE(259)] = 8990,
  [SMALL_STATE(260)] = 9006,
  [SMALL_STATE(261)] = 9022,
  [SMALL_STATE(262)] = 9038,
  [SMALL_STATE(263)] = 9054,
  [SMALL_STATE(264)] = 9070,
  [SMALL_STATE(265)] = 9086,
  [SMALL_STATE(266)] = 9100,
  [SMALL_STATE(267)] = 9116,
  [SMALL_STATE(268)] = 9130,
  [SMALL_STATE(269)] = 9146,
  [SMALL_STATE(270)] = 9162,
  [SMALL_STATE(271)] = 9178,
  [SMALL_STATE(272)] = 9194,
  [SMALL_STATE(273)] = 9210,
  [SMALL_STATE(274)] = 9226,
  [SMALL_STATE(275)] = 9242,
  [SMALL_STATE(276)] = 9258,
  [SMALL_STATE(277)] = 9274,
  [SMALL_STATE(278)] = 9290,
  [SMALL_STATE(279)] = 9306,
  [SMALL_STATE(280)] = 9322,
  [SMALL_STATE(281)] = 9338,
  [SMALL_STATE(282)] = 9352,
  [SMALL_STATE(283)] = 9368,
  [SMALL_STATE(284)] = 9382,
  [SMALL_STATE(285)] = 9398,
  [SMALL_STATE(286)] = 9414,
  [SMALL_STATE(287)] = 9430,
  [SMALL_STATE(288)] = 9444,
  [SMALL_STATE(289)] = 9460,
  [SMALL_STATE(290)] = 9474,
  [SMALL_STATE(291)] = 9490,
  [SMALL_STATE(292)] = 9506,
  [SMALL_STATE(293)] = 9522,
  [SMALL_STATE(294)] = 9536,
  [SMALL_STATE(295)] = 9552,
  [SMALL_STATE(296)] = 9568,
  [SMALL_STATE(297)] = 9584,
  [SMALL_STATE(298)] = 9600,
  [SMALL_STATE(299)] = 9611,
  [SMALL_STATE(300)] = 9624,
  [SMALL_STATE(301)] = 9637,
  [SMALL_STATE(302)] = 9650,
  [SMALL_STATE(303)] = 9663,
  [SMALL_STATE(304)] = 9676,
  [SMALL_STATE(305)] = 9689,
  [SMALL_STATE(306)] = 9702,
  [SMALL_STATE(307)] = 9715,
  [SMALL_STATE(308)] = 9726,
  [SMALL_STATE(309)] = 9739,
  [SMALL_STATE(310)] = 9750,
  [SMALL_STATE(311)] = 9763,
  [SMALL_STATE(312)] = 9776,
  [SMALL_STATE(313)] = 9789,
  [SMALL_STATE(314)] = 9802,
  [SMALL_STATE(315)] = 9815,
  [SMALL_STATE(316)] = 9828,
  [SMALL_STATE(317)] = 9839,
  [SMALL_STATE(318)] = 9848,
  [SMALL_STATE(319)] = 9861,
  [SMALL_STATE(320)] = 9874,
  [SMALL_STATE(321)] = 9887,
  [SMALL_STATE(322)] = 9897,
  [SMALL_STATE(323)] = 9907,
  [SMALL_STATE(324)] = 9917,
  [SMALL_STATE(325)] = 9927,
  [SMALL_STATE(326)] = 9937,
  [SMALL_STATE(327)] = 9947,
  [SMALL_STATE(328)] = 9957,
  [SMALL_STATE(329)] = 9967,
  [SMALL_STATE(330)] = 9977,
  [SMALL_STATE(331)] = 9987,
  [SMALL_STATE(332)] = 9997,
  [SMALL_STATE(333)] = 10007,
  [SMALL_STATE(334)] = 10017,
  [SMALL_STATE(335)] = 10027,
  [SMALL_STATE(336)] = 10037,
  [SMALL_STATE(337)] = 10045,
  [SMALL_STATE(338)] = 10053,
  [SMALL_STATE(339)] = 10063,
  [SMALL_STATE(340)] = 10073,
  [SMALL_STATE(341)] = 10083,
  [SMALL_STATE(342)] = 10093,
  [SMALL_STATE(343)] = 10103,
  [SMALL_STATE(344)] = 10113,
  [SMALL_STATE(345)] = 10123,
  [SMALL_STATE(346)] = 10133,
  [SMALL_STATE(347)] = 10143,
  [SMALL_STATE(348)] = 10153,
  [SMALL_STATE(349)] = 10163,
  [SMALL_STATE(350)] = 10173,
  [SMALL_STATE(351)] = 10183,
  [SMALL_STATE(352)] = 10193,
  [SMALL_STATE(353)] = 10200,
  [SMALL_STATE(354)] = 10207,
  [SMALL_STATE(355)] = 10214,
  [SMALL_STATE(356)] = 10221,
  [SMALL_STATE(357)] = 10228,
  [SMALL_STATE(358)] = 10235,
  [SMALL_STATE(359)] = 10242,
  [SMALL_STATE(360)] = 10249,
  [SMALL_STATE(361)] = 10256,
  [SMALL_STATE(362)] = 10263,
  [SMALL_STATE(363)] = 10270,
  [SMALL_STATE(364)] = 10277,
  [SMALL_STATE(365)] = 10284,
  [SMALL_STATE(366)] = 10291,
  [SMALL_STATE(367)] = 10298,
  [SMALL_STATE(368)] = 10305,
  [SMALL_STATE(369)] = 10312,
  [SMALL_STATE(370)] = 10319,
  [SMALL_STATE(371)] = 10326,
  [SMALL_STATE(372)] = 10333,
  [SMALL_STATE(373)] = 10340,
  [SMALL_STATE(374)] = 10347,
  [SMALL_STATE(375)] = 10354,
  [SMALL_STATE(376)] = 10361,
  [SMALL_STATE(377)] = 10368,
  [SMALL_STATE(378)] = 10375,
  [SMALL_STATE(379)] = 10382,
  [SMALL_STATE(380)] = 10389,
  [SMALL_STATE(381)] = 10396,
  [SMALL_STATE(382)] = 10403,
  [SMALL_STATE(383)] = 10410,
  [SMALL_STATE(384)] = 10417,
  [SMALL_STATE(385)] = 10424,
  [SMALL_STATE(386)] = 10431,
  [SMALL_STATE(387)] = 10438,
  [SMALL_STATE(388)] = 10445,
  [SMALL_STATE(389)] = 10452,
  [SMALL_STATE(390)] = 10459,
  [SMALL_STATE(391)] = 10466,
  [SMALL_STATE(392)] = 10473,
  [SMALL_STATE(393)] = 10480,
  [SMALL_STATE(394)] = 10487,
  [SMALL_STATE(395)] = 10494,
  [SMALL_STATE(396)] = 10501,
  [SMALL_STATE(397)] = 10508,
  [SMALL_STATE(398)] = 10515,
  [SMALL_STATE(399)] = 10522,
  [SMALL_STATE(400)] = 10529,
  [SMALL_STATE(401)] = 10536,
  [SMALL_STATE(402)] = 10543,
  [SMALL_STATE(403)] = 10550,
  [SMALL_STATE(404)] = 10557,
  [SMALL_STATE(405)] = 10564,
  [SMALL_STATE(406)] = 10571,
  [SMALL_STATE(407)] = 10578,
  [SMALL_STATE(408)] = 10585,
  [SMALL_STATE(409)] = 10592,
  [SMALL_STATE(410)] = 10599,
  [SMALL_STATE(411)] = 10606,
  [SMALL_STATE(412)] = 10613,
  [SMALL_STATE(413)] = 10620,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(406),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(323),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(300),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(408),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(407),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(404),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(403),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(400),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(141),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(142),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(265),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(100),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__complex_expression, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand_expression, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__complex_expression, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand_expression, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_module_repeat1, 2), SHIFT_REPEAT(357),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_module_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_module_repeat1, 2),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_access, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_access, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_module_repeat1, 2), SHIFT_REPEAT(385),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_literal, 3, .production_id = 8),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_literal, 3, .production_id = 8),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex_invocation_expression, 4, .production_id = 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex_invocation_expression, 4, .production_id = 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 4, .production_id = 9),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 4, .production_id = 9),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 4, .production_id = 10),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 4, .production_id = 10),
  [231] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_module_repeat1, 2), SHIFT_REPEAT(360),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 5),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 5),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex_invocation_expression, 3, .production_id = 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex_invocation_expression, 3, .production_id = 3),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 5, .production_id = 14),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 5, .production_id = 14),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_body, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_body, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_body, 3),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_body, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expression, 3, .production_id = 7),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 3, .production_id = 7),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_module_repeat1, 2), SHIFT_REPEAT(375),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_module_repeat1, 2), SHIFT_REPEAT(353),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_module_repeat1, 2), SHIFT_REPEAT(367),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_case_list, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_case_list_repeat1, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_case_list_repeat1, 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__enum_case, 2),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__enum_case, 2), SHIFT_REPEAT(397),
  [452] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__enum_case, 2), SHIFT_REPEAT(392),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__enum_case, 2),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__enum_case, 2), SHIFT_REPEAT(235),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_case_list, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_case_list, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 2, .production_id = 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 2, .production_id = 1),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 2, .production_id = 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 2, .production_id = 1),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 5, .production_id = 16),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 5, .production_id = 16),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_list, 3),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 1),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__enum_case, 1, .production_id = 13),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__enum_case, 1, .production_id = 13),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_list, 2),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_members_repeat1, 2),
  [502] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_members_repeat1, 2), SHIFT_REPEAT(376),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_members_repeat1, 2), SHIFT_REPEAT(355),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 4, .production_id = 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 4, .production_id = 1),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 1),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 1),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 5, .production_id = 17),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 5, .production_id = 17),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_case_list, 2),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__type_case_list_repeat1, 2),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_case_list_repeat1, 2), SHIFT_REPEAT(331),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 2, .production_id = 1),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_case_list_repeat1, 2), SHIFT_REPEAT(229),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_property_list_repeat1, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_list_repeat1, 2), SHIFT_REPEAT(254),
  [585] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_case_list, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex_invocation_expression, 2, .production_id = 3),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex_invocation_expression, 2, .production_id = 3),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_list, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_module, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_module, 2),
  [631] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(22),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2),
  [654] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2), SHIFT_REPEAT(107),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(108),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_case_list, 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_module, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_module, 1),
  [690] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [694] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(289),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_list, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_value, 1, .production_id = 12),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_value, 1, .production_id = 12),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_invocation_expression, 2, .production_id = 3),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_invocation_expression, 2, .production_id = 3),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_members_repeat1, 2),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [763] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2), SHIFT_REPEAT(103),
  [766] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_module, 3),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_module, 3),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [776] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_case_list, 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_case_list, 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_list_repeat1, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 11),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 11),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 6),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 6),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3, .production_id = 5),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3, .production_id = 5),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_case, 3, .production_id = 18),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_case, 3, .production_id = 18),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_case_list_repeat1, 2),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_function, 2, .production_id = 15),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_function, 2, .production_id = 15),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 5, .production_id = 16),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 4),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 5),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 3, .production_id = 4),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 2),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [908] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 3),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [918] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_declaration, 2, .production_id = 1),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [928] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 3, .production_id = 1),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 4, .production_id = 1),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Lithia(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
