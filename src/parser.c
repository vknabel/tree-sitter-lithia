#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 368
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 1
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 21

enum {
  anon_sym_module = 1,
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
  sym_module_declaration = 42,
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
  sym__parameter_expression = 63,
  sym_simple_invocation_expression = 64,
  sym__simple_expression = 65,
  sym__operand_expression = 66,
  sym_unary_expression = 67,
  sym_binary_expression = 68,
  sym__argument = 69,
  sym_member_access = 70,
  sym_type_expression = 71,
  sym_type_body = 72,
  sym__type_case_list = 73,
  sym_type_case = 74,
  sym__literal = 75,
  sym_string_literal = 76,
  sym_group_literal = 77,
  sym_number_literal = 78,
  sym_array_literal = 79,
  sym_function_literal = 80,
  sym_parameter_list = 81,
  sym__statement_terminator = 82,
  sym__list_terminator = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym_import_module_repeat1 = 85,
  aux_sym_import_members_repeat1 = 86,
  aux_sym_data_property_list_repeat1 = 87,
  aux_sym_enum_case_list_repeat1 = 88,
  aux_sym__statement_list_repeat1 = 89,
  aux_sym_complex_invocation_expression_repeat1 = 90,
  aux_sym__type_case_list_repeat1 = 91,
  aux_sym_string_literal_repeat1 = 92,
  aux_sym_array_literal_repeat1 = 93,
  alias_sym_enum_case_reference = 94,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
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
  [sym_module_declaration] = "module_declaration",
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
  [sym__parameter_expression] = "_parameter_expression",
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
  [anon_sym_module] = anon_sym_module,
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
  [sym_module_declaration] = sym_module_declaration,
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
  [sym__parameter_expression] = sym__parameter_expression,
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
  [anon_sym_module] = {
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
  [sym_module_declaration] = {
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
  [sym__parameter_expression] = {
    .visible = false,
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
  field_module = 7,
  field_name = 8,
  field_operator = 9,
  field_parameters = 10,
  field_properties = 11,
  field_type = 12,
  field_value = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_cases] = "cases",
  [field_expression] = "expression",
  [field_function] = "function",
  [field_label] = "label",
  [field_members] = "members",
  [field_module] = "module",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_properties] = "properties",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 1},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 2},
  [14] = {.index = 18, .length = 1},
  [16] = {.index = 19, .length = 2},
  [17] = {.index = 21, .length = 2},
  [18] = {.index = 23, .length = 2},
  [19] = {.index = 25, .length = 2},
  [20] = {.index = 27, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_operator, 0},
  [2] =
    {field_module, 0},
  [3] =
    {field_function, 0},
  [4] =
    {field_members, 2},
    {field_name, 1},
  [6] =
    {field_name, 1},
    {field_value, 2},
  [8] =
    {field_function, 2},
    {field_name, 1},
  [10] =
    {field_body, 2},
    {field_type, 1},
  [12] =
    {field_expression, 1},
  [13] =
    {field_operator, 1},
  [14] =
    {field_body, 2},
  [15] =
    {field_parameters, 1},
  [16] =
    {field_name, 1},
    {field_value, 3},
  [18] =
    {field_name, 0},
  [19] =
    {field_body, 3},
    {field_parameters, 1},
  [21] =
    {field_name, 0},
    {field_parameters, 1},
  [23] =
    {field_name, 1},
    {field_properties, 3},
  [25] =
    {field_cases, 3},
    {field_name, 1},
  [27] =
    {field_body, 2},
    {field_label, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [15] = {
    [0] = alias_sym_enum_case_reference,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
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
                : (c <= 'h' || (c < 'n'
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
                : (c <= 'c' || (c < 170
                  ? (c >= 'e' && c <= 'z')
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
                : (c <= 'k' || (c < 170
                  ? (c >= 'm' && c <= 'z')
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
      if (eof) ADVANCE(33);
      if (lookahead == '!') ADVANCE(48);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(57);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == ']') ADVANCE(76);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(111);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(21);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '!') ADVANCE(48);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(57);
      if (lookahead == '[') ADVANCE(75);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(111);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(21);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(57);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(21);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(78);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(111);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '/') ADVANCE(13);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(111);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(69);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(48);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(57);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(111);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '[') ADVANCE(75);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(111);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '[') ADVANCE(75);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(111);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(52);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(57);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(111);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == '|') ADVANCE(21);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(114);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(19);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(111);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(54);
      END_STATE();
    case 19:
      if (lookahead == '>') ADVANCE(77);
      END_STATE();
    case 20:
      if (lookahead == 'U') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 21:
      if (lookahead == '|') ADVANCE(61);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
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
      if (eof) ADVANCE(33);
      if (lookahead == '!') ADVANCE(48);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(63);
      if (lookahead == '<') ADVANCE(58);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(57);
      if (lookahead == '[') ADVANCE(75);
      if (lookahead == ']') ADVANCE(76);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(111);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '|') ADVANCE(21);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '!') ADVANCE(47);
      if (lookahead == '"') ADVANCE(64);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '[') ADVANCE(75);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(111);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(105);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead == 't') ADVANCE(108);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_module);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(111);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(111);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(111);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(77);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_func);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(111);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_data);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(111);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_extern);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(111);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_enum);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(111);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(114);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(111);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '/') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__statement_terminator_token1);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__statement_terminator_token1);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == ';') ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__list_terminator_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__list_terminator_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == ',') ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(111);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead == 'x') ADVANCE(104);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(111);
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(111);
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(111);
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(111);
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(111);
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(111);
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(111);
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(111);
      if (lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(111);
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(111);
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(111);
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(111);
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(111);
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(111);
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(111);
      if (lookahead == 'p') ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(111);
      if (lookahead == 'p') ADVANCE(86);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(111);
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(111);
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(111);
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(111);
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(111);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(111);
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(111);
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(111);
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(111);
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_20(lookahead)) ADVANCE(111);
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(111);
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(111);
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(114);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 32},
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
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 7},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 7},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 7},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 7},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 7},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 32},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 10},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 2},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 10},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 10},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 10},
  [158] = {.lex_state = 10},
  [159] = {.lex_state = 10},
  [160] = {.lex_state = 10},
  [161] = {.lex_state = 10},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 4},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 4},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 10},
  [171] = {.lex_state = 4},
  [172] = {.lex_state = 4},
  [173] = {.lex_state = 4},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 4},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 4},
  [179] = {.lex_state = 4},
  [180] = {.lex_state = 4},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 4},
  [183] = {.lex_state = 4},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 5},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 5},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 16},
  [196] = {.lex_state = 16},
  [197] = {.lex_state = 16},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 5},
  [200] = {.lex_state = 3},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 16},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 5},
  [207] = {.lex_state = 16},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 4},
  [212] = {.lex_state = 6},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 6},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 16},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 4},
  [226] = {.lex_state = 6},
  [227] = {.lex_state = 16},
  [228] = {.lex_state = 6},
  [229] = {.lex_state = 6},
  [230] = {.lex_state = 6},
  [231] = {.lex_state = 4},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 4},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 16},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 16},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 4},
  [241] = {.lex_state = 6},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 6},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 16},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 6},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 4},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 6},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 16},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 1},
  [262] = {.lex_state = 3},
  [263] = {.lex_state = 16},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 16},
  [266] = {.lex_state = 16},
  [267] = {.lex_state = 16},
  [268] = {.lex_state = 16},
  [269] = {.lex_state = 16},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 16},
  [272] = {.lex_state = 4},
  [273] = {.lex_state = 4},
  [274] = {.lex_state = 2},
  [275] = {.lex_state = 1},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 2},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 4},
  [282] = {.lex_state = 2},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 16},
  [286] = {.lex_state = 16},
  [287] = {.lex_state = 16},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 16},
  [300] = {.lex_state = 16},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 4},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 16},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 16},
  [311] = {.lex_state = 4},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 16},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 16},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 1},
  [323] = {.lex_state = 32},
  [324] = {.lex_state = 1},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 16},
  [327] = {.lex_state = 16},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 16},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 1},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 1},
  [336] = {.lex_state = 1},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 1},
  [339] = {.lex_state = 16},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 16},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 1},
  [346] = {.lex_state = 1},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 16},
  [353] = {.lex_state = 1},
  [354] = {.lex_state = 16},
  [355] = {.lex_state = 32},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 16},
  [358] = {.lex_state = 16},
  [359] = {.lex_state = 32},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 16},
  [362] = {.lex_state = 16},
  [363] = {.lex_state = 32},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 16},
  [366] = {.lex_state = 16},
  [367] = {.lex_state = 32},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
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
    [sym_source_file] = STATE(351),
    [sym_module_declaration] = STATE(293),
    [sym__top_level_declaration] = STATE(295),
    [sym_import_declaration] = STATE(295),
    [sym_let_declaration] = STATE(295),
    [sym_function_declaration] = STATE(295),
    [sym_data_declaration] = STATE(295),
    [sym_extern_declaration] = STATE(295),
    [sym_enum_declaration] = STATE(295),
    [sym__complex_expression] = STATE(295),
    [sym_complex_invocation_expression] = STATE(295),
    [sym_simple_invocation_expression] = STATE(177),
    [sym__simple_expression] = STATE(177),
    [sym__operand_expression] = STATE(177),
    [sym_unary_expression] = STATE(156),
    [sym_binary_expression] = STATE(156),
    [sym__argument] = STATE(6),
    [sym_member_access] = STATE(6),
    [sym_type_expression] = STATE(6),
    [sym__literal] = STATE(25),
    [sym_string_literal] = STATE(25),
    [sym_group_literal] = STATE(25),
    [sym_number_literal] = STATE(25),
    [sym_array_literal] = STATE(25),
    [sym_function_literal] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
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
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(177), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(295), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [85] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_import,
    ACTIONS(44), 1,
      anon_sym_LBRACE,
    ACTIONS(47), 1,
      anon_sym_let,
    ACTIONS(50), 1,
      anon_sym_func,
    ACTIONS(53), 1,
      anon_sym_data,
    ACTIONS(56), 1,
      anon_sym_extern,
    ACTIONS(59), 1,
      anon_sym_enum,
    ACTIONS(62), 1,
      anon_sym_BANG,
    ACTIONS(65), 1,
      anon_sym_type,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym__number,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(177), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(295), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [170] = 22,
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
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(177), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(295), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [255] = 22,
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
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_source_file_repeat1,
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(177), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(295), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [340] = 18,
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
    STATE(170), 1,
      sym_unary_expression,
    STATE(177), 1,
      sym__operand_expression,
    STATE(216), 1,
      sym__parameter_expression,
    STATE(22), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(137), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym_binary_expression,
    STATE(25), 6,
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
  [415] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_BANG,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_type,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__number,
    STATE(170), 1,
      sym_unary_expression,
    STATE(174), 1,
      sym__operand_expression,
    STATE(280), 1,
      sym__parameter_expression,
    STATE(23), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(154), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym_binary_expression,
    ACTIONS(93), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(36), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    ACTIONS(109), 8,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [489] = 20,
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
    ACTIONS(123), 1,
      anon_sym_RBRACE,
    STATE(360), 1,
      sym__statement_list,
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(177), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(237), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [567] = 20,
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
    STATE(348), 1,
      sym__statement_list,
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(177), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(237), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [645] = 20,
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
    STATE(313), 1,
      sym__statement_list,
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(177), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(237), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [723] = 20,
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
    STATE(318), 1,
      sym__statement_list,
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(177), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(237), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [801] = 20,
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
    STATE(320), 1,
      sym__statement_list,
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(177), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(237), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [879] = 20,
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
    STATE(364), 1,
      sym__statement_list,
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(177), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(237), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [957] = 20,
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
    STATE(349), 1,
      sym__statement_list,
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(177), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(237), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1035] = 20,
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
    STATE(344), 1,
      sym__statement_list,
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(177), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(237), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1113] = 20,
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
    STATE(328), 1,
      sym__statement_list,
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(177), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(237), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1191] = 20,
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
    STATE(333), 1,
      sym__statement_list,
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(177), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(237), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1269] = 19,
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
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(177), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(297), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1344] = 19,
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
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(177), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(297), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1419] = 18,
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
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(177), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(297), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1491] = 13,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(149), 1,
      anon_sym_BANG,
    ACTIONS(151), 1,
      anon_sym_type,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      sym__number,
    STATE(145), 4,
      sym_unary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(102), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    ACTIONS(93), 14,
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
  [1552] = 14,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(147), 1,
      anon_sym_LBRACE,
    ACTIONS(149), 1,
      anon_sym_BANG,
    ACTIONS(151), 1,
      anon_sym_type,
    ACTIONS(153), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_LBRACK,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(161), 1,
      sym__number,
    ACTIONS(93), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    STATE(145), 4,
      sym_unary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(102), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    ACTIONS(163), 12,
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
  [1615] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_BANG,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      anon_sym_type,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      sym__number,
    ACTIONS(109), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(163), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(161), 4,
      sym_unary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(123), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    ACTIONS(167), 8,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1677] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_BANG,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      anon_sym_type,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      sym__number,
    ACTIONS(93), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(161), 4,
      sym_unary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(123), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
    ACTIONS(109), 10,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [1737] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(185), 1,
      aux_sym__statement_terminator_token1,
    STATE(26), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(183), 22,
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
  [1774] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      aux_sym__statement_terminator_token1,
    STATE(29), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(187), 22,
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
  [1811] = 16,
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
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(193), 1,
      aux_sym__statement_terminator_token1,
    STATE(276), 1,
      sym__parameter_expression,
    STATE(177), 2,
      sym__operand_expression,
      sym_unary_expression,
    STATE(21), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(137), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym_binary_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [1870] = 16,
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
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    ACTIONS(197), 1,
      aux_sym__statement_terminator_token1,
    STATE(276), 1,
      sym__parameter_expression,
    STATE(177), 2,
      sym__operand_expression,
      sym_unary_expression,
    STATE(21), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(137), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym_binary_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [1929] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_DOT,
    ACTIONS(204), 1,
      aux_sym__statement_terminator_token1,
    STATE(29), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(202), 22,
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
  [1966] = 15,
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
    ACTIONS(206), 1,
      anon_sym_EQ,
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(288), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(177), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [2023] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(202), 23,
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
  [2055] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(210), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(208), 23,
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
  [2087] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(212), 23,
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
  [2119] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_type,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__number,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(216), 1,
      anon_sym_BANG,
    STATE(305), 1,
      sym__parameter_expression,
    STATE(174), 2,
      sym__operand_expression,
      sym_unary_expression,
    STATE(24), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(154), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym_binary_expression,
    STATE(36), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [2175] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(220), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(218), 23,
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
  [2207] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_DOT,
    STATE(45), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(183), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(185), 15,
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
  [2243] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_type,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__number,
    ACTIONS(216), 1,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(342), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(7), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(174), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(36), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [2297] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(226), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(224), 23,
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
  [2329] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(230), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(228), 23,
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
  [2361] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(234), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(232), 23,
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
  [2393] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_type,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__number,
    ACTIONS(216), 1,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(356), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(7), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(174), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(36), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [2447] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_type,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__number,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
    ACTIONS(216), 1,
      anon_sym_BANG,
    STATE(305), 1,
      sym__parameter_expression,
    STATE(174), 2,
      sym__operand_expression,
      sym_unary_expression,
    STATE(24), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(154), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym_binary_expression,
    STATE(36), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [2503] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(238), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(236), 23,
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
  [2535] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(242), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(240), 23,
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
  [2567] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(187), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(189), 15,
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
  [2603] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(246), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(244), 23,
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
  [2635] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_DOT,
    STATE(47), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(202), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(204), 15,
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
  [2671] = 14,
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
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(283), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(6), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(177), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [2725] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_type,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__number,
    ACTIONS(216), 1,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(315), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(7), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(174), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(36), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [2779] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(251), 23,
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
  [2811] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(255), 23,
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
  [2843] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_type,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__number,
    ACTIONS(216), 1,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(325), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(7), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(174), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(36), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [2897] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(259), 23,
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
  [2929] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_type,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__number,
    ACTIONS(216), 1,
      anon_sym_BANG,
    STATE(167), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(341), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(7), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(174), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
    STATE(36), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [2983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(214), 16,
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
  [3014] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(257), 16,
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
  [3045] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(263), 22,
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
  [3076] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
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
    ACTIONS(216), 1,
      anon_sym_BANG,
    STATE(276), 1,
      sym__parameter_expression,
    STATE(177), 2,
      sym__operand_expression,
      sym_unary_expression,
    STATE(21), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(137), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym_binary_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [3129] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(267), 22,
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
  [3160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(253), 16,
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
  [3191] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(271), 22,
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
  [3222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(261), 16,
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
  [3253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(230), 16,
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
  [3284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(226), 16,
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
  [3315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(238), 16,
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
  [3346] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_type,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__number,
    ACTIONS(216), 1,
      anon_sym_BANG,
    STATE(305), 1,
      sym__parameter_expression,
    STATE(174), 2,
      sym__operand_expression,
      sym_unary_expression,
    STATE(24), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(154), 3,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym_binary_expression,
    STATE(36), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [3399] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(234), 16,
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
  [3430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(204), 16,
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
  [3461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(210), 16,
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
  [3492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(242), 16,
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
  [3523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(246), 16,
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
  [3554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(220), 16,
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
  [3585] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_type,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__number,
    ACTIONS(216), 1,
      anon_sym_BANG,
    STATE(24), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(158), 5,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
    STATE(36), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [3633] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(265), 15,
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
  [3663] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(269), 15,
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
  [3693] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_type,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__number,
    ACTIONS(216), 1,
      anon_sym_BANG,
    STATE(24), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(153), 5,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
    STATE(36), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [3741] = 12,
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
    STATE(21), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(147), 5,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [3789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 7,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
    ACTIONS(273), 15,
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
  [3819] = 12,
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
    STATE(21), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(148), 5,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [3867] = 12,
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
    STATE(21), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(152), 5,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [3915] = 12,
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
    STATE(21), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(140), 5,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
    STATE(25), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [3963] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_type,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__number,
    ACTIONS(216), 1,
      anon_sym_BANG,
    STATE(24), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(157), 5,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
    STATE(36), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4011] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_type,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__number,
    ACTIONS(216), 1,
      anon_sym_BANG,
    STATE(24), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(160), 5,
      sym_simple_invocation_expression,
      sym__simple_expression,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
    STATE(36), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4059] = 13,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(109), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    ACTIONS(277), 1,
      anon_sym_BANG,
    ACTIONS(279), 1,
      anon_sym_type,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(289), 1,
      sym__number,
    ACTIONS(93), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    STATE(272), 4,
      sym_unary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(165), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4108] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_type,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
    ACTIONS(301), 1,
      sym__number,
    STATE(306), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(84), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(165), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4153] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_type,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym__number,
    ACTIONS(303), 1,
      anon_sym_RBRACK,
    STATE(306), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(84), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(165), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4198] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_type,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym__number,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    STATE(306), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(84), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(165), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4243] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_type,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym__number,
    ACTIONS(307), 1,
      anon_sym_RBRACK,
    STATE(232), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(84), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(165), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4288] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_type,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym__number,
    ACTIONS(309), 1,
      anon_sym_RBRACK,
    STATE(306), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(84), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(165), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4333] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_type,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym__number,
    ACTIONS(311), 1,
      anon_sym_RBRACK,
    STATE(306), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(84), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(165), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4378] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_type,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym__number,
    ACTIONS(313), 1,
      anon_sym_RBRACK,
    STATE(306), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(84), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(165), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4423] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_type,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym__number,
    ACTIONS(315), 1,
      anon_sym_RBRACK,
    STATE(306), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(84), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(165), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4468] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_type,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym__number,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
    STATE(246), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(84), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(165), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4513] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_type,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym__number,
    ACTIONS(319), 1,
      anon_sym_RBRACK,
    STATE(221), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(84), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(165), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4558] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_type,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym__number,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
    STATE(306), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(84), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(165), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4603] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_type,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym__number,
    ACTIONS(323), 1,
      anon_sym_RBRACK,
    STATE(306), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(84), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(165), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4648] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_type,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym__number,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
    STATE(257), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(84), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(165), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4693] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_type,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym__number,
    ACTIONS(327), 1,
      anon_sym_RBRACK,
    STATE(306), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(84), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(165), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4738] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_type,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym__number,
    ACTIONS(329), 1,
      anon_sym_RBRACK,
    STATE(219), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(84), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(165), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4783] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_type,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym__number,
    STATE(306), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(84), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(165), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4825] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_type,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym__number,
    STATE(302), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(84), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(165), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4867] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(331), 1,
      anon_sym_DOT,
    STATE(104), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(183), 14,
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
  [4896] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(333), 1,
      anon_sym_DOT,
    STATE(103), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(202), 14,
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
  [4925] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(331), 1,
      anon_sym_DOT,
    STATE(103), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(187), 14,
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
  [4954] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_type,
    ACTIONS(287), 1,
      sym_identifier,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
    ACTIONS(293), 1,
      anon_sym_DQUOTE,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
    ACTIONS(297), 1,
      anon_sym_LBRACK,
    ACTIONS(301), 1,
      sym__number,
    STATE(273), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(165), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [4992] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(210), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(208), 15,
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
  [5016] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(242), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(240), 15,
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
  [5040] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(246), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(244), 15,
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
  [5064] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(255), 15,
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
  [5088] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(169), 1,
      anon_sym_type,
    ACTIONS(171), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 1,
      anon_sym_LBRACK,
    ACTIONS(177), 1,
      sym_identifier,
    ACTIONS(179), 1,
      sym__number,
    STATE(163), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(123), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [5126] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_type,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__number,
    STATE(298), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(36), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [5164] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(202), 15,
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
  [5188] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_DOT,
    STATE(113), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(202), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(204), 11,
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
  [5216] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(234), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(232), 15,
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
  [5240] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(226), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(224), 15,
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
  [5264] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(238), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(236), 15,
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
  [5288] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(212), 15,
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
  [5312] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_type,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__number,
    STATE(303), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(36), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [5350] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(230), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(228), 15,
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
  [5374] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(220), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(218), 15,
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
  [5398] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_type,
    ACTIONS(159), 1,
      sym_identifier,
    ACTIONS(339), 1,
      anon_sym_LBRACE,
    ACTIONS(341), 1,
      anon_sym_DQUOTE,
    ACTIONS(343), 1,
      anon_sym_LPAREN,
    ACTIONS(345), 1,
      anon_sym_LBRACK,
    ACTIONS(347), 1,
      sym__number,
    STATE(143), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(102), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [5436] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_type,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__number,
    STATE(289), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(36), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [5474] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    STATE(126), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(183), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(185), 11,
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
  [5502] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(259), 15,
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
  [5526] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_type,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__number,
    STATE(307), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(36), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [5564] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_DOT,
    STATE(113), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(187), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(189), 11,
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
  [5592] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(251), 15,
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
  [5616] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(111), 1,
      anon_sym_type,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_LPAREN,
    ACTIONS(117), 1,
      anon_sym_LBRACK,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      sym__number,
    STATE(284), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(36), 6,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym_number_literal,
      sym_array_literal,
      sym_function_literal,
  [5654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(261), 12,
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
  [5677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(257), 12,
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
  [5700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(220), 12,
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
  [5723] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(242), 12,
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
  [5746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(230), 12,
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
  [5769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(246), 12,
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
  [5792] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(267), 14,
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
  [5815] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(253), 12,
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
  [5838] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(355), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(351), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(353), 12,
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
  [5863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym__number,
    ACTIONS(357), 8,
      anon_sym_import,
      anon_sym_let,
      anon_sym_func,
      anon_sym_data,
      anon_sym_extern,
      anon_sym_enum,
      anon_sym_type,
      sym_identifier,
  [5886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(210), 12,
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
  [5909] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(361), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(359), 14,
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
  [5932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(234), 12,
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
  [5955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(226), 12,
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
  [5978] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(365), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(363), 14,
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
  [6001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(204), 12,
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
  [6024] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(163), 14,
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
  [6047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(214), 12,
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
  [6070] = 7,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(361), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(359), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(367), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(373), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(371), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [6101] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(361), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(367), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(369), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(359), 10,
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
  [6128] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(271), 14,
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
  [6151] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(263), 14,
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
  [6174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(238), 12,
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
  [6197] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(361), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(367), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(359), 12,
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
  [6222] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_STAR,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(361), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(381), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(353), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(387), 9,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(269), 11,
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
  [6300] = 4,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(353), 12,
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
  [6324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(361), 11,
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
  [6346] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_STAR,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(359), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(361), 10,
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
  [6372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(273), 11,
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
  [6394] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_STAR,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(359), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(361), 8,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [6422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 11,
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
  [6444] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(265), 11,
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
  [6466] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(365), 11,
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
  [6488] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(189), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(389), 1,
      anon_sym_DOT,
    STATE(166), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(187), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [6513] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(389), 1,
      anon_sym_DOT,
    STATE(164), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(183), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [6538] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(391), 1,
      anon_sym_DOT,
    STATE(166), 1,
      aux_sym_import_module_repeat1,
    ACTIONS(202), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [6563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(353), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(387), 9,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6586] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(255), 11,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [6606] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(246), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(244), 11,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [6626] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(167), 9,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6646] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(259), 11,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [6666] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(251), 11,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [6686] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(230), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(228), 11,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [6706] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_STAR,
    ACTIONS(377), 1,
      anon_sym_SLASH,
    ACTIONS(379), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(383), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(385), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(381), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6734] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(214), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(212), 11,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [6754] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(238), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(236), 11,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [6774] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SLASH,
    ACTIONS(394), 1,
      anon_sym_STAR,
    ACTIONS(371), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(396), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(400), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(398), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [6802] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(204), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(202), 11,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [6822] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(220), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(218), 11,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [6842] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(226), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(224), 11,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [6862] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(210), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(208), 11,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [6882] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(242), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(240), 11,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [6902] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(234), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(232), 11,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [6922] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(263), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [6941] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(267), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [6960] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(271), 10,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BANG,
      anon_sym_type,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_identifier,
      sym__number,
  [6979] = 9,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
    ACTIONS(404), 1,
      anon_sym_data,
    ACTIONS(406), 1,
      anon_sym_enum,
    ACTIONS(408), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(410), 1,
      sym_identifier,
    STATE(192), 1,
      sym__list_terminator,
    STATE(255), 1,
      aux_sym_enum_case_list_repeat1,
    STATE(189), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [7009] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_data,
    ACTIONS(406), 1,
      anon_sym_enum,
    ACTIONS(410), 1,
      sym_identifier,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    STATE(331), 1,
      sym_enum_case_list,
    STATE(187), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [7033] = 7,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    ACTIONS(416), 1,
      anon_sym_data,
    ACTIONS(419), 1,
      anon_sym_enum,
    ACTIONS(422), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(189), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [7057] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_data,
    ACTIONS(406), 1,
      anon_sym_enum,
    ACTIONS(410), 1,
      sym_identifier,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    STATE(312), 1,
      sym_enum_case_list,
    STATE(187), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [7081] = 7,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_data,
    ACTIONS(406), 1,
      anon_sym_enum,
    ACTIONS(410), 1,
      sym_identifier,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    ACTIONS(431), 1,
      aux_sym__list_terminator_token1,
    STATE(189), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [7105] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_data,
    ACTIONS(406), 1,
      anon_sym_enum,
    ACTIONS(410), 1,
      sym_identifier,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    STATE(191), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [7126] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_data,
    ACTIONS(406), 1,
      anon_sym_enum,
    ACTIONS(410), 1,
      sym_identifier,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    STATE(191), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [7147] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_data,
    ACTIONS(406), 1,
      anon_sym_enum,
    ACTIONS(410), 1,
      sym_identifier,
    STATE(191), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [7165] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    ACTIONS(439), 1,
      sym_identifier,
    STATE(347), 1,
      sym_data_property_list,
    STATE(222), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [7183] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    STATE(337), 1,
      sym_data_property_list,
    STATE(222), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [7201] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    STATE(340), 1,
      sym_data_property_list,
    STATE(222), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [7219] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
    ACTIONS(449), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(447), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [7235] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_LBRACE,
    ACTIONS(455), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(453), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [7251] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(459), 1,
      aux_sym__list_terminator_token1,
    STATE(208), 1,
      aux_sym_import_members_repeat1,
    STATE(279), 1,
      sym__list_terminator,
    ACTIONS(457), 2,
      anon_sym_RBRACE,
      aux_sym__statement_terminator_token1,
  [7268] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(463), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(461), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [7281] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(467), 1,
      aux_sym__list_terminator_token1,
    STATE(202), 1,
      aux_sym_import_members_repeat1,
    STATE(339), 1,
      sym__list_terminator,
    ACTIONS(465), 2,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [7298] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(470), 1,
      aux_sym__list_terminator_token1,
    STATE(203), 1,
      aux_sym_import_members_repeat1,
    STATE(319), 1,
      sym__list_terminator,
    ACTIONS(465), 2,
      anon_sym_RBRACE,
      aux_sym__statement_terminator_token1,
  [7315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
    STATE(301), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [7330] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(477), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(475), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [7343] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(481), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(479), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [7356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    STATE(301), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [7371] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(487), 1,
      aux_sym__list_terminator_token1,
    STATE(203), 1,
      aux_sym_import_members_repeat1,
    STATE(282), 1,
      sym__list_terminator,
    ACTIONS(485), 2,
      anon_sym_RBRACE,
      aux_sym__statement_terminator_token1,
  [7388] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(491), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(489), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [7401] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(495), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(493), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [7414] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(497), 1,
      anon_sym_RBRACK,
    ACTIONS(499), 1,
      aux_sym__list_terminator_token1,
    STATE(91), 1,
      sym__list_terminator,
    STATE(233), 1,
      aux_sym_array_literal_repeat1,
  [7430] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_DQUOTE,
    STATE(214), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(503), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [7444] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    ACTIONS(507), 1,
      aux_sym__statement_terminator_token1,
    STATE(19), 1,
      sym__statement_terminator,
    STATE(254), 1,
      aux_sym__statement_list_repeat1,
  [7460] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_DQUOTE,
    STATE(226), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(511), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [7474] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    ACTIONS(515), 1,
      aux_sym__list_terminator_token1,
    STATE(252), 1,
      aux_sym_import_members_repeat1,
    STATE(299), 1,
      sym__list_terminator,
  [7490] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RBRACE,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      aux_sym__statement_terminator_token1,
    STATE(218), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [7506] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_DQUOTE,
    STATE(228), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(525), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [7520] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    ACTIONS(197), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [7536] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RBRACK,
    ACTIONS(531), 1,
      aux_sym__list_terminator_token1,
    STATE(86), 1,
      sym__list_terminator,
    STATE(224), 1,
      aux_sym_array_literal_repeat1,
  [7552] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    ACTIONS(535), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(537), 1,
      sym_identifier,
    STATE(290), 1,
      sym_parameter_list,
  [7568] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(539), 1,
      anon_sym_RBRACK,
    ACTIONS(541), 1,
      aux_sym__list_terminator_token1,
    STATE(95), 1,
      sym__list_terminator,
    STATE(225), 1,
      aux_sym_array_literal_repeat1,
  [7584] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(543), 1,
      anon_sym_RBRACE,
    ACTIONS(545), 1,
      aux_sym__statement_terminator_token1,
    STATE(207), 1,
      sym__statement_terminator,
    STATE(258), 1,
      aux_sym_data_property_list_repeat1,
  [7600] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    ACTIONS(549), 1,
      sym_identifier,
    STATE(231), 1,
      sym_type_case,
    STATE(330), 1,
      sym__type_case_list,
  [7616] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
    ACTIONS(553), 1,
      aux_sym__list_terminator_token1,
    STATE(87), 1,
      sym__list_terminator,
    STATE(233), 1,
      aux_sym_array_literal_repeat1,
  [7632] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_RBRACK,
    ACTIONS(557), 1,
      aux_sym__list_terminator_token1,
    STATE(90), 1,
      sym__list_terminator,
    STATE(233), 1,
      aux_sym_array_literal_repeat1,
  [7648] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_DQUOTE,
    STATE(226), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(561), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [7662] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_identifier,
    ACTIONS(564), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_type_case,
    STATE(316), 1,
      sym__type_case_list,
  [7678] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_DQUOTE,
    STATE(226), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(511), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [7692] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
    STATE(230), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(570), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [7706] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_DQUOTE,
    STATE(226), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(511), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [7720] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_RBRACE,
    ACTIONS(576), 1,
      aux_sym__list_terminator_token1,
    STATE(253), 1,
      aux_sym__type_case_list_repeat1,
    STATE(269), 1,
      sym__list_terminator,
  [7736] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_RBRACK,
    ACTIONS(580), 1,
      aux_sym__list_terminator_token1,
    STATE(89), 1,
      sym__list_terminator,
    STATE(211), 1,
      aux_sym_array_literal_repeat1,
  [7752] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RBRACK,
    ACTIONS(584), 1,
      aux_sym__list_terminator_token1,
    STATE(100), 1,
      sym__list_terminator,
    STATE(233), 1,
      aux_sym_array_literal_repeat1,
  [7768] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(537), 1,
      sym_identifier,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    ACTIONS(589), 1,
      aux_sym__statement_terminator_token1,
    STATE(338), 1,
      sym_parameter_list,
  [7784] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_EQ_GT,
    ACTIONS(591), 1,
      aux_sym__list_terminator_token1,
    STATE(202), 1,
      aux_sym_import_members_repeat1,
    STATE(287), 1,
      sym__list_terminator,
  [7800] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_identifier,
    ACTIONS(593), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_type_case,
    STATE(321), 1,
      sym__type_case_list,
  [7816] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_RBRACE,
    ACTIONS(597), 1,
      aux_sym__statement_terminator_token1,
    STATE(18), 1,
      sym__statement_terminator,
    STATE(213), 1,
      aux_sym__statement_list_repeat1,
  [7832] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      sym_identifier,
    STATE(301), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [7844] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(599), 1,
      anon_sym_DOT,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(603), 1,
      aux_sym__statement_terminator_token1,
    STATE(29), 1,
      aux_sym_import_module_repeat1,
  [7860] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(607), 1,
      aux_sym__list_terminator_token1,
    STATE(240), 1,
      aux_sym__type_case_list_repeat1,
    STATE(310), 1,
      sym__list_terminator,
  [7876] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_DQUOTE,
    STATE(243), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(612), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [7890] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_EQ_GT,
    ACTIONS(614), 1,
      aux_sym__list_terminator_token1,
    STATE(235), 1,
      aux_sym_import_members_repeat1,
    STATE(286), 1,
      sym__list_terminator,
  [7906] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    STATE(226), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(511), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [7920] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    ACTIONS(618), 1,
      aux_sym__list_terminator_token1,
    STATE(194), 1,
      sym__list_terminator,
    STATE(244), 1,
      aux_sym_enum_case_list_repeat1,
  [7936] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
    ACTIONS(623), 1,
      aux_sym__statement_terminator_token1,
    STATE(238), 1,
      sym__statement_terminator,
    STATE(245), 1,
      aux_sym_data_property_list_repeat1,
  [7952] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_RBRACK,
    ACTIONS(628), 1,
      aux_sym__list_terminator_token1,
    STATE(85), 1,
      sym__list_terminator,
    STATE(250), 1,
      aux_sym_array_literal_repeat1,
  [7968] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_RBRACE,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(635), 1,
      aux_sym__statement_terminator_token1,
    STATE(247), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [7984] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_identifier,
    ACTIONS(637), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_type_case,
    STATE(334), 1,
      sym__type_case_list,
  [8000] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_DOT,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
    ACTIONS(643), 1,
      aux_sym__statement_terminator_token1,
    STATE(239), 1,
      aux_sym_import_module_repeat1,
  [8016] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_RBRACK,
    ACTIONS(647), 1,
      aux_sym__list_terminator_token1,
    STATE(96), 1,
      sym__list_terminator,
    STATE(233), 1,
      aux_sym_array_literal_repeat1,
  [8032] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_DQUOTE,
    STATE(256), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(651), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8046] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
    ACTIONS(655), 1,
      aux_sym__list_terminator_token1,
    STATE(202), 1,
      aux_sym_import_members_repeat1,
    STATE(300), 1,
      sym__list_terminator,
  [8062] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_RBRACE,
    ACTIONS(659), 1,
      aux_sym__list_terminator_token1,
    STATE(240), 1,
      aux_sym__type_case_list_repeat1,
    STATE(271), 1,
      sym__list_terminator,
  [8078] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
    ACTIONS(663), 1,
      aux_sym__statement_terminator_token1,
    STATE(20), 1,
      sym__statement_terminator,
    STATE(254), 1,
      aux_sym__statement_list_repeat1,
  [8094] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_RBRACE,
    ACTIONS(668), 1,
      aux_sym__list_terminator_token1,
    STATE(193), 1,
      sym__list_terminator,
    STATE(244), 1,
      aux_sym_enum_case_list_repeat1,
  [8110] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_DQUOTE,
    STATE(226), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(511), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8124] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(672), 1,
      anon_sym_RBRACK,
    ACTIONS(674), 1,
      aux_sym__list_terminator_token1,
    STATE(98), 1,
      sym__list_terminator,
    STATE(260), 1,
      aux_sym_array_literal_repeat1,
  [8140] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(676), 1,
      anon_sym_RBRACE,
    ACTIONS(678), 1,
      aux_sym__statement_terminator_token1,
    STATE(204), 1,
      sym__statement_terminator,
    STATE(245), 1,
      aux_sym_data_property_list_repeat1,
  [8156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_identifier,
    ACTIONS(680), 1,
      anon_sym_RBRACE,
    STATE(231), 1,
      sym_type_case,
    STATE(350), 1,
      sym__type_case_list,
  [8172] = 5,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_RBRACK,
    ACTIONS(684), 1,
      aux_sym__list_terminator_token1,
    STATE(92), 1,
      sym__list_terminator,
    STATE(233), 1,
      aux_sym_array_literal_repeat1,
  [8188] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    ACTIONS(449), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(686), 1,
      anon_sym_LBRACE,
  [8201] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(465), 3,
      anon_sym_RBRACE,
      aux_sym__statement_terminator_token1,
      aux_sym__list_terminator_token1,
  [8210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(688), 1,
      anon_sym_EQ_GT,
    ACTIONS(690), 1,
      sym_identifier,
    STATE(323), 1,
      sym_parameter_list,
  [8223] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_LBRACE,
    ACTIONS(603), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(692), 1,
      sym_identifier,
  [8236] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_identifier,
    ACTIONS(694), 1,
      anon_sym_EQ_GT,
    STATE(367), 1,
      sym_parameter_list,
  [8249] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_identifier,
    ACTIONS(696), 1,
      anon_sym_EQ_GT,
    STATE(363), 1,
      sym_parameter_list,
  [8262] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_identifier,
    ACTIONS(698), 1,
      anon_sym_EQ_GT,
    STATE(359), 1,
      sym_parameter_list,
  [8275] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(690), 1,
      sym_identifier,
    ACTIONS(700), 1,
      anon_sym_EQ_GT,
    STATE(355), 1,
      sym_parameter_list,
  [8288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_identifier,
    ACTIONS(702), 1,
      anon_sym_RBRACE,
    STATE(311), 1,
      sym_type_case,
  [8301] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_LBRACE,
    ACTIONS(706), 1,
      aux_sym__statement_terminator_token1,
    STATE(353), 1,
      sym_import_members,
  [8314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_identifier,
    ACTIONS(708), 1,
      anon_sym_RBRACE,
    STATE(311), 1,
      sym_type_case,
  [8327] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(163), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [8338] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(365), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(363), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [8349] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(692), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_LBRACE,
    ACTIONS(712), 1,
      aux_sym__statement_terminator_token1,
  [8362] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    ACTIONS(455), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(714), 1,
      anon_sym_LBRACE,
  [8375] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(635), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(630), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [8386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_RPAREN,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [8399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
    ACTIONS(719), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [8412] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
    ACTIONS(721), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(723), 1,
      sym_identifier,
  [8425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    ACTIONS(725), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [8438] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(727), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(465), 2,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [8449] = 4,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym_identifier,
    ACTIONS(729), 1,
      anon_sym_RBRACE,
    ACTIONS(731), 1,
      aux_sym__statement_terminator_token1,
  [8462] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
    ACTIONS(735), 1,
      aux_sym__statement_terminator_token1,
  [8472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_LBRACE,
    STATE(186), 1,
      sym_type_body,
  [8482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      sym_identifier,
    STATE(270), 1,
      sym_import_module,
  [8492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_EQ_GT,
    ACTIONS(741), 1,
      sym_identifier,
  [8502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_EQ_GT,
    ACTIONS(741), 1,
      sym_identifier,
  [8512] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_RBRACE,
    ACTIONS(745), 1,
      aux_sym__statement_terminator_token1,
  [8522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_type_body,
  [8532] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_RBRACE,
    ACTIONS(751), 1,
      aux_sym__statement_terminator_token1,
  [8542] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_RBRACE,
    ACTIONS(755), 1,
      aux_sym__statement_terminator_token1,
  [8552] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    ACTIONS(491), 1,
      aux_sym__statement_terminator_token1,
  [8562] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(757), 1,
      aux_sym__statement_terminator_token1,
    STATE(5), 1,
      sym__statement_terminator,
  [8572] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    ACTIONS(477), 1,
      aux_sym__statement_terminator_token1,
  [8582] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(759), 1,
      aux_sym__statement_terminator_token1,
    STATE(138), 1,
      sym__statement_terminator,
  [8592] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    ACTIONS(495), 1,
      aux_sym__statement_terminator_token1,
  [8602] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_RBRACE,
    ACTIONS(761), 1,
      aux_sym__statement_terminator_token1,
  [8612] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      sym_type_body,
  [8622] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_identifier,
    ACTIONS(765), 1,
      anon_sym_RBRACE,
  [8632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_identifier,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
  [8642] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RBRACE,
    ACTIONS(769), 1,
      aux_sym__statement_terminator_token1,
  [8652] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_RBRACE,
    ACTIONS(773), 1,
      aux_sym__list_terminator_token1,
  [8662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym_type_body,
  [8672] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    ACTIONS(481), 1,
      aux_sym__statement_terminator_token1,
  [8682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8690] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RBRACK,
    ACTIONS(777), 1,
      aux_sym__list_terminator_token1,
  [8700] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_type_body,
  [8710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_RBRACE,
    ACTIONS(783), 1,
      sym_identifier,
  [8720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    STATE(291), 1,
      sym_function_literal,
  [8730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 1,
      sym_identifier,
    STATE(311), 1,
      sym_type_case,
  [8740] = 3,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_RBRACE,
    ACTIONS(785), 1,
      aux_sym__list_terminator_token1,
  [8750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_RBRACE,
  [8757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_RBRACE,
  [8764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_COLON,
  [8771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
  [8778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_RBRACE,
  [8785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      sym_identifier,
  [8792] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_RBRACE,
  [8799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      sym_identifier,
  [8806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_RBRACE,
  [8813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_RBRACE,
  [8820] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(807), 1,
      aux_sym__statement_terminator_token1,
  [8827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_EQ_GT,
  [8834] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(811), 1,
      aux_sym__statement_terminator_token1,
  [8841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
  [8848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      sym_identifier,
  [8855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      sym_identifier,
  [8862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_RBRACE,
  [8869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      sym_identifier,
  [8876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_RBRACE,
  [8883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_RBRACE,
  [8890] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(827), 1,
      aux_sym__statement_terminator_token1,
  [8897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 1,
      anon_sym_RBRACE,
  [8904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 1,
      anon_sym_RBRACE,
  [8911] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(833), 1,
      aux_sym__statement_terminator_token1,
  [8918] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(835), 1,
      aux_sym__statement_terminator_token1,
  [8925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_RBRACE,
  [8932] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(839), 1,
      aux_sym__statement_terminator_token1,
  [8939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_identifier,
  [8946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_RBRACE,
  [8953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_RPAREN,
  [8960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_RPAREN,
  [8967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      sym_identifier,
  [8974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_RBRACE,
  [8981] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(851), 1,
      aux_sym__statement_terminator_token1,
  [8988] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(853), 1,
      aux_sym__statement_terminator_token1,
  [8995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_RBRACE,
  [9002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_RBRACE,
  [9009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_RBRACE,
  [9016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_RBRACE,
  [9023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      ts_builtin_sym_end,
  [9030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      sym_identifier,
  [9037] = 2,
    ACTIONS(105), 1,
      sym_comment,
    ACTIONS(867), 1,
      aux_sym__statement_terminator_token1,
  [9044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      sym_identifier,
  [9051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_EQ_GT,
  [9058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
  [9065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      sym_identifier,
  [9072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      sym_identifier,
  [9079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_EQ_GT,
  [9086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_RBRACE,
  [9093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      sym_identifier,
  [9100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      sym_identifier,
  [9107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_EQ_GT,
  [9114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_RBRACE,
  [9121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      sym_identifier,
  [9128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      sym_identifier,
  [9135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_EQ_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 85,
  [SMALL_STATE(4)] = 170,
  [SMALL_STATE(5)] = 255,
  [SMALL_STATE(6)] = 340,
  [SMALL_STATE(7)] = 415,
  [SMALL_STATE(8)] = 489,
  [SMALL_STATE(9)] = 567,
  [SMALL_STATE(10)] = 645,
  [SMALL_STATE(11)] = 723,
  [SMALL_STATE(12)] = 801,
  [SMALL_STATE(13)] = 879,
  [SMALL_STATE(14)] = 957,
  [SMALL_STATE(15)] = 1035,
  [SMALL_STATE(16)] = 1113,
  [SMALL_STATE(17)] = 1191,
  [SMALL_STATE(18)] = 1269,
  [SMALL_STATE(19)] = 1344,
  [SMALL_STATE(20)] = 1419,
  [SMALL_STATE(21)] = 1491,
  [SMALL_STATE(22)] = 1552,
  [SMALL_STATE(23)] = 1615,
  [SMALL_STATE(24)] = 1677,
  [SMALL_STATE(25)] = 1737,
  [SMALL_STATE(26)] = 1774,
  [SMALL_STATE(27)] = 1811,
  [SMALL_STATE(28)] = 1870,
  [SMALL_STATE(29)] = 1929,
  [SMALL_STATE(30)] = 1966,
  [SMALL_STATE(31)] = 2023,
  [SMALL_STATE(32)] = 2055,
  [SMALL_STATE(33)] = 2087,
  [SMALL_STATE(34)] = 2119,
  [SMALL_STATE(35)] = 2175,
  [SMALL_STATE(36)] = 2207,
  [SMALL_STATE(37)] = 2243,
  [SMALL_STATE(38)] = 2297,
  [SMALL_STATE(39)] = 2329,
  [SMALL_STATE(40)] = 2361,
  [SMALL_STATE(41)] = 2393,
  [SMALL_STATE(42)] = 2447,
  [SMALL_STATE(43)] = 2503,
  [SMALL_STATE(44)] = 2535,
  [SMALL_STATE(45)] = 2567,
  [SMALL_STATE(46)] = 2603,
  [SMALL_STATE(47)] = 2635,
  [SMALL_STATE(48)] = 2671,
  [SMALL_STATE(49)] = 2725,
  [SMALL_STATE(50)] = 2779,
  [SMALL_STATE(51)] = 2811,
  [SMALL_STATE(52)] = 2843,
  [SMALL_STATE(53)] = 2897,
  [SMALL_STATE(54)] = 2929,
  [SMALL_STATE(55)] = 2983,
  [SMALL_STATE(56)] = 3014,
  [SMALL_STATE(57)] = 3045,
  [SMALL_STATE(58)] = 3076,
  [SMALL_STATE(59)] = 3129,
  [SMALL_STATE(60)] = 3160,
  [SMALL_STATE(61)] = 3191,
  [SMALL_STATE(62)] = 3222,
  [SMALL_STATE(63)] = 3253,
  [SMALL_STATE(64)] = 3284,
  [SMALL_STATE(65)] = 3315,
  [SMALL_STATE(66)] = 3346,
  [SMALL_STATE(67)] = 3399,
  [SMALL_STATE(68)] = 3430,
  [SMALL_STATE(69)] = 3461,
  [SMALL_STATE(70)] = 3492,
  [SMALL_STATE(71)] = 3523,
  [SMALL_STATE(72)] = 3554,
  [SMALL_STATE(73)] = 3585,
  [SMALL_STATE(74)] = 3633,
  [SMALL_STATE(75)] = 3663,
  [SMALL_STATE(76)] = 3693,
  [SMALL_STATE(77)] = 3741,
  [SMALL_STATE(78)] = 3789,
  [SMALL_STATE(79)] = 3819,
  [SMALL_STATE(80)] = 3867,
  [SMALL_STATE(81)] = 3915,
  [SMALL_STATE(82)] = 3963,
  [SMALL_STATE(83)] = 4011,
  [SMALL_STATE(84)] = 4059,
  [SMALL_STATE(85)] = 4108,
  [SMALL_STATE(86)] = 4153,
  [SMALL_STATE(87)] = 4198,
  [SMALL_STATE(88)] = 4243,
  [SMALL_STATE(89)] = 4288,
  [SMALL_STATE(90)] = 4333,
  [SMALL_STATE(91)] = 4378,
  [SMALL_STATE(92)] = 4423,
  [SMALL_STATE(93)] = 4468,
  [SMALL_STATE(94)] = 4513,
  [SMALL_STATE(95)] = 4558,
  [SMALL_STATE(96)] = 4603,
  [SMALL_STATE(97)] = 4648,
  [SMALL_STATE(98)] = 4693,
  [SMALL_STATE(99)] = 4738,
  [SMALL_STATE(100)] = 4783,
  [SMALL_STATE(101)] = 4825,
  [SMALL_STATE(102)] = 4867,
  [SMALL_STATE(103)] = 4896,
  [SMALL_STATE(104)] = 4925,
  [SMALL_STATE(105)] = 4954,
  [SMALL_STATE(106)] = 4992,
  [SMALL_STATE(107)] = 5016,
  [SMALL_STATE(108)] = 5040,
  [SMALL_STATE(109)] = 5064,
  [SMALL_STATE(110)] = 5088,
  [SMALL_STATE(111)] = 5126,
  [SMALL_STATE(112)] = 5164,
  [SMALL_STATE(113)] = 5188,
  [SMALL_STATE(114)] = 5216,
  [SMALL_STATE(115)] = 5240,
  [SMALL_STATE(116)] = 5264,
  [SMALL_STATE(117)] = 5288,
  [SMALL_STATE(118)] = 5312,
  [SMALL_STATE(119)] = 5350,
  [SMALL_STATE(120)] = 5374,
  [SMALL_STATE(121)] = 5398,
  [SMALL_STATE(122)] = 5436,
  [SMALL_STATE(123)] = 5474,
  [SMALL_STATE(124)] = 5502,
  [SMALL_STATE(125)] = 5526,
  [SMALL_STATE(126)] = 5564,
  [SMALL_STATE(127)] = 5592,
  [SMALL_STATE(128)] = 5616,
  [SMALL_STATE(129)] = 5654,
  [SMALL_STATE(130)] = 5677,
  [SMALL_STATE(131)] = 5700,
  [SMALL_STATE(132)] = 5723,
  [SMALL_STATE(133)] = 5746,
  [SMALL_STATE(134)] = 5769,
  [SMALL_STATE(135)] = 5792,
  [SMALL_STATE(136)] = 5815,
  [SMALL_STATE(137)] = 5838,
  [SMALL_STATE(138)] = 5863,
  [SMALL_STATE(139)] = 5886,
  [SMALL_STATE(140)] = 5909,
  [SMALL_STATE(141)] = 5932,
  [SMALL_STATE(142)] = 5955,
  [SMALL_STATE(143)] = 5978,
  [SMALL_STATE(144)] = 6001,
  [SMALL_STATE(145)] = 6024,
  [SMALL_STATE(146)] = 6047,
  [SMALL_STATE(147)] = 6070,
  [SMALL_STATE(148)] = 6101,
  [SMALL_STATE(149)] = 6128,
  [SMALL_STATE(150)] = 6151,
  [SMALL_STATE(151)] = 6174,
  [SMALL_STATE(152)] = 6197,
  [SMALL_STATE(153)] = 6222,
  [SMALL_STATE(154)] = 6254,
  [SMALL_STATE(155)] = 6278,
  [SMALL_STATE(156)] = 6300,
  [SMALL_STATE(157)] = 6324,
  [SMALL_STATE(158)] = 6346,
  [SMALL_STATE(159)] = 6372,
  [SMALL_STATE(160)] = 6394,
  [SMALL_STATE(161)] = 6422,
  [SMALL_STATE(162)] = 6444,
  [SMALL_STATE(163)] = 6466,
  [SMALL_STATE(164)] = 6488,
  [SMALL_STATE(165)] = 6513,
  [SMALL_STATE(166)] = 6538,
  [SMALL_STATE(167)] = 6563,
  [SMALL_STATE(168)] = 6586,
  [SMALL_STATE(169)] = 6606,
  [SMALL_STATE(170)] = 6626,
  [SMALL_STATE(171)] = 6646,
  [SMALL_STATE(172)] = 6666,
  [SMALL_STATE(173)] = 6686,
  [SMALL_STATE(174)] = 6706,
  [SMALL_STATE(175)] = 6734,
  [SMALL_STATE(176)] = 6754,
  [SMALL_STATE(177)] = 6774,
  [SMALL_STATE(178)] = 6802,
  [SMALL_STATE(179)] = 6822,
  [SMALL_STATE(180)] = 6842,
  [SMALL_STATE(181)] = 6862,
  [SMALL_STATE(182)] = 6882,
  [SMALL_STATE(183)] = 6902,
  [SMALL_STATE(184)] = 6922,
  [SMALL_STATE(185)] = 6941,
  [SMALL_STATE(186)] = 6960,
  [SMALL_STATE(187)] = 6979,
  [SMALL_STATE(188)] = 7009,
  [SMALL_STATE(189)] = 7033,
  [SMALL_STATE(190)] = 7057,
  [SMALL_STATE(191)] = 7081,
  [SMALL_STATE(192)] = 7105,
  [SMALL_STATE(193)] = 7126,
  [SMALL_STATE(194)] = 7147,
  [SMALL_STATE(195)] = 7165,
  [SMALL_STATE(196)] = 7183,
  [SMALL_STATE(197)] = 7201,
  [SMALL_STATE(198)] = 7219,
  [SMALL_STATE(199)] = 7235,
  [SMALL_STATE(200)] = 7251,
  [SMALL_STATE(201)] = 7268,
  [SMALL_STATE(202)] = 7281,
  [SMALL_STATE(203)] = 7298,
  [SMALL_STATE(204)] = 7315,
  [SMALL_STATE(205)] = 7330,
  [SMALL_STATE(206)] = 7343,
  [SMALL_STATE(207)] = 7356,
  [SMALL_STATE(208)] = 7371,
  [SMALL_STATE(209)] = 7388,
  [SMALL_STATE(210)] = 7401,
  [SMALL_STATE(211)] = 7414,
  [SMALL_STATE(212)] = 7430,
  [SMALL_STATE(213)] = 7444,
  [SMALL_STATE(214)] = 7460,
  [SMALL_STATE(215)] = 7474,
  [SMALL_STATE(216)] = 7490,
  [SMALL_STATE(217)] = 7506,
  [SMALL_STATE(218)] = 7520,
  [SMALL_STATE(219)] = 7536,
  [SMALL_STATE(220)] = 7552,
  [SMALL_STATE(221)] = 7568,
  [SMALL_STATE(222)] = 7584,
  [SMALL_STATE(223)] = 7600,
  [SMALL_STATE(224)] = 7616,
  [SMALL_STATE(225)] = 7632,
  [SMALL_STATE(226)] = 7648,
  [SMALL_STATE(227)] = 7662,
  [SMALL_STATE(228)] = 7678,
  [SMALL_STATE(229)] = 7692,
  [SMALL_STATE(230)] = 7706,
  [SMALL_STATE(231)] = 7720,
  [SMALL_STATE(232)] = 7736,
  [SMALL_STATE(233)] = 7752,
  [SMALL_STATE(234)] = 7768,
  [SMALL_STATE(235)] = 7784,
  [SMALL_STATE(236)] = 7800,
  [SMALL_STATE(237)] = 7816,
  [SMALL_STATE(238)] = 7832,
  [SMALL_STATE(239)] = 7844,
  [SMALL_STATE(240)] = 7860,
  [SMALL_STATE(241)] = 7876,
  [SMALL_STATE(242)] = 7890,
  [SMALL_STATE(243)] = 7906,
  [SMALL_STATE(244)] = 7920,
  [SMALL_STATE(245)] = 7936,
  [SMALL_STATE(246)] = 7952,
  [SMALL_STATE(247)] = 7968,
  [SMALL_STATE(248)] = 7984,
  [SMALL_STATE(249)] = 8000,
  [SMALL_STATE(250)] = 8016,
  [SMALL_STATE(251)] = 8032,
  [SMALL_STATE(252)] = 8046,
  [SMALL_STATE(253)] = 8062,
  [SMALL_STATE(254)] = 8078,
  [SMALL_STATE(255)] = 8094,
  [SMALL_STATE(256)] = 8110,
  [SMALL_STATE(257)] = 8124,
  [SMALL_STATE(258)] = 8140,
  [SMALL_STATE(259)] = 8156,
  [SMALL_STATE(260)] = 8172,
  [SMALL_STATE(261)] = 8188,
  [SMALL_STATE(262)] = 8201,
  [SMALL_STATE(263)] = 8210,
  [SMALL_STATE(264)] = 8223,
  [SMALL_STATE(265)] = 8236,
  [SMALL_STATE(266)] = 8249,
  [SMALL_STATE(267)] = 8262,
  [SMALL_STATE(268)] = 8275,
  [SMALL_STATE(269)] = 8288,
  [SMALL_STATE(270)] = 8301,
  [SMALL_STATE(271)] = 8314,
  [SMALL_STATE(272)] = 8327,
  [SMALL_STATE(273)] = 8338,
  [SMALL_STATE(274)] = 8349,
  [SMALL_STATE(275)] = 8362,
  [SMALL_STATE(276)] = 8375,
  [SMALL_STATE(277)] = 8386,
  [SMALL_STATE(278)] = 8399,
  [SMALL_STATE(279)] = 8412,
  [SMALL_STATE(280)] = 8425,
  [SMALL_STATE(281)] = 8438,
  [SMALL_STATE(282)] = 8449,
  [SMALL_STATE(283)] = 8462,
  [SMALL_STATE(284)] = 8472,
  [SMALL_STATE(285)] = 8482,
  [SMALL_STATE(286)] = 8492,
  [SMALL_STATE(287)] = 8502,
  [SMALL_STATE(288)] = 8512,
  [SMALL_STATE(289)] = 8522,
  [SMALL_STATE(290)] = 8532,
  [SMALL_STATE(291)] = 8542,
  [SMALL_STATE(292)] = 8552,
  [SMALL_STATE(293)] = 8562,
  [SMALL_STATE(294)] = 8572,
  [SMALL_STATE(295)] = 8582,
  [SMALL_STATE(296)] = 8592,
  [SMALL_STATE(297)] = 8602,
  [SMALL_STATE(298)] = 8612,
  [SMALL_STATE(299)] = 8622,
  [SMALL_STATE(300)] = 8632,
  [SMALL_STATE(301)] = 8642,
  [SMALL_STATE(302)] = 8652,
  [SMALL_STATE(303)] = 8662,
  [SMALL_STATE(304)] = 8672,
  [SMALL_STATE(305)] = 8682,
  [SMALL_STATE(306)] = 8690,
  [SMALL_STATE(307)] = 8700,
  [SMALL_STATE(308)] = 8710,
  [SMALL_STATE(309)] = 8720,
  [SMALL_STATE(310)] = 8730,
  [SMALL_STATE(311)] = 8740,
  [SMALL_STATE(312)] = 8750,
  [SMALL_STATE(313)] = 8757,
  [SMALL_STATE(314)] = 8764,
  [SMALL_STATE(315)] = 8771,
  [SMALL_STATE(316)] = 8778,
  [SMALL_STATE(317)] = 8785,
  [SMALL_STATE(318)] = 8792,
  [SMALL_STATE(319)] = 8799,
  [SMALL_STATE(320)] = 8806,
  [SMALL_STATE(321)] = 8813,
  [SMALL_STATE(322)] = 8820,
  [SMALL_STATE(323)] = 8827,
  [SMALL_STATE(324)] = 8834,
  [SMALL_STATE(325)] = 8841,
  [SMALL_STATE(326)] = 8848,
  [SMALL_STATE(327)] = 8855,
  [SMALL_STATE(328)] = 8862,
  [SMALL_STATE(329)] = 8869,
  [SMALL_STATE(330)] = 8876,
  [SMALL_STATE(331)] = 8883,
  [SMALL_STATE(332)] = 8890,
  [SMALL_STATE(333)] = 8897,
  [SMALL_STATE(334)] = 8904,
  [SMALL_STATE(335)] = 8911,
  [SMALL_STATE(336)] = 8918,
  [SMALL_STATE(337)] = 8925,
  [SMALL_STATE(338)] = 8932,
  [SMALL_STATE(339)] = 8939,
  [SMALL_STATE(340)] = 8946,
  [SMALL_STATE(341)] = 8953,
  [SMALL_STATE(342)] = 8960,
  [SMALL_STATE(343)] = 8967,
  [SMALL_STATE(344)] = 8974,
  [SMALL_STATE(345)] = 8981,
  [SMALL_STATE(346)] = 8988,
  [SMALL_STATE(347)] = 8995,
  [SMALL_STATE(348)] = 9002,
  [SMALL_STATE(349)] = 9009,
  [SMALL_STATE(350)] = 9016,
  [SMALL_STATE(351)] = 9023,
  [SMALL_STATE(352)] = 9030,
  [SMALL_STATE(353)] = 9037,
  [SMALL_STATE(354)] = 9044,
  [SMALL_STATE(355)] = 9051,
  [SMALL_STATE(356)] = 9058,
  [SMALL_STATE(357)] = 9065,
  [SMALL_STATE(358)] = 9072,
  [SMALL_STATE(359)] = 9079,
  [SMALL_STATE(360)] = 9086,
  [SMALL_STATE(361)] = 9093,
  [SMALL_STATE(362)] = 9100,
  [SMALL_STATE(363)] = 9107,
  [SMALL_STATE(364)] = 9114,
  [SMALL_STATE(365)] = 9121,
  [SMALL_STATE(366)] = 9128,
  [SMALL_STATE(367)] = 9135,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(285),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(263),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(362),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(361),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(358),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(357),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(354),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(121),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(118),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(217),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(94),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__complex_expression, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__complex_expression, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_invocation_expression, 2, .production_id = 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_invocation_expression, 2, .production_id = 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_access, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_access, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex_invocation_expression, 4, .production_id = 4),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex_invocation_expression, 4, .production_id = 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex_invocation_expression, 3, .production_id = 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex_invocation_expression, 3, .production_id = 4),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_module_repeat1, 2), SHIFT_REPEAT(329),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_module_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_module_repeat1, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 4, .production_id = 12),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 4, .production_id = 12),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_literal, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_literal, 1),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 4, .production_id = 11),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 4, .production_id = 11),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_literal, 3, .production_id = 9),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_literal, 3, .production_id = 9),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_module_repeat1, 2), SHIFT_REPEAT(317),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 5),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 5, .production_id = 16),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 5, .production_id = 16),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_body, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_body, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_body, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_body, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expression, 3, .production_id = 8),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 3, .production_id = 8),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [333] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_module_repeat1, 2), SHIFT_REPEAT(352),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_module_repeat1, 2), SHIFT_REPEAT(343),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_expression, 1),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand_expression, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_expression, 1),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 10),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 10),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand_expression, 1),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [391] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_module_repeat1, 2), SHIFT_REPEAT(327),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_case_list, 1),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__enum_case, 2),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__enum_case, 2), SHIFT_REPEAT(326),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__enum_case, 2), SHIFT_REPEAT(366),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__enum_case, 2),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__enum_case, 2), SHIFT_REPEAT(201),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_case_list_repeat1, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_case_list_repeat1, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_case_list, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_case_list, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 2, .production_id = 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 2, .production_id = 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 2, .production_id = 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 2, .production_id = 1),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__enum_case, 1, .production_id = 15),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__enum_case, 1, .production_id = 15),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_members_repeat1, 2),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_members_repeat1, 2), SHIFT_REPEAT(339),
  [470] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_members_repeat1, 2), SHIFT_REPEAT(319),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_list, 3),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 4, .production_id = 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 4, .production_id = 1),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 1),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 1),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_list, 2),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 5, .production_id = 18),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 5, .production_id = 18),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 5, .production_id = 19),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 5, .production_id = 19),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [509] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex_invocation_expression, 2, .production_id = 4),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex_invocation_expression, 2, .production_id = 4),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_value, 1, .production_id = 14),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_value, 1, .production_id = 14),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_list, 1),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(226),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_case_list, 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(100),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 2, .production_id = 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_module, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_module, 2),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__type_case_list_repeat1, 2),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_case_list_repeat1, 2), SHIFT_REPEAT(310),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [618] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_case_list_repeat1, 2), SHIFT_REPEAT(194),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_property_list_repeat1, 2),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_list_repeat1, 2), SHIFT_REPEAT(238),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2),
  [632] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2), SHIFT_REPEAT(58),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_module, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_module, 1),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_case_list, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(20),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_case_list, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_list, 2),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [682] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_case_list, 2),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_case_list, 3),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_module, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_module, 3),
  [714] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [716] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2), SHIFT_REPEAT(66),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_members_repeat1, 2),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 13),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 13),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3, .production_id = 6),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3, .production_id = 6),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_function, 2, .production_id = 17),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_function, 2, .production_id = 17),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 7),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 7),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_list_repeat1, 2),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_case, 3, .production_id = 20),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_case, 3, .production_id = 20),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_case_list_repeat1, 2),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 5),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 2),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 4),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [833] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 3),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 3, .production_id = 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 4, .production_id = 1),
  [853] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 5, .production_id = 18),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [863] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 3, .production_id = 5),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
