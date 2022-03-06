#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 440
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 98
#define ALIAS_COUNT 2
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 25

enum {
  sym__shebang = 1,
  anon_sym_module = 2,
  anon_sym_import = 3,
  anon_sym_EQ = 4,
  anon_sym_DOT = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_let = 8,
  anon_sym_func = 9,
  anon_sym_data = 10,
  anon_sym_extern = 11,
  anon_sym_enum = 12,
  anon_sym_COMMA = 13,
  anon_sym_BANG = 14,
  anon_sym_STAR = 15,
  anon_sym_SLASH = 16,
  anon_sym_PLUS = 17,
  anon_sym_DASH = 18,
  anon_sym_EQ_EQ = 19,
  anon_sym_BANG_EQ = 20,
  anon_sym_GT_EQ = 21,
  anon_sym_GT = 22,
  anon_sym_LT = 23,
  anon_sym_LT_EQ = 24,
  anon_sym_AMP_AMP = 25,
  anon_sym_PIPE_PIPE = 26,
  anon_sym_type = 27,
  anon_sym_COLON = 28,
  anon_sym_DQUOTE = 29,
  aux_sym_string_literal_token1 = 30,
  sym_escape_sequence = 31,
  anon_sym_LPAREN = 32,
  anon_sym_RPAREN = 33,
  anon_sym_LBRACK = 34,
  anon_sym_RBRACK = 35,
  anon_sym_EQ_GT = 36,
  aux_sym__statement_terminator_token1 = 37,
  aux_sym__list_terminator_token1 = 38,
  sym_identifier = 39,
  sym__int = 40,
  sym__float = 41,
  sym_comment = 42,
  sym_source_file = 43,
  sym_module_declaration = 44,
  sym__top_level_declaration = 45,
  sym__scope_level_declaration = 46,
  sym_import_declaration = 47,
  sym_import_module = 48,
  sym_import_members = 49,
  sym_let_declaration = 50,
  sym_function_declaration = 51,
  sym_data_declaration = 52,
  sym_data_property_list = 53,
  sym__data_property = 54,
  sym_data_property_value = 55,
  sym_data_property_function = 56,
  sym_extern_declaration = 57,
  sym_enum_declaration = 58,
  sym_enum_case_list = 59,
  aux_sym__enum_case = 60,
  sym__statement_list = 61,
  sym__statement = 62,
  sym__complex_expression = 63,
  sym_complex_invocation_expression = 64,
  sym_simple_invocation_expression = 65,
  sym__simple_expression = 66,
  sym__operand_expression = 67,
  sym_unary_expression = 68,
  sym_binary_expression = 69,
  sym__argument = 70,
  sym_member_access = 71,
  sym_type_expression = 72,
  sym_type_body = 73,
  sym__type_case_list = 74,
  sym_type_case = 75,
  sym__literal = 76,
  sym_string_literal = 77,
  sym_group_literal = 78,
  sym__number_literal = 79,
  sym_int_literal = 80,
  sym_float_literal = 81,
  sym_array_literal = 82,
  sym_function_literal = 83,
  sym_parameter_list = 84,
  sym__statement_terminator = 85,
  sym__list_terminator = 86,
  aux_sym_source_file_repeat1 = 87,
  aux_sym_import_module_repeat1 = 88,
  aux_sym_import_members_repeat1 = 89,
  aux_sym_data_property_list_repeat1 = 90,
  aux_sym_enum_case_list_repeat1 = 91,
  aux_sym__statement_list_repeat1 = 92,
  aux_sym_complex_invocation_expression_repeat1 = 93,
  aux_sym_member_access_repeat1 = 94,
  aux_sym__type_case_list_repeat1 = 95,
  aux_sym_string_literal_repeat1 = 96,
  aux_sym_array_literal_repeat1 = 97,
  alias_sym_enum_case_reference = 98,
  alias_sym_member_identifier = 99,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__shebang] = "_shebang",
  [anon_sym_module] = "module",
  [anon_sym_import] = "import",
  [anon_sym_EQ] = "=",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_let] = "let",
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
  [sym__int] = "_int",
  [sym__float] = "_float",
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
  [sym__number_literal] = "_number_literal",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
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
  [aux_sym_member_access_repeat1] = "member_access_repeat1",
  [aux_sym__type_case_list_repeat1] = "_type_case_list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_array_literal_repeat1] = "array_literal_repeat1",
  [alias_sym_enum_case_reference] = "enum_case_reference",
  [alias_sym_member_identifier] = "member_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__shebang] = sym__shebang,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_let] = anon_sym_let,
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
  [sym__int] = sym__int,
  [sym__float] = sym__float,
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
  [sym__number_literal] = sym__number_literal,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
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
  [aux_sym_member_access_repeat1] = aux_sym_member_access_repeat1,
  [aux_sym__type_case_list_repeat1] = aux_sym__type_case_list_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_array_literal_repeat1] = aux_sym_array_literal_repeat1,
  [alias_sym_enum_case_reference] = alias_sym_enum_case_reference,
  [alias_sym_member_identifier] = alias_sym_member_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__shebang] = {
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
  [anon_sym_EQ] = {
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
  [sym__int] = {
    .visible = false,
    .named = true,
  },
  [sym__float] = {
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
  [sym__number_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
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
  [aux_sym_member_access_repeat1] = {
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
  [alias_sym_member_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alias = 1,
  field_body = 2,
  field_cases = 3,
  field_expression = 4,
  field_function = 5,
  field_label = 6,
  field_members = 7,
  field_name = 8,
  field_object = 9,
  field_operator = 10,
  field_parameters = 11,
  field_properties = 12,
  field_type = 13,
  field_value = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_body] = "body",
  [field_cases] = "cases",
  [field_expression] = "expression",
  [field_function] = "function",
  [field_label] = "label",
  [field_members] = "members",
  [field_name] = "name",
  [field_object] = "object",
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
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 2},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
  [9] = {.index = 13, .length = 2},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 1},
  [13] = {.index = 17, .length = 3},
  [14] = {.index = 20, .length = 1},
  [15] = {.index = 21, .length = 1},
  [16] = {.index = 22, .length = 2},
  [17] = {.index = 24, .length = 1},
  [19] = {.index = 25, .length = 4},
  [20] = {.index = 29, .length = 2},
  [21] = {.index = 31, .length = 2},
  [22] = {.index = 33, .length = 2},
  [23] = {.index = 35, .length = 2},
  [24] = {.index = 37, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_operator, 0},
  [2] =
    {field_function, 0},
  [3] =
    {field_members, 1},
    {field_object, 0},
  [5] =
    {field_members, 2},
    {field_name, 1},
  [7] =
    {field_name, 1},
    {field_value, 2},
  [9] =
    {field_function, 2},
    {field_name, 1},
  [11] =
    {field_name, 1},
    {field_parameters, 2},
  [13] =
    {field_body, 2},
    {field_type, 1},
  [15] =
    {field_expression, 1},
  [16] =
    {field_operator, 1},
  [17] =
    {field_alias, 1},
    {field_alias, 2},
    {field_name, 3},
  [20] =
    {field_body, 2},
  [21] =
    {field_parameters, 1},
  [22] =
    {field_name, 1},
    {field_value, 3},
  [24] =
    {field_name, 0},
  [25] =
    {field_alias, 1},
    {field_alias, 2},
    {field_members, 4},
    {field_name, 3},
  [29] =
    {field_body, 3},
    {field_parameters, 1},
  [31] =
    {field_name, 0},
    {field_parameters, 1},
  [33] =
    {field_name, 1},
    {field_properties, 3},
  [35] =
    {field_cases, 3},
    {field_name, 1},
  [37] =
    {field_body, 2},
    {field_label, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [12] = {
    [1] = alias_sym_member_identifier,
  },
  [18] = {
    [0] = alias_sym_enum_case_reference,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6528
    ? (c < 2969
      ? (c < 2160
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
        : (c <= 2183 || (c < 2649
          ? (c < 2493
            ? (c < 2417
              ? (c < 2365
                ? (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))
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
      : (c <= 2970 || (c < 3976
        ? (c < 3389
          ? (c < 3168
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
                : (c <= 3133 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : c <= 3165)))))
            : (c <= 3169 || (c < 3261
              ? (c < 3218
                ? (c < 3205
                  ? c == 3200
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : c <= 3257)))
              : (c <= 3261 || (c < 3332
                ? (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3297 || (c >= 3313 && c <= 3314)))
                : (c <= 3340 || (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)))))))
          : (c <= 3389 || (c < 3716
            ? (c < 3507
              ? (c < 3450
                ? (c < 3412
                  ? c == 3406
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3634
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))
                : (c <= 3635 || (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3776
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)))
              : (c <= 3780 || (c < 3840
                ? (c < 3804
                  ? c == 3782
                  : c <= 3807)
                : (c <= 3840 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4824
          ? (c < 4348
            ? (c < 4206
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : c <= 4198)))
              : (c <= 4208 || (c < 4295
                ? (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4752
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : c <= 4749)))
              : (c <= 4784 || (c < 4800
                ? (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)))))))
          : (c <= 4880 || (c < 5984
            ? (c < 5743
              ? (c < 5024
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : c <= 5740)))
              : (c <= 5759 || (c < 5888
                ? (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5873 && c <= 5880)))
                : (c <= 5905 || (c < 5952
                  ? (c >= 5919 && c <= 5937)
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
    : (c <= 6571 || (c < 43250
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
                  : c <= 6988)))
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
        : (c <= 8526 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 8579 && c <= 8580)
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
          : (c <= 12591 || (c < 42656
            ? (c < 40959
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 42124 || (c < 42538
                ? (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42725 || (c < 42994
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65313
        ? (c < 43808
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
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
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
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
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
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
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
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
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
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
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
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
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
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
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
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
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
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
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
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
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
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
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
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
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
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
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
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
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
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2185
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
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
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
      : (c <= 2972 || (c < 4096
        ? (c < 3406
          ? (c < 3200
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
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
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
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 6528
    ? (c < 2969
      ? (c < 2160
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
        : (c <= 2183 || (c < 2649
          ? (c < 2493
            ? (c < 2417
              ? (c < 2365
                ? (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : (c <= 2249 || (c >= 2308 && c <= 2361)))
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
      : (c <= 2970 || (c < 3976
        ? (c < 3389
          ? (c < 3168
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
                : (c <= 3133 || (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : c <= 3165)))))
            : (c <= 3169 || (c < 3261
              ? (c < 3218
                ? (c < 3205
                  ? c == 3200
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : c <= 3257)))
              : (c <= 3261 || (c < 3332
                ? (c < 3296
                  ? (c >= 3293 && c <= 3294)
                  : (c <= 3297 || (c >= 3313 && c <= 3314)))
                : (c <= 3340 || (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)))))))
          : (c <= 3389 || (c < 3716
            ? (c < 3507
              ? (c < 3450
                ? (c < 3412
                  ? c == 3406
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3634
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))
                : (c <= 3635 || (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3776
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)))
              : (c <= 3780 || (c < 3840
                ? (c < 3804
                  ? c == 3782
                  : c <= 3807)
                : (c <= 3840 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4824
          ? (c < 4348
            ? (c < 4206
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : c <= 4198)))
              : (c <= 4208 || (c < 4295
                ? (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4752
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : c <= 4749)))
              : (c <= 4784 || (c < 4800
                ? (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)))))))
          : (c <= 4880 || (c < 5984
            ? (c < 5743
              ? (c < 5024
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : c <= 5740)))
              : (c <= 5759 || (c < 5888
                ? (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5873 && c <= 5880)))
                : (c <= 5905 || (c < 5952
                  ? (c >= 5919 && c <= 5937)
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
    : (c <= 6571 || (c < 43250
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
                  : c <= 6988)))
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
        : (c <= 8526 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11264
                  ? (c >= 8579 && c <= 8580)
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
          : (c <= 12591 || (c < 42656
            ? (c < 40959
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 42124 || (c < 42538
                ? (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42725 || (c < 42994
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65313
        ? (c < 43808
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
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
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
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
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
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
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
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
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
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
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
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2185
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
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
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
      : (c <= 2972 || (c < 4096
        ? (c < 3406
          ? (c < 3200
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
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
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
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
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
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_10(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
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
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_11(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
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
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_12(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
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
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_13(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
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
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_14(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
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
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_15(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
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
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_16(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
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
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_17(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
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
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_18(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
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
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_19(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
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
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_20(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
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
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_21(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
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
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
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
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
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
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
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
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
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
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(84);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(119);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '[') ADVANCE(83);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(119);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(65);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(119);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == ';') ADVANCE(86);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == ']') ADVANCE(84);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(119);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == ']') ADVANCE(84);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(119);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == ']') ADVANCE(84);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(119);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '[') ADVANCE(83);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(119);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == '[') ADVANCE(83);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(119);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(20);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(45);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '>') ADVANCE(65);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(119);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '&') ADVANCE(68);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(129);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(128);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '0') ADVANCE(121);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '=') ADVANCE(23);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(119);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 24:
      if (lookahead == 'U') ADVANCE(36);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == 'x') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead != 0) ADVANCE(78);
      END_STATE();
    case 25:
      if (lookahead == '|') ADVANCE(69);
      END_STATE();
    case 26:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(56);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '#') ADVANCE(9);
      if (lookahead == '&') ADVANCE(14);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == ',') ADVANCE(54);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '<') ADVANCE(66);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead == '>') ADVANCE(65);
      if (lookahead == '[') ADVANCE(83);
      if (lookahead == ']') ADVANCE(84);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(119);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 'm') ADVANCE(103);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 38:
      if (eof) ADVANCE(39);
      if (lookahead == '!') ADVANCE(55);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '(') ADVANCE(81);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '/') ADVANCE(15);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '[') ADVANCE(83);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(119);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(113);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == 't') ADVANCE(116);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(38)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_module);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(119);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(119);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(62);
      if (lookahead == '>') ADVANCE(85);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(119);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_func);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(119);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_data);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(119);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_extern);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(119);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_enum);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(119);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(129);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(27);
      if (lookahead == '0') ADVANCE(121);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(119);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(77);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__statement_terminator_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__statement_terminator_token1);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == ';') ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__list_terminator_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__list_terminator_token1);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == ',') ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(119);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(112);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(119);
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(119);
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(119);
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(119);
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(119);
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(119);
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(119);
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(119);
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(119);
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(119);
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(119);
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(119);
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(119);
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(119);
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(119);
      if (lookahead == 'p') ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(119);
      if (lookahead == 'p') ADVANCE(94);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(119);
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(119);
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(119);
      if (lookahead == 't') ADVANCE(49);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(119);
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(119);
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(119);
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(119);
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(119);
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(119);
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_20(lookahead)) ADVANCE(119);
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(119);
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(119);
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__int);
      if (lookahead == '.') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__int);
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__int);
      if (lookahead == '.') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__int);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(129);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 38},
  [4] = {.lex_state = 38},
  [5] = {.lex_state = 38},
  [6] = {.lex_state = 38},
  [7] = {.lex_state = 38},
  [8] = {.lex_state = 38},
  [9] = {.lex_state = 38},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 5},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 8},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 8},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 8},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 5},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 8},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 12},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 38},
  [154] = {.lex_state = 6},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 6},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 12},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 12},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 12},
  [186] = {.lex_state = 12},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 12},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 12},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 12},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 12},
  [203] = {.lex_state = 12},
  [204] = {.lex_state = 6},
  [205] = {.lex_state = 12},
  [206] = {.lex_state = 6},
  [207] = {.lex_state = 12},
  [208] = {.lex_state = 12},
  [209] = {.lex_state = 12},
  [210] = {.lex_state = 6},
  [211] = {.lex_state = 12},
  [212] = {.lex_state = 12},
  [213] = {.lex_state = 6},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 12},
  [216] = {.lex_state = 12},
  [217] = {.lex_state = 12},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 12},
  [220] = {.lex_state = 12},
  [221] = {.lex_state = 12},
  [222] = {.lex_state = 12},
  [223] = {.lex_state = 12},
  [224] = {.lex_state = 12},
  [225] = {.lex_state = 12},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 12},
  [229] = {.lex_state = 6},
  [230] = {.lex_state = 6},
  [231] = {.lex_state = 6},
  [232] = {.lex_state = 6},
  [233] = {.lex_state = 12},
  [234] = {.lex_state = 12},
  [235] = {.lex_state = 12},
  [236] = {.lex_state = 12},
  [237] = {.lex_state = 12},
  [238] = {.lex_state = 19},
  [239] = {.lex_state = 12},
  [240] = {.lex_state = 6},
  [241] = {.lex_state = 6},
  [242] = {.lex_state = 19},
  [243] = {.lex_state = 19},
  [244] = {.lex_state = 12},
  [245] = {.lex_state = 19},
  [246] = {.lex_state = 6},
  [247] = {.lex_state = 3},
  [248] = {.lex_state = 6},
  [249] = {.lex_state = 6},
  [250] = {.lex_state = 6},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 5},
  [253] = {.lex_state = 19},
  [254] = {.lex_state = 4},
  [255] = {.lex_state = 19},
  [256] = {.lex_state = 6},
  [257] = {.lex_state = 3},
  [258] = {.lex_state = 5},
  [259] = {.lex_state = 1},
  [260] = {.lex_state = 19},
  [261] = {.lex_state = 19},
  [262] = {.lex_state = 7},
  [263] = {.lex_state = 5},
  [264] = {.lex_state = 7},
  [265] = {.lex_state = 5},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 7},
  [269] = {.lex_state = 7},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 19},
  [272] = {.lex_state = 5},
  [273] = {.lex_state = 5},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 7},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 5},
  [278] = {.lex_state = 5},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 7},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 5},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 5},
  [285] = {.lex_state = 19},
  [286] = {.lex_state = 5},
  [287] = {.lex_state = 19},
  [288] = {.lex_state = 5},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 5},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 7},
  [293] = {.lex_state = 7},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 5},
  [298] = {.lex_state = 2},
  [299] = {.lex_state = 19},
  [300] = {.lex_state = 1},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 5},
  [304] = {.lex_state = 7},
  [305] = {.lex_state = 5},
  [306] = {.lex_state = 7},
  [307] = {.lex_state = 7},
  [308] = {.lex_state = 5},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 19},
  [311] = {.lex_state = 1},
  [312] = {.lex_state = 1},
  [313] = {.lex_state = 5},
  [314] = {.lex_state = 19},
  [315] = {.lex_state = 2},
  [316] = {.lex_state = 7},
  [317] = {.lex_state = 7},
  [318] = {.lex_state = 2},
  [319] = {.lex_state = 1},
  [320] = {.lex_state = 5},
  [321] = {.lex_state = 1},
  [322] = {.lex_state = 1},
  [323] = {.lex_state = 19},
  [324] = {.lex_state = 1},
  [325] = {.lex_state = 19},
  [326] = {.lex_state = 19},
  [327] = {.lex_state = 19},
  [328] = {.lex_state = 19},
  [329] = {.lex_state = 19},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 2},
  [332] = {.lex_state = 1},
  [333] = {.lex_state = 1},
  [334] = {.lex_state = 2},
  [335] = {.lex_state = 19},
  [336] = {.lex_state = 3},
  [337] = {.lex_state = 1},
  [338] = {.lex_state = 5},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 19},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 2},
  [343] = {.lex_state = 1},
  [344] = {.lex_state = 1},
  [345] = {.lex_state = 19},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 5},
  [348] = {.lex_state = 5},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 19},
  [351] = {.lex_state = 1},
  [352] = {.lex_state = 1},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 1},
  [355] = {.lex_state = 1},
  [356] = {.lex_state = 1},
  [357] = {.lex_state = 19},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 19},
  [360] = {.lex_state = 1},
  [361] = {.lex_state = 1},
  [362] = {.lex_state = 1},
  [363] = {.lex_state = 19},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 1},
  [367] = {.lex_state = 19},
  [368] = {.lex_state = 5},
  [369] = {.lex_state = 19},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 19},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 1},
  [375] = {.lex_state = 1},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 19},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 19},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 19},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 19},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 1},
  [396] = {.lex_state = 1},
  [397] = {.lex_state = 19},
  [398] = {.lex_state = 1},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 19},
  [404] = {.lex_state = 38},
  [405] = {.lex_state = 19},
  [406] = {.lex_state = 19},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 1},
  [409] = {.lex_state = 19},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 1},
  [413] = {.lex_state = 19},
  [414] = {.lex_state = 1},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 1},
  [418] = {.lex_state = 1},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 38},
  [423] = {.lex_state = 19},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 19},
  [427] = {.lex_state = 38},
  [428] = {.lex_state = 1},
  [429] = {.lex_state = 19},
  [430] = {.lex_state = 19},
  [431] = {.lex_state = 38},
  [432] = {.lex_state = 1},
  [433] = {.lex_state = 19},
  [434] = {.lex_state = 19},
  [435] = {.lex_state = 38},
  [436] = {.lex_state = 19},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 38},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__shebang] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
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
    [sym__int] = ACTIONS(1),
    [sym__float] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(424),
    [sym_module_declaration] = STATE(354),
    [sym__top_level_declaration] = STATE(355),
    [sym_import_declaration] = STATE(355),
    [sym_let_declaration] = STATE(355),
    [sym_function_declaration] = STATE(355),
    [sym_data_declaration] = STATE(355),
    [sym_extern_declaration] = STATE(355),
    [sym_enum_declaration] = STATE(355),
    [sym__complex_expression] = STATE(355),
    [sym_complex_invocation_expression] = STATE(355),
    [sym__operand_expression] = STATE(227),
    [sym_unary_expression] = STATE(218),
    [sym_binary_expression] = STATE(218),
    [sym__argument] = STATE(10),
    [sym_member_access] = STATE(10),
    [sym_type_expression] = STATE(10),
    [sym__literal] = STATE(46),
    [sym_string_literal] = STATE(46),
    [sym_group_literal] = STATE(46),
    [sym__number_literal] = STATE(46),
    [sym_int_literal] = STATE(46),
    [sym_float_literal] = STATE(46),
    [sym_array_literal] = STATE(46),
    [sym_function_literal] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__shebang] = ACTIONS(7),
    [anon_sym_module] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_LBRACE] = ACTIONS(13),
    [anon_sym_let] = ACTIONS(15),
    [anon_sym_func] = ACTIONS(17),
    [anon_sym_data] = ACTIONS(19),
    [anon_sym_extern] = ACTIONS(21),
    [anon_sym_enum] = ACTIONS(23),
    [anon_sym_BANG] = ACTIONS(25),
    [anon_sym_type] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym__int] = ACTIONS(37),
    [sym__float] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_module,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_extern,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(227), 1,
      sym__operand_expression,
    STATE(356), 1,
      sym_module_declaration,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(355), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [94] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_extern,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(227), 1,
      sym__operand_expression,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(355), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [182] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_extern,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(227), 1,
      sym__operand_expression,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(355), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [270] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_extern,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(227), 1,
      sym__operand_expression,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(355), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [358] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_extern,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(227), 1,
      sym__operand_expression,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(355), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [446] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_extern,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(227), 1,
      sym__operand_expression,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(355), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [534] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(21), 1,
      anon_sym_extern,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(227), 1,
      sym__operand_expression,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(355), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [622] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_import,
    ACTIONS(54), 1,
      anon_sym_LBRACE,
    ACTIONS(57), 1,
      anon_sym_let,
    ACTIONS(60), 1,
      anon_sym_func,
    ACTIONS(63), 1,
      anon_sym_data,
    ACTIONS(66), 1,
      anon_sym_extern,
    ACTIONS(69), 1,
      anon_sym_enum,
    ACTIONS(72), 1,
      anon_sym_BANG,
    ACTIONS(75), 1,
      anon_sym_type,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(84), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      sym_identifier,
    ACTIONS(90), 1,
      sym__int,
    ACTIONS(93), 1,
      sym__float,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(227), 1,
      sym__operand_expression,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(355), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [710] = 18,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(100), 1,
      anon_sym_BANG,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(110), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(112), 1,
      sym_comment,
    STATE(227), 1,
      sym__operand_expression,
    STATE(198), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(311), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(27), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
    ACTIONS(102), 12,
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
  [787] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(116), 1,
      anon_sym_BANG,
    ACTIONS(120), 1,
      anon_sym_type,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym__int,
    ACTIONS(132), 1,
      sym__float,
    STATE(226), 1,
      sym__operand_expression,
    STATE(220), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(339), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(29), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    ACTIONS(102), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(118), 8,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    STATE(59), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [863] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym__operand_expression,
    STATE(425), 1,
      sym__statement_list,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
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
  [944] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(136), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym__operand_expression,
    STATE(402), 1,
      sym__statement_list,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
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
  [1025] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym__operand_expression,
    STATE(381), 1,
      sym__statement_list,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
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
  [1106] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(140), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym__operand_expression,
    STATE(411), 1,
      sym__statement_list,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
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
  [1187] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym__operand_expression,
    STATE(407), 1,
      sym__statement_list,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
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
  [1268] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym__operand_expression,
    STATE(385), 1,
      sym__statement_list,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
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
  [1349] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym__operand_expression,
    STATE(410), 1,
      sym__statement_list,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
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
  [1430] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym__operand_expression,
    STATE(391), 1,
      sym__statement_list,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
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
  [1511] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(150), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym__operand_expression,
    STATE(399), 1,
      sym__statement_list,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
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
  [1592] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym__operand_expression,
    STATE(394), 1,
      sym__statement_list,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
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
  [1673] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym__operand_expression,
    STATE(415), 1,
      sym__statement_list,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
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
  [1754] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym__operand_expression,
    STATE(419), 1,
      sym__statement_list,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
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
  [1835] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym__operand_expression,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(366), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1913] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
    STATE(227), 1,
      sym__operand_expression,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(366), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1991] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_let,
    ACTIONS(17), 1,
      anon_sym_func,
    ACTIONS(19), 1,
      anon_sym_data,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    STATE(227), 1,
      sym__operand_expression,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(366), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [2066] = 14,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(162), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    STATE(337), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
    ACTIONS(102), 12,
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
  [2130] = 14,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(170), 1,
      anon_sym_DQUOTE,
    ACTIONS(172), 1,
      anon_sym_LPAREN,
    ACTIONS(174), 1,
      anon_sym_LBRACK,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(162), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    STATE(338), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
    ACTIONS(102), 12,
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
  [2194] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_type,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym__int,
    ACTIONS(132), 1,
      sym__float,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(349), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    ACTIONS(102), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(118), 8,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    STATE(59), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [2257] = 17,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      anon_sym_BANG,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      aux_sym__statement_terminator_token1,
    STATE(227), 1,
      sym__operand_expression,
    STATE(198), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(319), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(27), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [2320] = 17,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      anon_sym_BANG,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      anon_sym_LBRACK,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(188), 1,
      aux_sym__statement_terminator_token1,
    STATE(227), 1,
      sym__operand_expression,
    STATE(198), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(319), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(27), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [2383] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(368), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [2443] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(202), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(368), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [2503] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(368), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [2563] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_DOT,
    ACTIONS(211), 1,
      aux_sym__statement_terminator_token1,
    STATE(35), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(209), 23,
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
      sym__int,
      sym__float,
  [2601] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(290), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [2661] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    ACTIONS(215), 1,
      anon_sym_EQ,
    STATE(227), 1,
      sym__operand_expression,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(351), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [2721] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(368), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [2781] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(368), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [2841] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(368), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [2901] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(303), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [2961] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(368), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [3021] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(368), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [3081] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(229), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(258), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [3141] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(368), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [3201] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      aux_sym__statement_terminator_token1,
    STATE(54), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(235), 23,
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
      sym__int,
      sym__float,
  [3239] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(368), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [3299] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(272), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [3359] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(309), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [3419] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_type,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym__int,
    ACTIONS(132), 1,
      sym__float,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    ACTIONS(245), 1,
      anon_sym_BANG,
    STATE(226), 1,
      sym__operand_expression,
    STATE(220), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(346), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(29), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(59), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [3479] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_type,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym__int,
    ACTIONS(132), 1,
      sym__float,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    ACTIONS(245), 1,
      anon_sym_BANG,
    STATE(226), 1,
      sym__operand_expression,
    STATE(220), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(346), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(29), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(59), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [3539] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(368), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [3599] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(249), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(368), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [3659] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_DOT,
    ACTIONS(253), 1,
      aux_sym__statement_terminator_token1,
    STATE(35), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(251), 23,
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
      sym__int,
      sym__float,
  [3697] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(313), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [3757] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    STATE(227), 1,
      sym__operand_expression,
    STATE(218), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(374), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [3814] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(348), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [3871] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(257), 24,
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
      sym__int,
      sym__float,
  [3904] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOT,
    STATE(65), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(235), 9,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(237), 14,
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
  [3941] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_type,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym__int,
    ACTIONS(132), 1,
      sym__float,
    ACTIONS(245), 1,
      anon_sym_BANG,
    STATE(226), 1,
      sym__operand_expression,
    STATE(220), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(346), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(29), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(59), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [3998] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_type,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym__int,
    ACTIONS(132), 1,
      sym__float,
    ACTIONS(245), 1,
      anon_sym_BANG,
    STATE(226), 1,
      sym__operand_expression,
    STATE(225), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(420), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(11), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(59), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [4055] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_type,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym__int,
    ACTIONS(132), 1,
      sym__float,
    ACTIONS(245), 1,
      anon_sym_BANG,
    STATE(226), 1,
      sym__operand_expression,
    STATE(225), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(387), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(11), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(59), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [4112] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(263), 24,
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
      sym__int,
      sym__float,
  [4145] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(267), 24,
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
      sym__int,
      sym__float,
  [4178] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_DOT,
    STATE(82), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(251), 9,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(253), 14,
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
  [4215] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(271), 24,
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
      sym__int,
      sym__float,
  [4248] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(277), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(275), 24,
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
      sym__int,
      sym__float,
  [4281] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(279), 1,
      anon_sym_DOT,
    STATE(68), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(209), 22,
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
      sym__int,
      sym__float,
  [4318] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_type,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym__int,
    ACTIONS(132), 1,
      sym__float,
    ACTIONS(245), 1,
      anon_sym_BANG,
    STATE(226), 1,
      sym__operand_expression,
    STATE(225), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(377), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(11), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(59), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [4375] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_type,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym__int,
    ACTIONS(132), 1,
      sym__float,
    ACTIONS(245), 1,
      anon_sym_BANG,
    STATE(226), 1,
      sym__operand_expression,
    STATE(225), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(376), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(11), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(59), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [4432] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(284), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(282), 24,
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
      sym__int,
      sym__float,
  [4465] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_type,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym__int,
    ACTIONS(132), 1,
      sym__float,
    ACTIONS(245), 1,
      anon_sym_BANG,
    STATE(226), 1,
      sym__operand_expression,
    STATE(225), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(421), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(11), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(59), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [4522] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(288), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(286), 24,
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
      sym__int,
      sym__float,
  [4555] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(292), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(290), 24,
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
      sym__int,
      sym__float,
  [4588] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(296), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(294), 24,
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
      sym__int,
      sym__float,
  [4621] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(300), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(298), 24,
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
      sym__int,
      sym__float,
  [4654] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(302), 24,
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
      sym__int,
      sym__float,
  [4687] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(308), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(306), 24,
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
      sym__int,
      sym__float,
  [4720] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(310), 24,
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
      sym__int,
      sym__float,
  [4753] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_type,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym__int,
    ACTIONS(180), 1,
      sym__float,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    ACTIONS(198), 1,
      anon_sym_LBRACK,
    STATE(228), 1,
      sym__operand_expression,
    STATE(189), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(368), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(28), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(85), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [4810] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_type,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym__int,
    ACTIONS(132), 1,
      sym__float,
    ACTIONS(245), 1,
      anon_sym_BANG,
    STATE(226), 1,
      sym__operand_expression,
    STATE(225), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(379), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(11), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(59), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [4867] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_DOT,
    STATE(82), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(209), 9,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(211), 14,
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
  [4904] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym__int,
    ACTIONS(39), 1,
      sym__float,
    STATE(227), 1,
      sym__operand_expression,
    STATE(198), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(319), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(27), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(46), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [4961] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(317), 24,
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
      sym__int,
      sym__float,
  [4994] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(321), 1,
      anon_sym_DOT,
    STATE(86), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(235), 22,
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
      sym__int,
      sym__float,
  [5031] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(321), 1,
      anon_sym_DOT,
    STATE(68), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(251), 22,
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
      sym__int,
      sym__float,
  [5068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 10,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(273), 14,
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
  [5100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 10,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(292), 14,
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
  [5132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 10,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(319), 14,
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
  [5164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 10,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(308), 14,
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
  [5196] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 10,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(312), 14,
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
  [5228] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(263), 23,
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
      sym__int,
      sym__float,
  [5260] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 10,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(265), 14,
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
  [5292] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(310), 23,
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
      sym__int,
      sym__float,
  [5324] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(271), 23,
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
      sym__int,
      sym__float,
  [5356] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(292), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(290), 23,
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
      sym__int,
      sym__float,
  [5388] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(267), 23,
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
      sym__int,
      sym__float,
  [5420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 10,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(277), 14,
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
  [5452] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(325), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(323), 23,
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
      sym__int,
      sym__float,
  [5484] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(277), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(275), 23,
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
      sym__int,
      sym__float,
  [5516] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(288), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(286), 23,
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
      sym__int,
      sym__float,
  [5548] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 10,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(304), 14,
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
  [5580] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(329), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(327), 23,
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
      sym__int,
      sym__float,
  [5612] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(296), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(294), 23,
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
      sym__int,
      sym__float,
  [5644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 10,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(300), 14,
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
  [5676] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(317), 23,
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
      sym__int,
      sym__float,
  [5708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 10,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(269), 14,
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
  [5740] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(284), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(282), 23,
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
      sym__int,
      sym__float,
  [5772] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(308), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(306), 23,
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
      sym__int,
      sym__float,
  [5804] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(257), 23,
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
      sym__int,
      sym__float,
  [5836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 10,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(288), 14,
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
  [5868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 10,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(296), 14,
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
  [5900] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(302), 23,
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
      sym__int,
      sym__float,
  [5932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 10,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(284), 14,
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
  [5964] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 10,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(259), 14,
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
  [5996] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(300), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(298), 23,
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
      sym__int,
      sym__float,
  [6028] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(333), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(331), 23,
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
      sym__int,
      sym__float,
  [6060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 9,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(325), 14,
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
  [6091] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_BANG,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    ACTIONS(337), 1,
      anon_sym_type,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(347), 1,
      sym__int,
    ACTIONS(349), 1,
      sym__float,
    STATE(215), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(151), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [6140] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_BANG,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    ACTIONS(337), 1,
      anon_sym_type,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(347), 1,
      sym__int,
    ACTIONS(349), 1,
      sym__float,
    STATE(216), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(151), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [6189] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    ACTIONS(353), 1,
      anon_sym_type,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      anon_sym_LBRACK,
    ACTIONS(361), 1,
      sym_identifier,
    ACTIONS(363), 1,
      sym__int,
    ACTIONS(365), 1,
      sym__float,
    STATE(190), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(150), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [6238] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(333), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(331), 22,
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
      sym__int,
      sym__float,
  [6269] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_BANG,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    ACTIONS(337), 1,
      anon_sym_type,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(347), 1,
      sym__int,
    ACTIONS(349), 1,
      sym__float,
    STATE(221), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(151), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [6318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 9,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(333), 14,
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
  [6349] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    ACTIONS(353), 1,
      anon_sym_type,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      anon_sym_LBRACK,
    ACTIONS(361), 1,
      sym_identifier,
    ACTIONS(363), 1,
      sym__int,
    ACTIONS(365), 1,
      sym__float,
    STATE(193), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(150), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [6398] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    ACTIONS(353), 1,
      anon_sym_type,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      anon_sym_LBRACK,
    ACTIONS(361), 1,
      sym_identifier,
    ACTIONS(363), 1,
      sym__int,
    ACTIONS(365), 1,
      sym__float,
    STATE(194), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(150), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [6447] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(329), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(327), 22,
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
      sym__int,
      sym__float,
  [6478] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      anon_sym_type,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_LBRACK,
    ACTIONS(377), 1,
      sym_identifier,
    ACTIONS(379), 1,
      sym__int,
    ACTIONS(381), 1,
      sym__float,
    STATE(195), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(146), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [6527] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      anon_sym_type,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_LBRACK,
    ACTIONS(377), 1,
      sym_identifier,
    ACTIONS(379), 1,
      sym__int,
    ACTIONS(381), 1,
      sym__float,
    STATE(196), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(146), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [6576] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      anon_sym_type,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_LBRACK,
    ACTIONS(377), 1,
      sym_identifier,
    ACTIONS(379), 1,
      sym__int,
    ACTIONS(381), 1,
      sym__float,
    STATE(197), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(146), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [6625] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_BANG,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      anon_sym_type,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_LBRACK,
    ACTIONS(377), 1,
      sym_identifier,
    ACTIONS(379), 1,
      sym__int,
    ACTIONS(381), 1,
      sym__float,
    STATE(199), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(146), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [6674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 9,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(329), 14,
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
  [6705] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_BANG,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    ACTIONS(337), 1,
      anon_sym_type,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(347), 1,
      sym__int,
    ACTIONS(349), 1,
      sym__float,
    STATE(224), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(151), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [6754] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(325), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(323), 22,
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
      sym__int,
      sym__float,
  [6785] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    ACTIONS(353), 1,
      anon_sym_type,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      anon_sym_LBRACK,
    ACTIONS(361), 1,
      sym_identifier,
    ACTIONS(363), 1,
      sym__int,
    ACTIONS(365), 1,
      sym__float,
    STATE(191), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(150), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [6834] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_type,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym__int,
    ACTIONS(132), 1,
      sym__float,
    STATE(358), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(59), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [6877] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_type,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym__int,
    ACTIONS(132), 1,
      sym__float,
    STATE(372), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(59), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [6920] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    ACTIONS(337), 1,
      anon_sym_type,
    ACTIONS(339), 1,
      anon_sym_DQUOTE,
    ACTIONS(341), 1,
      anon_sym_LPAREN,
    ACTIONS(343), 1,
      anon_sym_LBRACK,
    ACTIONS(345), 1,
      sym_identifier,
    ACTIONS(347), 1,
      sym__int,
    ACTIONS(349), 1,
      sym__float,
    STATE(219), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(151), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [6963] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_LBRACE,
    ACTIONS(353), 1,
      anon_sym_type,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      anon_sym_LPAREN,
    ACTIONS(359), 1,
      anon_sym_LBRACK,
    ACTIONS(361), 1,
      sym_identifier,
    ACTIONS(363), 1,
      sym__int,
    ACTIONS(365), 1,
      sym__float,
    STATE(187), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(150), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [7006] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_type,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym__int,
    ACTIONS(132), 1,
      sym__float,
    STATE(364), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(59), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [7049] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_type,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym__int,
    ACTIONS(132), 1,
      sym__float,
    STATE(373), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(59), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [7092] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_type,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym__int,
    ACTIONS(132), 1,
      sym__float,
    STATE(353), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(59), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [7135] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_LBRACE,
    ACTIONS(120), 1,
      anon_sym_type,
    ACTIONS(122), 1,
      anon_sym_DQUOTE,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym__int,
    ACTIONS(132), 1,
      sym__float,
    STATE(370), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(59), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [7178] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      anon_sym_type,
    ACTIONS(371), 1,
      anon_sym_DQUOTE,
    ACTIONS(373), 1,
      anon_sym_LPAREN,
    ACTIONS(375), 1,
      anon_sym_LBRACK,
    ACTIONS(377), 1,
      sym_identifier,
    ACTIONS(379), 1,
      sym__int,
    ACTIONS(381), 1,
      sym__float,
    STATE(206), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(146), 8,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_function_literal,
  [7221] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(383), 1,
      anon_sym_DOT,
    STATE(148), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(251), 14,
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
  [7250] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(383), 1,
      anon_sym_DOT,
    STATE(145), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(235), 14,
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
  [7279] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(385), 1,
      anon_sym_DOT,
    STATE(149), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(251), 14,
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
  [7308] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(387), 1,
      anon_sym_DOT,
    STATE(148), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(209), 14,
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
  [7337] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(211), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(390), 1,
      anon_sym_DOT,
    STATE(149), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(209), 14,
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
  [7366] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(237), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(385), 1,
      anon_sym_DOT,
    STATE(147), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(235), 14,
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
  [7395] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    STATE(181), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(235), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(237), 11,
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
  [7423] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(257), 15,
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
  [7447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(395), 10,
      anon_sym_import,
      anon_sym_let,
      anon_sym_func,
      anon_sym_data,
      anon_sym_extern,
      anon_sym_enum,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
  [7471] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(288), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(286), 15,
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
  [7495] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(296), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(294), 15,
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
  [7519] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(263), 15,
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
  [7543] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(277), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(275), 15,
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
  [7567] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_DOT,
    STATE(158), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(209), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(211), 11,
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
  [7595] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(284), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(282), 15,
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
  [7619] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(271), 15,
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
  [7643] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(317), 15,
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
  [7667] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(308), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(306), 15,
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
  [7691] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(259), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(257), 15,
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
  [7715] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(310), 15,
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
  [7739] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(302), 15,
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
  [7763] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(292), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(290), 15,
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
  [7787] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(300), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(298), 15,
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
  [7811] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(271), 15,
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
  [7835] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(310), 15,
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
  [7859] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(263), 15,
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
  [7883] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(267), 15,
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
  [7907] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(277), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(275), 15,
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
  [7931] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(319), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(317), 15,
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
  [7955] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(308), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(306), 15,
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
  [7979] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(284), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(282), 15,
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
  [8003] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(292), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(290), 15,
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
  [8027] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(267), 15,
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
  [8051] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(296), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(294), 15,
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
  [8075] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(288), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(286), 15,
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
  [8099] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(300), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(298), 15,
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
  [8123] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_DOT,
    STATE(158), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(251), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(253), 11,
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
  [8151] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(304), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(302), 15,
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
  [8175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(265), 12,
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
  [8198] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(333), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(331), 14,
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
  [8221] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(259), 12,
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
  [8244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(284), 12,
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
  [8267] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(402), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(400), 14,
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
  [8290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(296), 12,
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
  [8313] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(162), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    ACTIONS(102), 12,
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
  [8338] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(404), 14,
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
  [8361] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 12,
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
  [8386] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(288), 12,
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
  [8409] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(404), 10,
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
  [8436] = 7,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(404), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(408), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(410), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(414), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(412), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [8467] = 7,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(404), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    ACTIONS(416), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(418), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(422), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(420), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [8498] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(416), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(418), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(404), 10,
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
  [8525] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(416), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(404), 12,
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
  [8550] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(164), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(162), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(102), 12,
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
  [8575] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(406), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(404), 14,
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
  [8598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(292), 12,
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
  [8621] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(329), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(327), 14,
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
  [8644] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(273), 12,
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
  [8667] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(312), 12,
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
  [8690] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(325), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(323), 14,
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
  [8713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 12,
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
  [8736] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(402), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(400), 14,
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
  [8759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(319), 12,
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
  [8782] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(308), 12,
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
  [8805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(269), 12,
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
  [8828] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(333), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(331), 14,
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
  [8851] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(304), 12,
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
  [8874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(300), 12,
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
  [8897] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(329), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(327), 14,
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
  [8920] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(325), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(323), 14,
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
  [8943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 11,
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
  [8965] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(426), 1,
      anon_sym_SLASH,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(428), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(434), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(430), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [8997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(329), 11,
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
  [9019] = 4,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(102), 12,
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
  [9043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 11,
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
  [9065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(102), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(118), 9,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9089] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(426), 1,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(428), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(406), 8,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [9117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(333), 11,
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
  [9139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(325), 11,
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
  [9161] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(426), 1,
      anon_sym_SLASH,
    ACTIONS(404), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(406), 10,
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
  [9187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    ACTIONS(102), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(118), 9,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [9210] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_STAR,
    ACTIONS(426), 1,
      anon_sym_SLASH,
    ACTIONS(428), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(432), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(434), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(430), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [9238] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_SLASH,
    ACTIONS(436), 1,
      anon_sym_STAR,
    ACTIONS(412), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(438), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(442), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(440), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [9266] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_SLASH,
    ACTIONS(444), 1,
      anon_sym_STAR,
    ACTIONS(420), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(446), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(450), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(448), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [9294] = 9,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    ACTIONS(454), 1,
      anon_sym_data,
    ACTIONS(456), 1,
      anon_sym_enum,
    ACTIONS(458), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(460), 1,
      sym_identifier,
    STATE(235), 1,
      sym__list_terminator,
    STATE(278), 1,
      aux_sym_enum_case_list_repeat1,
    STATE(231), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [9324] = 9,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_data,
    ACTIONS(456), 1,
      anon_sym_enum,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(462), 1,
      anon_sym_RBRACE,
    ACTIONS(464), 1,
      aux_sym__list_terminator_token1,
    STATE(237), 1,
      sym__list_terminator,
    STATE(286), 1,
      aux_sym_enum_case_list_repeat1,
    STATE(231), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [9354] = 7,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
    ACTIONS(468), 1,
      anon_sym_data,
    ACTIONS(471), 1,
      anon_sym_enum,
    ACTIONS(474), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(476), 1,
      sym_identifier,
    STATE(231), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [9378] = 7,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_data,
    ACTIONS(456), 1,
      anon_sym_enum,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    ACTIONS(481), 1,
      aux_sym__list_terminator_token1,
    STATE(231), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [9402] = 7,
    ACTIONS(454), 1,
      anon_sym_data,
    ACTIONS(456), 1,
      anon_sym_enum,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    ACTIONS(485), 1,
      sym_comment,
    STATE(388), 1,
      sym_enum_case_list,
    STATE(230), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [9426] = 7,
    ACTIONS(454), 1,
      anon_sym_data,
    ACTIONS(456), 1,
      anon_sym_enum,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(485), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
    STATE(438), 1,
      sym_enum_case_list,
    STATE(230), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [9450] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_data,
    ACTIONS(456), 1,
      anon_sym_enum,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    STATE(232), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [9471] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_data,
    ACTIONS(456), 1,
      anon_sym_enum,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
    STATE(232), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [9492] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_data,
    ACTIONS(456), 1,
      anon_sym_enum,
    ACTIONS(460), 1,
      sym_identifier,
    ACTIONS(493), 1,
      anon_sym_RBRACE,
    STATE(232), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [9513] = 5,
    ACTIONS(495), 1,
      anon_sym_RBRACE,
    ACTIONS(497), 1,
      sym_identifier,
    ACTIONS(499), 1,
      sym_comment,
    STATE(382), 1,
      sym_data_property_list,
    STATE(312), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [9531] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_data,
    ACTIONS(456), 1,
      anon_sym_enum,
    ACTIONS(460), 1,
      sym_identifier,
    STATE(229), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [9549] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    ACTIONS(505), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(503), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [9565] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(507), 1,
      anon_sym_LBRACE,
    ACTIONS(511), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(509), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [9581] = 5,
    ACTIONS(497), 1,
      sym_identifier,
    ACTIONS(499), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    STATE(392), 1,
      sym_data_property_list,
    STATE(312), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [9599] = 5,
    ACTIONS(497), 1,
      sym_identifier,
    ACTIONS(499), 1,
      sym_comment,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
    STATE(384), 1,
      sym_data_property_list,
    STATE(312), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [9617] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_data,
    ACTIONS(456), 1,
      anon_sym_enum,
    ACTIONS(460), 1,
      sym_identifier,
    STATE(232), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [9635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_identifier,
    ACTIONS(517), 1,
      anon_sym_RBRACE,
    STATE(352), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [9650] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(521), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(519), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [9663] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(525), 1,
      aux_sym__list_terminator_token1,
    STATE(251), 1,
      aux_sym_import_members_repeat1,
    STATE(334), 1,
      sym__list_terminator,
    ACTIONS(523), 2,
      anon_sym_RBRACE,
      aux_sym__statement_terminator_token1,
  [9680] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(529), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(527), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [9693] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(533), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(531), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [9706] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(537), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(535), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [9719] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(541), 1,
      aux_sym__list_terminator_token1,
    STATE(251), 1,
      aux_sym_import_members_repeat1,
    STATE(436), 1,
      sym__list_terminator,
    ACTIONS(539), 2,
      anon_sym_RBRACE,
      aux_sym__statement_terminator_token1,
  [9736] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(544), 1,
      aux_sym__list_terminator_token1,
    STATE(252), 1,
      aux_sym_import_members_repeat1,
    STATE(406), 1,
      sym__list_terminator,
    ACTIONS(539), 2,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [9753] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_identifier,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    STATE(352), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [9768] = 6,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_EQ,
    ACTIONS(551), 1,
      anon_sym_DOT,
    ACTIONS(553), 1,
      anon_sym_LBRACE,
    ACTIONS(555), 1,
      aux_sym__statement_terminator_token1,
    STATE(259), 1,
      aux_sym_import_module_repeat1,
  [9787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_identifier,
    ACTIONS(557), 1,
      anon_sym_RBRACE,
    STATE(352), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [9802] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(561), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(559), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [9815] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(565), 1,
      aux_sym__list_terminator_token1,
    STATE(247), 1,
      aux_sym_import_members_repeat1,
    STATE(342), 1,
      sym__list_terminator,
    ACTIONS(563), 2,
      anon_sym_RBRACE,
      aux_sym__statement_terminator_token1,
  [9832] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_RBRACK,
    ACTIONS(569), 1,
      aux_sym__list_terminator_token1,
    STATE(42), 1,
      sym__list_terminator,
    STATE(295), 1,
      aux_sym_array_literal_repeat1,
  [9848] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(571), 1,
      anon_sym_DOT,
    ACTIONS(573), 1,
      anon_sym_LBRACE,
    ACTIONS(575), 1,
      aux_sym__statement_terminator_token1,
    STATE(274), 1,
      aux_sym_import_module_repeat1,
  [9864] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RBRACE,
    ACTIONS(579), 1,
      sym_identifier,
    STATE(305), 1,
      sym_type_case,
    STATE(390), 1,
      sym__type_case_list,
  [9880] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_identifier,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    STATE(305), 1,
      sym_type_case,
    STATE(437), 1,
      sym__type_case_list,
  [9896] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(583), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(585), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [9910] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_RBRACK,
    ACTIONS(590), 1,
      aux_sym__list_terminator_token1,
    STATE(47), 1,
      sym__list_terminator,
    STATE(270), 1,
      aux_sym_array_literal_repeat1,
  [9926] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_DQUOTE,
    STATE(268), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(594), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [9940] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_EQ_GT,
    ACTIONS(596), 1,
      aux_sym__list_terminator_token1,
    STATE(252), 1,
      aux_sym_import_members_repeat1,
    STATE(369), 1,
      sym__list_terminator,
  [9956] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    ACTIONS(188), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    STATE(301), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [9972] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_DOT,
    ACTIONS(553), 1,
      anon_sym_LBRACE,
    ACTIONS(555), 1,
      aux_sym__statement_terminator_token1,
    STATE(259), 1,
      aux_sym_import_module_repeat1,
  [9988] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(602), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [10002] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(602), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [10016] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_RBRACK,
    ACTIONS(608), 1,
      aux_sym__list_terminator_token1,
    STATE(80), 1,
      sym__list_terminator,
    STATE(270), 1,
      aux_sym_array_literal_repeat1,
  [10032] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_identifier,
    STATE(352), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [10044] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_RBRACK,
    ACTIONS(613), 1,
      aux_sym__list_terminator_token1,
    STATE(33), 1,
      sym__list_terminator,
    STATE(302), 1,
      aux_sym_array_literal_repeat1,
  [10060] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
    ACTIONS(617), 1,
      aux_sym__list_terminator_token1,
    STATE(273), 1,
      aux_sym__type_case_list_repeat1,
    STATE(350), 1,
      sym__list_terminator,
  [10076] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_DOT,
    ACTIONS(623), 1,
      anon_sym_LBRACE,
    ACTIONS(625), 1,
      aux_sym__statement_terminator_token1,
    STATE(274), 1,
      aux_sym_import_module_repeat1,
  [10092] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(627), 1,
      anon_sym_DQUOTE,
    STATE(306), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(629), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [10106] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(631), 1,
      anon_sym_RBRACE,
    ACTIONS(633), 1,
      aux_sym__statement_terminator_token1,
    STATE(25), 1,
      sym__statement_terminator,
    STATE(300), 1,
      aux_sym__statement_list_repeat1,
  [10122] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    ACTIONS(635), 1,
      aux_sym__list_terminator_token1,
    STATE(244), 1,
      sym__list_terminator,
    STATE(277), 1,
      aux_sym_enum_case_list_repeat1,
  [10138] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_RBRACE,
    ACTIONS(640), 1,
      aux_sym__list_terminator_token1,
    STATE(236), 1,
      sym__list_terminator,
    STATE(277), 1,
      aux_sym_enum_case_list_repeat1,
  [10154] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    ACTIONS(644), 1,
      aux_sym__statement_terminator_token1,
    STATE(271), 1,
      sym__statement_terminator,
    STATE(279), 1,
      aux_sym_data_property_list_repeat1,
  [10170] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(647), 1,
      anon_sym_DQUOTE,
    STATE(269), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(649), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [10184] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
    ACTIONS(653), 1,
      aux_sym__statement_terminator_token1,
    STATE(255), 1,
      sym__statement_terminator,
    STATE(279), 1,
      aux_sym_data_property_list_repeat1,
  [10200] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_RBRACK,
    ACTIONS(657), 1,
      aux_sym__list_terminator_token1,
    STATE(52), 1,
      sym__list_terminator,
    STATE(270), 1,
      aux_sym_array_literal_repeat1,
  [10216] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_RBRACE,
    ACTIONS(661), 1,
      aux_sym__list_terminator_token1,
    STATE(296), 1,
      aux_sym_import_members_repeat1,
    STATE(367), 1,
      sym__list_terminator,
  [10232] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    ACTIONS(665), 1,
      aux_sym__list_terminator_token1,
    STATE(273), 1,
      aux_sym__type_case_list_repeat1,
    STATE(327), 1,
      sym__list_terminator,
  [10248] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_identifier,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    STATE(305), 1,
      sym_type_case,
    STATE(401), 1,
      sym__type_case_list,
  [10264] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_RBRACE,
    ACTIONS(458), 1,
      aux_sym__list_terminator_token1,
    STATE(235), 1,
      sym__list_terminator,
    STATE(277), 1,
      aux_sym_enum_case_list_repeat1,
  [10280] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_identifier,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
    STATE(305), 1,
      sym_type_case,
    STATE(416), 1,
      sym__type_case_list,
  [10296] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_EQ_GT,
    ACTIONS(671), 1,
      aux_sym__list_terminator_token1,
    STATE(265), 1,
      aux_sym_import_members_repeat1,
    STATE(357), 1,
      sym__list_terminator,
  [10312] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    ACTIONS(675), 1,
      aux_sym__statement_terminator_token1,
    STATE(253), 1,
      sym__statement_terminator,
    STATE(279), 1,
      aux_sym_data_property_list_repeat1,
  [10328] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_RBRACK,
    ACTIONS(679), 1,
      aux_sym__list_terminator_token1,
    STATE(34), 1,
      sym__list_terminator,
    STATE(282), 1,
      aux_sym_array_literal_repeat1,
  [10344] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(673), 1,
      anon_sym_RBRACE,
    ACTIONS(675), 1,
      aux_sym__statement_terminator_token1,
    STATE(253), 1,
      sym__statement_terminator,
    STATE(281), 1,
      aux_sym_data_property_list_repeat1,
  [10360] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(602), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [10374] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_DQUOTE,
    STATE(292), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(685), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [10388] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
    ACTIONS(689), 1,
      aux_sym__statement_terminator_token1,
    STATE(26), 1,
      sym__statement_terminator,
    STATE(294), 1,
      aux_sym__statement_list_repeat1,
  [10404] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(692), 1,
      anon_sym_RBRACK,
    ACTIONS(694), 1,
      aux_sym__list_terminator_token1,
    STATE(45), 1,
      sym__list_terminator,
    STATE(270), 1,
      aux_sym_array_literal_repeat1,
  [10420] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(696), 1,
      anon_sym_RBRACE,
    ACTIONS(698), 1,
      aux_sym__list_terminator_token1,
    STATE(252), 1,
      aux_sym_import_members_repeat1,
    STATE(359), 1,
      sym__list_terminator,
  [10436] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_RBRACK,
    ACTIONS(702), 1,
      aux_sym__list_terminator_token1,
    STATE(38), 1,
      sym__list_terminator,
    STATE(270), 1,
      aux_sym_array_literal_repeat1,
  [10452] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_LBRACE,
    ACTIONS(706), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(708), 1,
      sym_identifier,
    STATE(428), 1,
      sym_parameter_list,
  [10468] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_identifier,
    ACTIONS(710), 1,
      anon_sym_RBRACE,
    STATE(305), 1,
      sym_type_case,
    STATE(400), 1,
      sym__type_case_list,
  [10484] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(712), 1,
      anon_sym_RBRACE,
    ACTIONS(714), 1,
      aux_sym__statement_terminator_token1,
    STATE(24), 1,
      sym__statement_terminator,
    STATE(294), 1,
      aux_sym__statement_list_repeat1,
  [10500] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(716), 1,
      anon_sym_RBRACE,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      aux_sym__statement_terminator_token1,
    STATE(301), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [10516] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_RBRACK,
    ACTIONS(725), 1,
      aux_sym__list_terminator_token1,
    STATE(53), 1,
      sym__list_terminator,
    STATE(270), 1,
      aux_sym_array_literal_repeat1,
  [10532] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_RBRACK,
    ACTIONS(729), 1,
      aux_sym__list_terminator_token1,
    STATE(39), 1,
      sym__list_terminator,
    STATE(297), 1,
      aux_sym_array_literal_repeat1,
  [10548] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(602), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [10562] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_RBRACE,
    ACTIONS(735), 1,
      aux_sym__list_terminator_token1,
    STATE(284), 1,
      aux_sym__type_case_list_repeat1,
    STATE(323), 1,
      sym__list_terminator,
  [10578] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(602), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [10592] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_DQUOTE,
    STATE(304), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(741), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [10606] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_RBRACK,
    ACTIONS(745), 1,
      aux_sym__list_terminator_token1,
    STATE(43), 1,
      sym__list_terminator,
    STATE(270), 1,
      aux_sym_array_literal_repeat1,
  [10622] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_RBRACK,
    ACTIONS(749), 1,
      aux_sym__list_terminator_token1,
    STATE(40), 1,
      sym__list_terminator,
    STATE(263), 1,
      aux_sym_array_literal_repeat1,
  [10638] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_identifier,
    ACTIONS(751), 1,
      anon_sym_RBRACE,
    STATE(305), 1,
      sym_type_case,
    STATE(386), 1,
      sym__type_case_list,
  [10654] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_RBRACE,
    ACTIONS(755), 1,
      anon_sym_COMMA,
    ACTIONS(757), 1,
      aux_sym__statement_terminator_token1,
    STATE(266), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [10670] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_RBRACE,
    ACTIONS(761), 1,
      aux_sym__statement_terminator_token1,
    STATE(245), 1,
      sym__statement_terminator,
    STATE(289), 1,
      aux_sym_data_property_list_repeat1,
  [10686] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_RBRACK,
    ACTIONS(765), 1,
      aux_sym__list_terminator_token1,
    STATE(32), 1,
      sym__list_terminator,
    STATE(308), 1,
      aux_sym_array_literal_repeat1,
  [10702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_identifier,
    STATE(291), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [10714] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(708), 1,
      sym_identifier,
    ACTIONS(767), 1,
      anon_sym_RBRACE,
    ACTIONS(769), 1,
      aux_sym__statement_terminator_token1,
    STATE(362), 1,
      sym_parameter_list,
  [10730] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_DQUOTE,
    STATE(262), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(602), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [10744] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_DQUOTE,
    STATE(316), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(775), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [10758] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_LBRACE,
    ACTIONS(575), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(777), 1,
      sym_identifier,
  [10771] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(721), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(716), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [10782] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(779), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(539), 2,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [10793] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    ACTIONS(505), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(781), 1,
      anon_sym_LBRACE,
  [10806] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    ACTIONS(511), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(783), 1,
      anon_sym_LBRACE,
  [10819] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_identifier,
    ACTIONS(785), 1,
      anon_sym_RBRACE,
    STATE(347), 1,
      sym_type_case,
  [10832] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_LBRACE,
    ACTIONS(789), 1,
      aux_sym__statement_terminator_token1,
    STATE(418), 1,
      sym_import_members,
  [10845] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_EQ_GT,
    ACTIONS(793), 1,
      sym_identifier,
    STATE(422), 1,
      sym_parameter_list,
  [10858] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      sym_identifier,
    ACTIONS(795), 1,
      anon_sym_EQ_GT,
    STATE(427), 1,
      sym_parameter_list,
  [10871] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_identifier,
    ACTIONS(797), 1,
      anon_sym_RBRACE,
    STATE(347), 1,
      sym_type_case,
  [10884] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      sym_identifier,
    ACTIONS(799), 1,
      anon_sym_EQ_GT,
    STATE(431), 1,
      sym_parameter_list,
  [10897] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      sym_identifier,
    ACTIONS(801), 1,
      anon_sym_EQ_GT,
    STATE(435), 1,
      sym_parameter_list,
  [10910] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    ACTIONS(803), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [10923] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(777), 1,
      sym_identifier,
    ACTIONS(806), 1,
      anon_sym_LBRACE,
    ACTIONS(808), 1,
      aux_sym__statement_terminator_token1,
  [10936] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(625), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(623), 2,
      anon_sym_DOT,
      anon_sym_LBRACE,
  [10947] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(787), 1,
      anon_sym_LBRACE,
    ACTIONS(810), 1,
      aux_sym__statement_terminator_token1,
    STATE(396), 1,
      sym_import_members,
  [10960] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_RBRACE,
    ACTIONS(814), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(816), 1,
      sym_identifier,
  [10973] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      sym_identifier,
    ACTIONS(818), 1,
      anon_sym_EQ_GT,
    STATE(439), 1,
      sym_parameter_list,
  [10986] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(539), 3,
      anon_sym_RBRACE,
      aux_sym__statement_terminator_token1,
      aux_sym__list_terminator_token1,
  [10995] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(822), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(820), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [11006] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(822), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(820), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [11017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_RPAREN,
    ACTIONS(824), 1,
      anon_sym_COMMA,
    STATE(341), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [11030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      sym_identifier,
    ACTIONS(826), 1,
      anon_sym_EQ_GT,
    STATE(404), 1,
      sym_parameter_list,
  [11043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    ACTIONS(828), 1,
      anon_sym_COMMA,
    STATE(330), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [11056] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(523), 1,
      anon_sym_RBRACE,
    ACTIONS(816), 1,
      sym_identifier,
    ACTIONS(830), 1,
      aux_sym__statement_terminator_token1,
  [11069] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RBRACE,
    ACTIONS(834), 1,
      aux_sym__statement_terminator_token1,
  [11079] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(535), 1,
      anon_sym_RBRACE,
    ACTIONS(537), 1,
      aux_sym__statement_terminator_token1,
  [11089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym_identifier,
    STATE(324), 1,
      sym_import_module,
  [11099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11107] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_RBRACE,
    ACTIONS(838), 1,
      aux_sym__list_terminator_token1,
  [11117] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_RBRACE,
    ACTIONS(842), 1,
      aux_sym__list_terminator_token1,
  [11127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(579), 1,
      sym_identifier,
    STATE(347), 1,
      sym_type_case,
  [11145] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_RBRACE,
    ACTIONS(846), 1,
      aux_sym__statement_terminator_token1,
  [11155] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_RBRACE,
    ACTIONS(848), 1,
      aux_sym__statement_terminator_token1,
  [11165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_LBRACE,
    STATE(132), 1,
      sym_type_body,
  [11175] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(852), 1,
      aux_sym__statement_terminator_token1,
    STATE(8), 1,
      sym__statement_terminator,
  [11185] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(854), 1,
      aux_sym__statement_terminator_token1,
    STATE(153), 1,
      sym__statement_terminator,
  [11195] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(856), 1,
      aux_sym__statement_terminator_token1,
    STATE(3), 1,
      sym__statement_terminator,
  [11205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_EQ_GT,
    ACTIONS(858), 1,
      sym_identifier,
  [11215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_LBRACE,
    STATE(201), 1,
      sym_type_body,
  [11225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      sym_identifier,
    ACTIONS(862), 1,
      anon_sym_RBRACE,
  [11235] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
    ACTIONS(561), 1,
      aux_sym__statement_terminator_token1,
  [11245] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(527), 1,
      anon_sym_RBRACE,
    ACTIONS(529), 1,
      aux_sym__statement_terminator_token1,
  [11255] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_RBRACE,
    ACTIONS(866), 1,
      aux_sym__statement_terminator_token1,
  [11265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(868), 1,
      anon_sym_RBRACE,
    ACTIONS(870), 1,
      sym_identifier,
  [11275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_LBRACE,
    STATE(213), 1,
      sym_type_body,
  [11285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(343), 1,
      sym_function_literal,
  [11295] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_RBRACE,
    ACTIONS(874), 1,
      aux_sym__statement_terminator_token1,
  [11305] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      sym_identifier,
    ACTIONS(876), 1,
      anon_sym_RBRACE,
  [11315] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_RBRACK,
    ACTIONS(878), 1,
      aux_sym__list_terminator_token1,
  [11325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_EQ_GT,
    ACTIONS(858), 1,
      sym_identifier,
  [11335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      anon_sym_LBRACE,
    STATE(217), 1,
      sym_type_body,
  [11345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym_identifier,
    STATE(333), 1,
      sym_import_module,
  [11355] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_LBRACE,
    STATE(103), 1,
      sym_type_body,
  [11365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(886), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym_type_body,
  [11375] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(888), 1,
      anon_sym_RBRACE,
    ACTIONS(890), 1,
      aux_sym__statement_terminator_token1,
  [11385] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
    ACTIONS(521), 1,
      aux_sym__statement_terminator_token1,
  [11395] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(892), 1,
      anon_sym_RPAREN,
  [11402] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      anon_sym_RPAREN,
  [11409] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym_identifier,
  [11416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_RPAREN,
  [11423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      sym_identifier,
  [11430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      anon_sym_RBRACE,
  [11437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(904), 1,
      anon_sym_RBRACE,
  [11444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym_identifier,
  [11451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      anon_sym_RBRACE,
  [11458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      anon_sym_RBRACE,
  [11465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_RBRACE,
  [11472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RPAREN,
  [11479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      anon_sym_RBRACE,
  [11486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      anon_sym_COLON,
  [11493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_RBRACE,
  [11500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(922), 1,
      anon_sym_RBRACE,
  [11507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_RBRACE,
  [11514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      sym_identifier,
  [11521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_RBRACE,
  [11528] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(930), 1,
      aux_sym__statement_terminator_token1,
  [11535] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(932), 1,
      aux_sym__statement_terminator_token1,
  [11542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(934), 1,
      sym_identifier,
  [11549] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(936), 1,
      aux_sym__statement_terminator_token1,
  [11556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(938), 1,
      anon_sym_RBRACE,
  [11563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(940), 1,
      anon_sym_RBRACE,
  [11570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(942), 1,
      anon_sym_RBRACE,
  [11577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(944), 1,
      anon_sym_RBRACE,
  [11584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(946), 1,
      sym_identifier,
  [11591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(948), 1,
      anon_sym_EQ_GT,
  [11598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(950), 1,
      sym_identifier,
  [11605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      sym_identifier,
  [11612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(952), 1,
      anon_sym_RBRACE,
  [11619] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(954), 1,
      aux_sym__statement_terminator_token1,
  [11626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(956), 1,
      sym_identifier,
  [11633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(958), 1,
      anon_sym_RBRACE,
  [11640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(960), 1,
      anon_sym_RBRACE,
  [11647] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(962), 1,
      aux_sym__statement_terminator_token1,
  [11654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(964), 1,
      sym_identifier,
  [11661] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(966), 1,
      aux_sym__statement_terminator_token1,
  [11668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(968), 1,
      anon_sym_RBRACE,
  [11675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(970), 1,
      anon_sym_RBRACE,
  [11682] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(972), 1,
      aux_sym__statement_terminator_token1,
  [11689] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(974), 1,
      aux_sym__statement_terminator_token1,
  [11696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(976), 1,
      anon_sym_RBRACE,
  [11703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(978), 1,
      anon_sym_RPAREN,
  [11710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(980), 1,
      anon_sym_RPAREN,
  [11717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(982), 1,
      anon_sym_EQ_GT,
  [11724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(984), 1,
      sym_identifier,
  [11731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(986), 1,
      ts_builtin_sym_end,
  [11738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(988), 1,
      anon_sym_RBRACE,
  [11745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(990), 1,
      sym_identifier,
  [11752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(992), 1,
      anon_sym_EQ_GT,
  [11759] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(994), 1,
      aux_sym__statement_terminator_token1,
  [11766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(996), 1,
      sym_identifier,
  [11773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(998), 1,
      sym_identifier,
  [11780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1000), 1,
      anon_sym_EQ_GT,
  [11787] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(1002), 1,
      aux_sym__statement_terminator_token1,
  [11794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1004), 1,
      sym_identifier,
  [11801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1006), 1,
      sym_identifier,
  [11808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1008), 1,
      anon_sym_EQ_GT,
  [11815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1010), 1,
      sym_identifier,
  [11822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1012), 1,
      anon_sym_RBRACE,
  [11829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1014), 1,
      anon_sym_RBRACE,
  [11836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1016), 1,
      anon_sym_EQ_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 94,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 270,
  [SMALL_STATE(6)] = 358,
  [SMALL_STATE(7)] = 446,
  [SMALL_STATE(8)] = 534,
  [SMALL_STATE(9)] = 622,
  [SMALL_STATE(10)] = 710,
  [SMALL_STATE(11)] = 787,
  [SMALL_STATE(12)] = 863,
  [SMALL_STATE(13)] = 944,
  [SMALL_STATE(14)] = 1025,
  [SMALL_STATE(15)] = 1106,
  [SMALL_STATE(16)] = 1187,
  [SMALL_STATE(17)] = 1268,
  [SMALL_STATE(18)] = 1349,
  [SMALL_STATE(19)] = 1430,
  [SMALL_STATE(20)] = 1511,
  [SMALL_STATE(21)] = 1592,
  [SMALL_STATE(22)] = 1673,
  [SMALL_STATE(23)] = 1754,
  [SMALL_STATE(24)] = 1835,
  [SMALL_STATE(25)] = 1913,
  [SMALL_STATE(26)] = 1991,
  [SMALL_STATE(27)] = 2066,
  [SMALL_STATE(28)] = 2130,
  [SMALL_STATE(29)] = 2194,
  [SMALL_STATE(30)] = 2257,
  [SMALL_STATE(31)] = 2320,
  [SMALL_STATE(32)] = 2383,
  [SMALL_STATE(33)] = 2443,
  [SMALL_STATE(34)] = 2503,
  [SMALL_STATE(35)] = 2563,
  [SMALL_STATE(36)] = 2601,
  [SMALL_STATE(37)] = 2661,
  [SMALL_STATE(38)] = 2721,
  [SMALL_STATE(39)] = 2781,
  [SMALL_STATE(40)] = 2841,
  [SMALL_STATE(41)] = 2901,
  [SMALL_STATE(42)] = 2961,
  [SMALL_STATE(43)] = 3021,
  [SMALL_STATE(44)] = 3081,
  [SMALL_STATE(45)] = 3141,
  [SMALL_STATE(46)] = 3201,
  [SMALL_STATE(47)] = 3239,
  [SMALL_STATE(48)] = 3299,
  [SMALL_STATE(49)] = 3359,
  [SMALL_STATE(50)] = 3419,
  [SMALL_STATE(51)] = 3479,
  [SMALL_STATE(52)] = 3539,
  [SMALL_STATE(53)] = 3599,
  [SMALL_STATE(54)] = 3659,
  [SMALL_STATE(55)] = 3697,
  [SMALL_STATE(56)] = 3757,
  [SMALL_STATE(57)] = 3814,
  [SMALL_STATE(58)] = 3871,
  [SMALL_STATE(59)] = 3904,
  [SMALL_STATE(60)] = 3941,
  [SMALL_STATE(61)] = 3998,
  [SMALL_STATE(62)] = 4055,
  [SMALL_STATE(63)] = 4112,
  [SMALL_STATE(64)] = 4145,
  [SMALL_STATE(65)] = 4178,
  [SMALL_STATE(66)] = 4215,
  [SMALL_STATE(67)] = 4248,
  [SMALL_STATE(68)] = 4281,
  [SMALL_STATE(69)] = 4318,
  [SMALL_STATE(70)] = 4375,
  [SMALL_STATE(71)] = 4432,
  [SMALL_STATE(72)] = 4465,
  [SMALL_STATE(73)] = 4522,
  [SMALL_STATE(74)] = 4555,
  [SMALL_STATE(75)] = 4588,
  [SMALL_STATE(76)] = 4621,
  [SMALL_STATE(77)] = 4654,
  [SMALL_STATE(78)] = 4687,
  [SMALL_STATE(79)] = 4720,
  [SMALL_STATE(80)] = 4753,
  [SMALL_STATE(81)] = 4810,
  [SMALL_STATE(82)] = 4867,
  [SMALL_STATE(83)] = 4904,
  [SMALL_STATE(84)] = 4961,
  [SMALL_STATE(85)] = 4994,
  [SMALL_STATE(86)] = 5031,
  [SMALL_STATE(87)] = 5068,
  [SMALL_STATE(88)] = 5100,
  [SMALL_STATE(89)] = 5132,
  [SMALL_STATE(90)] = 5164,
  [SMALL_STATE(91)] = 5196,
  [SMALL_STATE(92)] = 5228,
  [SMALL_STATE(93)] = 5260,
  [SMALL_STATE(94)] = 5292,
  [SMALL_STATE(95)] = 5324,
  [SMALL_STATE(96)] = 5356,
  [SMALL_STATE(97)] = 5388,
  [SMALL_STATE(98)] = 5420,
  [SMALL_STATE(99)] = 5452,
  [SMALL_STATE(100)] = 5484,
  [SMALL_STATE(101)] = 5516,
  [SMALL_STATE(102)] = 5548,
  [SMALL_STATE(103)] = 5580,
  [SMALL_STATE(104)] = 5612,
  [SMALL_STATE(105)] = 5644,
  [SMALL_STATE(106)] = 5676,
  [SMALL_STATE(107)] = 5708,
  [SMALL_STATE(108)] = 5740,
  [SMALL_STATE(109)] = 5772,
  [SMALL_STATE(110)] = 5804,
  [SMALL_STATE(111)] = 5836,
  [SMALL_STATE(112)] = 5868,
  [SMALL_STATE(113)] = 5900,
  [SMALL_STATE(114)] = 5932,
  [SMALL_STATE(115)] = 5964,
  [SMALL_STATE(116)] = 5996,
  [SMALL_STATE(117)] = 6028,
  [SMALL_STATE(118)] = 6060,
  [SMALL_STATE(119)] = 6091,
  [SMALL_STATE(120)] = 6140,
  [SMALL_STATE(121)] = 6189,
  [SMALL_STATE(122)] = 6238,
  [SMALL_STATE(123)] = 6269,
  [SMALL_STATE(124)] = 6318,
  [SMALL_STATE(125)] = 6349,
  [SMALL_STATE(126)] = 6398,
  [SMALL_STATE(127)] = 6447,
  [SMALL_STATE(128)] = 6478,
  [SMALL_STATE(129)] = 6527,
  [SMALL_STATE(130)] = 6576,
  [SMALL_STATE(131)] = 6625,
  [SMALL_STATE(132)] = 6674,
  [SMALL_STATE(133)] = 6705,
  [SMALL_STATE(134)] = 6754,
  [SMALL_STATE(135)] = 6785,
  [SMALL_STATE(136)] = 6834,
  [SMALL_STATE(137)] = 6877,
  [SMALL_STATE(138)] = 6920,
  [SMALL_STATE(139)] = 6963,
  [SMALL_STATE(140)] = 7006,
  [SMALL_STATE(141)] = 7049,
  [SMALL_STATE(142)] = 7092,
  [SMALL_STATE(143)] = 7135,
  [SMALL_STATE(144)] = 7178,
  [SMALL_STATE(145)] = 7221,
  [SMALL_STATE(146)] = 7250,
  [SMALL_STATE(147)] = 7279,
  [SMALL_STATE(148)] = 7308,
  [SMALL_STATE(149)] = 7337,
  [SMALL_STATE(150)] = 7366,
  [SMALL_STATE(151)] = 7395,
  [SMALL_STATE(152)] = 7423,
  [SMALL_STATE(153)] = 7447,
  [SMALL_STATE(154)] = 7471,
  [SMALL_STATE(155)] = 7495,
  [SMALL_STATE(156)] = 7519,
  [SMALL_STATE(157)] = 7543,
  [SMALL_STATE(158)] = 7567,
  [SMALL_STATE(159)] = 7595,
  [SMALL_STATE(160)] = 7619,
  [SMALL_STATE(161)] = 7643,
  [SMALL_STATE(162)] = 7667,
  [SMALL_STATE(163)] = 7691,
  [SMALL_STATE(164)] = 7715,
  [SMALL_STATE(165)] = 7739,
  [SMALL_STATE(166)] = 7763,
  [SMALL_STATE(167)] = 7787,
  [SMALL_STATE(168)] = 7811,
  [SMALL_STATE(169)] = 7835,
  [SMALL_STATE(170)] = 7859,
  [SMALL_STATE(171)] = 7883,
  [SMALL_STATE(172)] = 7907,
  [SMALL_STATE(173)] = 7931,
  [SMALL_STATE(174)] = 7955,
  [SMALL_STATE(175)] = 7979,
  [SMALL_STATE(176)] = 8003,
  [SMALL_STATE(177)] = 8027,
  [SMALL_STATE(178)] = 8051,
  [SMALL_STATE(179)] = 8075,
  [SMALL_STATE(180)] = 8099,
  [SMALL_STATE(181)] = 8123,
  [SMALL_STATE(182)] = 8151,
  [SMALL_STATE(183)] = 8175,
  [SMALL_STATE(184)] = 8198,
  [SMALL_STATE(185)] = 8221,
  [SMALL_STATE(186)] = 8244,
  [SMALL_STATE(187)] = 8267,
  [SMALL_STATE(188)] = 8290,
  [SMALL_STATE(189)] = 8313,
  [SMALL_STATE(190)] = 8338,
  [SMALL_STATE(191)] = 8361,
  [SMALL_STATE(192)] = 8386,
  [SMALL_STATE(193)] = 8409,
  [SMALL_STATE(194)] = 8436,
  [SMALL_STATE(195)] = 8467,
  [SMALL_STATE(196)] = 8498,
  [SMALL_STATE(197)] = 8525,
  [SMALL_STATE(198)] = 8550,
  [SMALL_STATE(199)] = 8575,
  [SMALL_STATE(200)] = 8598,
  [SMALL_STATE(201)] = 8621,
  [SMALL_STATE(202)] = 8644,
  [SMALL_STATE(203)] = 8667,
  [SMALL_STATE(204)] = 8690,
  [SMALL_STATE(205)] = 8713,
  [SMALL_STATE(206)] = 8736,
  [SMALL_STATE(207)] = 8759,
  [SMALL_STATE(208)] = 8782,
  [SMALL_STATE(209)] = 8805,
  [SMALL_STATE(210)] = 8828,
  [SMALL_STATE(211)] = 8851,
  [SMALL_STATE(212)] = 8874,
  [SMALL_STATE(213)] = 8897,
  [SMALL_STATE(214)] = 8920,
  [SMALL_STATE(215)] = 8943,
  [SMALL_STATE(216)] = 8965,
  [SMALL_STATE(217)] = 8997,
  [SMALL_STATE(218)] = 9019,
  [SMALL_STATE(219)] = 9043,
  [SMALL_STATE(220)] = 9065,
  [SMALL_STATE(221)] = 9089,
  [SMALL_STATE(222)] = 9117,
  [SMALL_STATE(223)] = 9139,
  [SMALL_STATE(224)] = 9161,
  [SMALL_STATE(225)] = 9187,
  [SMALL_STATE(226)] = 9210,
  [SMALL_STATE(227)] = 9238,
  [SMALL_STATE(228)] = 9266,
  [SMALL_STATE(229)] = 9294,
  [SMALL_STATE(230)] = 9324,
  [SMALL_STATE(231)] = 9354,
  [SMALL_STATE(232)] = 9378,
  [SMALL_STATE(233)] = 9402,
  [SMALL_STATE(234)] = 9426,
  [SMALL_STATE(235)] = 9450,
  [SMALL_STATE(236)] = 9471,
  [SMALL_STATE(237)] = 9492,
  [SMALL_STATE(238)] = 9513,
  [SMALL_STATE(239)] = 9531,
  [SMALL_STATE(240)] = 9549,
  [SMALL_STATE(241)] = 9565,
  [SMALL_STATE(242)] = 9581,
  [SMALL_STATE(243)] = 9599,
  [SMALL_STATE(244)] = 9617,
  [SMALL_STATE(245)] = 9635,
  [SMALL_STATE(246)] = 9650,
  [SMALL_STATE(247)] = 9663,
  [SMALL_STATE(248)] = 9680,
  [SMALL_STATE(249)] = 9693,
  [SMALL_STATE(250)] = 9706,
  [SMALL_STATE(251)] = 9719,
  [SMALL_STATE(252)] = 9736,
  [SMALL_STATE(253)] = 9753,
  [SMALL_STATE(254)] = 9768,
  [SMALL_STATE(255)] = 9787,
  [SMALL_STATE(256)] = 9802,
  [SMALL_STATE(257)] = 9815,
  [SMALL_STATE(258)] = 9832,
  [SMALL_STATE(259)] = 9848,
  [SMALL_STATE(260)] = 9864,
  [SMALL_STATE(261)] = 9880,
  [SMALL_STATE(262)] = 9896,
  [SMALL_STATE(263)] = 9910,
  [SMALL_STATE(264)] = 9926,
  [SMALL_STATE(265)] = 9940,
  [SMALL_STATE(266)] = 9956,
  [SMALL_STATE(267)] = 9972,
  [SMALL_STATE(268)] = 9988,
  [SMALL_STATE(269)] = 10002,
  [SMALL_STATE(270)] = 10016,
  [SMALL_STATE(271)] = 10032,
  [SMALL_STATE(272)] = 10044,
  [SMALL_STATE(273)] = 10060,
  [SMALL_STATE(274)] = 10076,
  [SMALL_STATE(275)] = 10092,
  [SMALL_STATE(276)] = 10106,
  [SMALL_STATE(277)] = 10122,
  [SMALL_STATE(278)] = 10138,
  [SMALL_STATE(279)] = 10154,
  [SMALL_STATE(280)] = 10170,
  [SMALL_STATE(281)] = 10184,
  [SMALL_STATE(282)] = 10200,
  [SMALL_STATE(283)] = 10216,
  [SMALL_STATE(284)] = 10232,
  [SMALL_STATE(285)] = 10248,
  [SMALL_STATE(286)] = 10264,
  [SMALL_STATE(287)] = 10280,
  [SMALL_STATE(288)] = 10296,
  [SMALL_STATE(289)] = 10312,
  [SMALL_STATE(290)] = 10328,
  [SMALL_STATE(291)] = 10344,
  [SMALL_STATE(292)] = 10360,
  [SMALL_STATE(293)] = 10374,
  [SMALL_STATE(294)] = 10388,
  [SMALL_STATE(295)] = 10404,
  [SMALL_STATE(296)] = 10420,
  [SMALL_STATE(297)] = 10436,
  [SMALL_STATE(298)] = 10452,
  [SMALL_STATE(299)] = 10468,
  [SMALL_STATE(300)] = 10484,
  [SMALL_STATE(301)] = 10500,
  [SMALL_STATE(302)] = 10516,
  [SMALL_STATE(303)] = 10532,
  [SMALL_STATE(304)] = 10548,
  [SMALL_STATE(305)] = 10562,
  [SMALL_STATE(306)] = 10578,
  [SMALL_STATE(307)] = 10592,
  [SMALL_STATE(308)] = 10606,
  [SMALL_STATE(309)] = 10622,
  [SMALL_STATE(310)] = 10638,
  [SMALL_STATE(311)] = 10654,
  [SMALL_STATE(312)] = 10670,
  [SMALL_STATE(313)] = 10686,
  [SMALL_STATE(314)] = 10702,
  [SMALL_STATE(315)] = 10714,
  [SMALL_STATE(316)] = 10730,
  [SMALL_STATE(317)] = 10744,
  [SMALL_STATE(318)] = 10758,
  [SMALL_STATE(319)] = 10771,
  [SMALL_STATE(320)] = 10782,
  [SMALL_STATE(321)] = 10793,
  [SMALL_STATE(322)] = 10806,
  [SMALL_STATE(323)] = 10819,
  [SMALL_STATE(324)] = 10832,
  [SMALL_STATE(325)] = 10845,
  [SMALL_STATE(326)] = 10858,
  [SMALL_STATE(327)] = 10871,
  [SMALL_STATE(328)] = 10884,
  [SMALL_STATE(329)] = 10897,
  [SMALL_STATE(330)] = 10910,
  [SMALL_STATE(331)] = 10923,
  [SMALL_STATE(332)] = 10936,
  [SMALL_STATE(333)] = 10947,
  [SMALL_STATE(334)] = 10960,
  [SMALL_STATE(335)] = 10973,
  [SMALL_STATE(336)] = 10986,
  [SMALL_STATE(337)] = 10995,
  [SMALL_STATE(338)] = 11006,
  [SMALL_STATE(339)] = 11017,
  [SMALL_STATE(340)] = 11030,
  [SMALL_STATE(341)] = 11043,
  [SMALL_STATE(342)] = 11056,
  [SMALL_STATE(343)] = 11069,
  [SMALL_STATE(344)] = 11079,
  [SMALL_STATE(345)] = 11089,
  [SMALL_STATE(346)] = 11099,
  [SMALL_STATE(347)] = 11107,
  [SMALL_STATE(348)] = 11117,
  [SMALL_STATE(349)] = 11127,
  [SMALL_STATE(350)] = 11135,
  [SMALL_STATE(351)] = 11145,
  [SMALL_STATE(352)] = 11155,
  [SMALL_STATE(353)] = 11165,
  [SMALL_STATE(354)] = 11175,
  [SMALL_STATE(355)] = 11185,
  [SMALL_STATE(356)] = 11195,
  [SMALL_STATE(357)] = 11205,
  [SMALL_STATE(358)] = 11215,
  [SMALL_STATE(359)] = 11225,
  [SMALL_STATE(360)] = 11235,
  [SMALL_STATE(361)] = 11245,
  [SMALL_STATE(362)] = 11255,
  [SMALL_STATE(363)] = 11265,
  [SMALL_STATE(364)] = 11275,
  [SMALL_STATE(365)] = 11285,
  [SMALL_STATE(366)] = 11295,
  [SMALL_STATE(367)] = 11305,
  [SMALL_STATE(368)] = 11315,
  [SMALL_STATE(369)] = 11325,
  [SMALL_STATE(370)] = 11335,
  [SMALL_STATE(371)] = 11345,
  [SMALL_STATE(372)] = 11355,
  [SMALL_STATE(373)] = 11365,
  [SMALL_STATE(374)] = 11375,
  [SMALL_STATE(375)] = 11385,
  [SMALL_STATE(376)] = 11395,
  [SMALL_STATE(377)] = 11402,
  [SMALL_STATE(378)] = 11409,
  [SMALL_STATE(379)] = 11416,
  [SMALL_STATE(380)] = 11423,
  [SMALL_STATE(381)] = 11430,
  [SMALL_STATE(382)] = 11437,
  [SMALL_STATE(383)] = 11444,
  [SMALL_STATE(384)] = 11451,
  [SMALL_STATE(385)] = 11458,
  [SMALL_STATE(386)] = 11465,
  [SMALL_STATE(387)] = 11472,
  [SMALL_STATE(388)] = 11479,
  [SMALL_STATE(389)] = 11486,
  [SMALL_STATE(390)] = 11493,
  [SMALL_STATE(391)] = 11500,
  [SMALL_STATE(392)] = 11507,
  [SMALL_STATE(393)] = 11514,
  [SMALL_STATE(394)] = 11521,
  [SMALL_STATE(395)] = 11528,
  [SMALL_STATE(396)] = 11535,
  [SMALL_STATE(397)] = 11542,
  [SMALL_STATE(398)] = 11549,
  [SMALL_STATE(399)] = 11556,
  [SMALL_STATE(400)] = 11563,
  [SMALL_STATE(401)] = 11570,
  [SMALL_STATE(402)] = 11577,
  [SMALL_STATE(403)] = 11584,
  [SMALL_STATE(404)] = 11591,
  [SMALL_STATE(405)] = 11598,
  [SMALL_STATE(406)] = 11605,
  [SMALL_STATE(407)] = 11612,
  [SMALL_STATE(408)] = 11619,
  [SMALL_STATE(409)] = 11626,
  [SMALL_STATE(410)] = 11633,
  [SMALL_STATE(411)] = 11640,
  [SMALL_STATE(412)] = 11647,
  [SMALL_STATE(413)] = 11654,
  [SMALL_STATE(414)] = 11661,
  [SMALL_STATE(415)] = 11668,
  [SMALL_STATE(416)] = 11675,
  [SMALL_STATE(417)] = 11682,
  [SMALL_STATE(418)] = 11689,
  [SMALL_STATE(419)] = 11696,
  [SMALL_STATE(420)] = 11703,
  [SMALL_STATE(421)] = 11710,
  [SMALL_STATE(422)] = 11717,
  [SMALL_STATE(423)] = 11724,
  [SMALL_STATE(424)] = 11731,
  [SMALL_STATE(425)] = 11738,
  [SMALL_STATE(426)] = 11745,
  [SMALL_STATE(427)] = 11752,
  [SMALL_STATE(428)] = 11759,
  [SMALL_STATE(429)] = 11766,
  [SMALL_STATE(430)] = 11773,
  [SMALL_STATE(431)] = 11780,
  [SMALL_STATE(432)] = 11787,
  [SMALL_STATE(433)] = 11794,
  [SMALL_STATE(434)] = 11801,
  [SMALL_STATE(435)] = 11808,
  [SMALL_STATE(436)] = 11815,
  [SMALL_STATE(437)] = 11822,
  [SMALL_STATE(438)] = 11829,
  [SMALL_STATE(439)] = 11836,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(434),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(433),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(430),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(345),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(340),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(434),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(433),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(430),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(429),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(426),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(139),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(137),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(275),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__complex_expression, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand_expression, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__complex_expression, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand_expression, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex_invocation_expression, 4, .production_id = 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex_invocation_expression, 4, .production_id = 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex_invocation_expression, 3, .production_id = 3),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex_invocation_expression, 3, .production_id = 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_member_access_repeat1, 2), SHIFT_REPEAT(378),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_member_access_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_member_access_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_access, 2, .production_id = 4),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_access, 2, .production_id = 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_literal, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_literal, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 4, .production_id = 15),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 4, .production_id = 15),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 5, .production_id = 20),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 5, .production_id = 20),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 4, .production_id = 14),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 4, .production_id = 14),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_member_access_repeat1, 2), SHIFT_REPEAT(380),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_literal, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 1),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 5),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 5),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_literal, 3, .production_id = 10),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_literal, 3, .production_id = 10),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [314] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_member_access_repeat1, 2), SHIFT_REPEAT(413),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_member_access_repeat1, 2, .production_id = 12),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_member_access_repeat1, 2, .production_id = 12),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_body, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_body, 3),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expression, 3, .production_id = 9),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 3, .production_id = 9),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_body, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_body, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [363] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_member_access_repeat1, 2), SHIFT_REPEAT(409),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_member_access_repeat1, 2), SHIFT_REPEAT(423),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_member_access_repeat1, 2), SHIFT_REPEAT(393),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_case_list, 2),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(403),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_case_list, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__enum_case, 2),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__enum_case, 2), SHIFT_REPEAT(403),
  [471] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__enum_case, 2), SHIFT_REPEAT(405),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__enum_case, 2),
  [476] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__enum_case, 2), SHIFT_REPEAT(249),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_case_list_repeat1, 2),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_case_list_repeat1, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_case_list, 3),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_case_list, 4),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_case_list, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 2, .production_id = 1),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 2, .production_id = 1),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 2, .production_id = 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 2, .production_id = 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_list, 2),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 1),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 5, .production_id = 22),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 5, .production_id = 22),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__enum_case, 1, .production_id = 18),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__enum_case, 1, .production_id = 18),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 4, .production_id = 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 4, .production_id = 1),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_members_repeat1, 2),
  [541] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_members_repeat1, 2), SHIFT_REPEAT(436),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_members_repeat1, 2), SHIFT_REPEAT(406),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_list, 3),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_module, 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_module, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_list, 4),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 5, .production_id = 23),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 5, .production_id = 23),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 1),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_module, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_module, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(262),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(80),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__type_case_list_repeat1, 2),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_case_list_repeat1, 2), SHIFT_REPEAT(350),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_module_repeat1, 2), SHIFT_REPEAT(397),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_module_repeat1, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_module_repeat1, 2),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [635] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_case_list_repeat1, 2), SHIFT_REPEAT(244),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_case_list, 3),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_property_list_repeat1, 2),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_list_repeat1, 2), SHIFT_REPEAT(271),
  [647] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_list, 3),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_case_list, 2),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_list, 2),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(26),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 2, .production_id = 1),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2),
  [718] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2), SHIFT_REPEAT(83),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_case_list, 1),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex_invocation_expression, 2, .production_id = 3),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex_invocation_expression, 2, .production_id = 3),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_list, 1),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [767] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_value, 1, .production_id = 17),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_value, 1, .production_id = 17),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_members_repeat1, 2),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_case_list, 2),
  [787] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_case_list, 3),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [803] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2), SHIFT_REPEAT(60),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_module, 3),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_module, 3),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 4, .production_id = 13),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [816] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_invocation_expression, 2, .production_id = 3),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_invocation_expression, 2, .production_id = 3),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 7),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 7),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_case_list_repeat1, 2),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_case, 3, .production_id = 24),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_case, 3, .production_id = 24),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3, .production_id = 6),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3, .production_id = 6),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_list_repeat1, 2),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [864] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_function, 2, .production_id = 21),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_function, 2, .production_id = 21),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [888] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 16),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 16),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 4, .production_id = 1),
  [932] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 5, .production_id = 19),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 3),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 2),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 5, .production_id = 22),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 4),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [974] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 3, .production_id = 5),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [986] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 3, .production_id = 8),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 5),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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
