#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 338
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 102
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
  anon_sym_PLUS = 15,
  anon_sym_DASH = 16,
  anon_sym_STAR = 17,
  anon_sym_SLASH = 18,
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
  aux_sym__int_token1 = 40,
  aux_sym__float_token1 = 41,
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
  sym__non_number_argument = 71,
  sym_member_access = 72,
  sym_type_expression = 73,
  sym_type_body = 74,
  sym__type_case_list = 75,
  sym_type_case = 76,
  sym__literal = 77,
  sym__non_number_literal = 78,
  sym_string_literal = 79,
  sym_group_literal = 80,
  sym__number_literal = 81,
  sym_int_literal = 82,
  sym_float_literal = 83,
  sym_array_literal = 84,
  sym_function_literal = 85,
  sym_parameter_list = 86,
  sym__statement_terminator = 87,
  sym__list_terminator = 88,
  sym__int = 89,
  sym__float = 90,
  aux_sym_source_file_repeat1 = 91,
  aux_sym_import_module_repeat1 = 92,
  aux_sym_import_members_repeat1 = 93,
  aux_sym_data_property_list_repeat1 = 94,
  aux_sym_enum_case_list_repeat1 = 95,
  aux_sym__statement_list_repeat1 = 96,
  aux_sym_complex_invocation_expression_repeat1 = 97,
  aux_sym_member_access_repeat1 = 98,
  aux_sym__type_case_list_repeat1 = 99,
  aux_sym_string_literal_repeat1 = 100,
  aux_sym_array_literal_repeat1 = 101,
  alias_sym_enum_case_reference = 102,
  alias_sym_member_identifier = 103,
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
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
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
  [aux_sym__int_token1] = "_int_token1",
  [aux_sym__float_token1] = "_float_token1",
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
  [sym__non_number_argument] = "_non_number_argument",
  [sym_member_access] = "member_access",
  [sym_type_expression] = "type_expression",
  [sym_type_body] = "type_body",
  [sym__type_case_list] = "_type_case_list",
  [sym_type_case] = "type_case",
  [sym__literal] = "_literal",
  [sym__non_number_literal] = "_non_number_literal",
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
  [sym__int] = "_int",
  [sym__float] = "_float",
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
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
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
  [aux_sym__int_token1] = aux_sym__int_token1,
  [aux_sym__float_token1] = aux_sym__float_token1,
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
  [sym__non_number_argument] = sym__non_number_argument,
  [sym_member_access] = sym_member_access,
  [sym_type_expression] = sym_type_expression,
  [sym_type_body] = sym_type_body,
  [sym__type_case_list] = sym__type_case_list,
  [sym_type_case] = sym_type_case,
  [sym__literal] = sym__literal,
  [sym__non_number_literal] = sym__non_number_literal,
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
  [sym__int] = sym__int,
  [sym__float] = sym__float,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [aux_sym__int_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__float_token1] = {
    .visible = false,
    .named = false,
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
  [sym__non_number_argument] = {
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
  [sym__non_number_literal] = {
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
  [sym__int] = {
    .visible = false,
    .named = true,
  },
  [sym__float] = {
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
      if (eof) ADVANCE(37);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == ']') ADVANCE(81);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(116);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '[') ADVANCE(80);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(116);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '=') ADVANCE(41);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(116);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(116);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '/') ADVANCE(13);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(116);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(116);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(53);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '[') ADVANCE(80);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(116);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(53);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(25);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '[') ADVANCE(80);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(116);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '&') ADVANCE(65);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(126);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(21);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(116);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(13);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(116);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 22:
      if (lookahead == 'U') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 23:
      if (lookahead == '|') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
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
      if (eof) ADVANCE(37);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(8);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(116);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '!') ADVANCE(54);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(57);
      if (lookahead == '+') ADVANCE(55);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(56);
      if (lookahead == '.') ADVANCE(44);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '[') ADVANCE(80);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(116);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '|') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_module);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(116);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(116);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(116);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_func);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(116);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_data);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(116);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_extern);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(116);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_enum);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(116);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(126);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_type);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(116);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__statement_terminator_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__statement_terminator_token1);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == ';') ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__list_terminator_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__list_terminator_token1);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ',') ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(116);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'x') ADVANCE(109);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(116);
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(116);
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(116);
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(116);
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(116);
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(116);
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(116);
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(116);
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(116);
      if (lookahead == 'm') ADVANCE(51);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(116);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(116);
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(116);
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(116);
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(116);
      if (lookahead == 'o') ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(116);
      if (lookahead == 'p') ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(116);
      if (lookahead == 'p') ADVANCE(91);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(116);
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(116);
      if (lookahead == 'r') ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(116);
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(116);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(116);
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(116);
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(116);
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(116);
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(116);
      if (lookahead == 'u') ADVANCE(96);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_20(lookahead)) ADVANCE(116);
      if (lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(116);
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(116);
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__int_token1);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__int_token1);
      if (lookahead == '.') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__int_token1);
      if (lookahead == '.') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__int_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__int_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__float_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(126);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 36},
  [4] = {.lex_state = 36},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 7},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 4},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 4},
  [122] = {.lex_state = 4},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 4},
  [126] = {.lex_state = 4},
  [127] = {.lex_state = 4},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 4},
  [130] = {.lex_state = 36},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 36},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 4},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 36},
  [150] = {.lex_state = 36},
  [151] = {.lex_state = 36},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 36},
  [154] = {.lex_state = 36},
  [155] = {.lex_state = 36},
  [156] = {.lex_state = 36},
  [157] = {.lex_state = 36},
  [158] = {.lex_state = 36},
  [159] = {.lex_state = 36},
  [160] = {.lex_state = 5},
  [161] = {.lex_state = 5},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 17},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 17},
  [166] = {.lex_state = 17},
  [167] = {.lex_state = 17},
  [168] = {.lex_state = 17},
  [169] = {.lex_state = 16},
  [170] = {.lex_state = 16},
  [171] = {.lex_state = 17},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 17},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 16},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 16},
  [179] = {.lex_state = 16},
  [180] = {.lex_state = 3},
  [181] = {.lex_state = 4},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 16},
  [184] = {.lex_state = 5},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 5},
  [187] = {.lex_state = 5},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 16},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 16},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 4},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 6},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 3},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 4},
  [216] = {.lex_state = 4},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 6},
  [220] = {.lex_state = 4},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 16},
  [223] = {.lex_state = 16},
  [224] = {.lex_state = 6},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 16},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 6},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 4},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 3},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 3},
  [240] = {.lex_state = 2},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 16},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 3},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 16},
  [252] = {.lex_state = 16},
  [253] = {.lex_state = 16},
  [254] = {.lex_state = 3},
  [255] = {.lex_state = 16},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 16},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 16},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 16},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 16},
  [267] = {.lex_state = 16},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 4},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 16},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 16},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 1},
  [285] = {.lex_state = 16},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 1},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 16},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 36},
  [296] = {.lex_state = 16},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 1},
  [310] = {.lex_state = 16},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 16},
  [313] = {.lex_state = 16},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 16},
  [316] = {.lex_state = 16},
  [317] = {.lex_state = 1},
  [318] = {.lex_state = 1},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 1},
  [321] = {.lex_state = 16},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 16},
  [324] = {.lex_state = 1},
  [325] = {.lex_state = 16},
  [326] = {.lex_state = 1},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 16},
  [330] = {.lex_state = 1},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 1},
  [333] = {.lex_state = 36},
  [334] = {.lex_state = 16},
  [335] = {.lex_state = 16},
  [336] = {.lex_state = 16},
  [337] = {.lex_state = 36},
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
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
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
    [aux_sym__int_token1] = ACTIONS(1),
    [aux_sym__float_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(301),
    [sym_module_declaration] = STATE(274),
    [sym__top_level_declaration] = STATE(262),
    [sym_import_declaration] = STATE(262),
    [sym_let_declaration] = STATE(262),
    [sym_function_declaration] = STATE(262),
    [sym_data_declaration] = STATE(262),
    [sym_extern_declaration] = STATE(262),
    [sym_enum_declaration] = STATE(262),
    [sym__complex_expression] = STATE(262),
    [sym_complex_invocation_expression] = STATE(262),
    [sym__operand_expression] = STATE(157),
    [sym_unary_expression] = STATE(152),
    [sym_binary_expression] = STATE(152),
    [sym__argument] = STATE(15),
    [sym_member_access] = STATE(15),
    [sym_type_expression] = STATE(15),
    [sym__literal] = STATE(15),
    [sym__non_number_literal] = STATE(259),
    [sym_string_literal] = STATE(74),
    [sym_group_literal] = STATE(74),
    [sym__number_literal] = STATE(15),
    [sym_int_literal] = STATE(15),
    [sym_float_literal] = STATE(15),
    [sym_array_literal] = STATE(74),
    [sym_function_literal] = STATE(74),
    [sym__int] = STATE(82),
    [sym__float] = STATE(83),
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
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [anon_sym_DQUOTE] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym_identifier] = ACTIONS(37),
    [aux_sym__int_token1] = ACTIONS(39),
    [aux_sym__float_token1] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
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
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_source_file_repeat1,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    STATE(263), 1,
      sym_module_declaration,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(15), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(262), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [107] = 27,
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
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(15), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(262), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [208] = 27,
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
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(15), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(262), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [309] = 27,
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
    ACTIONS(78), 1,
      anon_sym_type,
    ACTIONS(81), 1,
      anon_sym_DQUOTE,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_LBRACK,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(93), 1,
      aux_sym__int_token1,
    ACTIONS(96), 1,
      aux_sym__float_token1,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(75), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(15), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(262), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [410] = 27,
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
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(15), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(262), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [511] = 27,
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
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(15), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(262), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [612] = 27,
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
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(15), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(262), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [713] = 27,
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
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(15), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(262), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [814] = 25,
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
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    STATE(331), 1,
      sym__statement_list,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(15), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(199), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [908] = 25,
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
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    STATE(322), 1,
      sym__statement_list,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(15), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(199), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1002] = 25,
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
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    STATE(304), 1,
      sym__statement_list,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(15), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(199), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1096] = 25,
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
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    STATE(297), 1,
      sym__statement_list,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(15), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(199), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1190] = 25,
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
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    STATE(311), 1,
      sym__statement_list,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(15), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(199), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1284] = 21,
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 1,
      anon_sym_BANG,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(127), 1,
      sym_comment,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    STATE(144), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(197), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(21), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(117), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1370] = 25,
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
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(129), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    STATE(327), 1,
      sym__statement_list,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(15), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(199), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1464] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(133), 1,
      anon_sym_BANG,
    ACTIONS(137), 1,
      anon_sym_type,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym__int_token1,
    ACTIONS(149), 1,
      aux_sym__float_token1,
    STATE(123), 1,
      sym__float,
    STATE(124), 1,
      sym__int,
    STATE(158), 1,
      sym__operand_expression,
    STATE(289), 1,
      sym__non_number_literal,
    STATE(151), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(249), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    ACTIONS(117), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(105), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(23), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(135), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1549] = 24,
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
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(15), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(284), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1640] = 24,
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
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(15), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(284), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1731] = 23,
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
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(15), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    STATE(284), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [1819] = 17,
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym__statement_terminator_token1,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(246), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(117), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1892] = 17,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(159), 1,
      anon_sym_LBRACE,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_LBRACK,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      aux_sym__int_token1,
    ACTIONS(173), 1,
      aux_sym__float_token1,
    STATE(126), 1,
      sym__float,
    STATE(129), 1,
      sym__int,
    STATE(281), 1,
      sym__non_number_literal,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    STATE(97), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(241), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(117), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [1965] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_type,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym__int_token1,
    ACTIONS(149), 1,
      aux_sym__float_token1,
    STATE(123), 1,
      sym__float,
    STATE(124), 1,
      sym__int,
    STATE(289), 1,
      sym__non_number_literal,
    ACTIONS(157), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(117), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    STATE(105), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(268), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(135), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [2037] = 21,
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_BANG,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_RBRACE,
    ACTIONS(179), 1,
      aux_sym__statement_terminator_token1,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(177), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(144), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(247), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(21), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [2113] = 21,
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_BANG,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      aux_sym__statement_terminator_token1,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(177), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(144), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(247), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(21), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [2189] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      aux_sym__int_token1,
    ACTIONS(173), 1,
      aux_sym__float_token1,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_BANG,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      sym__float,
    STATE(129), 1,
      sym__int,
    STATE(159), 1,
      sym__operand_expression,
    STATE(281), 1,
      sym__non_number_literal,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(143), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(288), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(97), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(22), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [2262] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_type,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym__int_token1,
    ACTIONS(149), 1,
      aux_sym__float_token1,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 1,
      anon_sym_BANG,
    STATE(123), 1,
      sym__float,
    STATE(124), 1,
      sym__int,
    STATE(158), 1,
      sym__operand_expression,
    STATE(289), 1,
      sym__non_number_literal,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(151), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(261), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(105), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(23), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [2335] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      aux_sym__int_token1,
    ACTIONS(173), 1,
      aux_sym__float_token1,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_BANG,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      sym__float,
    STATE(129), 1,
      sym__int,
    STATE(159), 1,
      sym__operand_expression,
    STATE(281), 1,
      sym__non_number_literal,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(143), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(221), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(97), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(22), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [2408] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      aux_sym__int_token1,
    ACTIONS(173), 1,
      aux_sym__float_token1,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_BANG,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(205), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      sym__float,
    STATE(129), 1,
      sym__int,
    STATE(159), 1,
      sym__operand_expression,
    STATE(281), 1,
      sym__non_number_literal,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(143), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(288), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(97), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(22), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [2481] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_type,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym__int_token1,
    ACTIONS(149), 1,
      aux_sym__float_token1,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(199), 1,
      anon_sym_BANG,
    STATE(123), 1,
      sym__float,
    STATE(124), 1,
      sym__int,
    STATE(158), 1,
      sym__operand_expression,
    STATE(289), 1,
      sym__non_number_literal,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(151), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(261), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(105), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(23), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [2554] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      aux_sym__int_token1,
    ACTIONS(173), 1,
      aux_sym__float_token1,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_BANG,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      sym__float,
    STATE(129), 1,
      sym__int,
    STATE(159), 1,
      sym__operand_expression,
    STATE(281), 1,
      sym__non_number_literal,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(143), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(288), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(97), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(22), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [2627] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      aux_sym__int_token1,
    ACTIONS(173), 1,
      aux_sym__float_token1,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_BANG,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      sym__float,
    STATE(129), 1,
      sym__int,
    STATE(159), 1,
      sym__operand_expression,
    STATE(281), 1,
      sym__non_number_literal,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(143), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(215), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(97), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(22), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [2700] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      aux_sym__int_token1,
    ACTIONS(173), 1,
      aux_sym__float_token1,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_BANG,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(211), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      sym__float,
    STATE(129), 1,
      sym__int,
    STATE(159), 1,
      sym__operand_expression,
    STATE(281), 1,
      sym__non_number_literal,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(143), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(288), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(97), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(22), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [2773] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    ACTIONS(213), 1,
      anon_sym_EQ,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(273), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(15), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [2846] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      aux_sym__int_token1,
    ACTIONS(173), 1,
      aux_sym__float_token1,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_BANG,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      sym__float,
    STATE(129), 1,
      sym__int,
    STATE(159), 1,
      sym__operand_expression,
    STATE(281), 1,
      sym__non_number_literal,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(143), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(288), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(97), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(22), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [2919] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      aux_sym__int_token1,
    ACTIONS(173), 1,
      aux_sym__float_token1,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_BANG,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(217), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      sym__float,
    STATE(129), 1,
      sym__int,
    STATE(159), 1,
      sym__operand_expression,
    STATE(281), 1,
      sym__non_number_literal,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(143), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(288), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(97), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(22), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [2992] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      aux_sym__int_token1,
    ACTIONS(173), 1,
      aux_sym__float_token1,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_BANG,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      sym__float,
    STATE(129), 1,
      sym__int,
    STATE(159), 1,
      sym__operand_expression,
    STATE(281), 1,
      sym__non_number_literal,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(143), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(214), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(97), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(22), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [3065] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_type,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym__int_token1,
    ACTIONS(149), 1,
      aux_sym__float_token1,
    ACTIONS(199), 1,
      anon_sym_BANG,
    STATE(123), 1,
      sym__float,
    STATE(124), 1,
      sym__int,
    STATE(158), 1,
      sym__operand_expression,
    STATE(289), 1,
      sym__non_number_literal,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(151), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(261), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(105), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(23), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [3135] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_type,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym__int_token1,
    ACTIONS(149), 1,
      aux_sym__float_token1,
    ACTIONS(199), 1,
      anon_sym_BANG,
    STATE(123), 1,
      sym__float,
    STATE(124), 1,
      sym__int,
    STATE(158), 1,
      sym__operand_expression,
    STATE(289), 1,
      sym__non_number_literal,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(294), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(105), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(17), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [3205] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_type,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym__int_token1,
    ACTIONS(149), 1,
      aux_sym__float_token1,
    ACTIONS(199), 1,
      anon_sym_BANG,
    STATE(123), 1,
      sym__float,
    STATE(124), 1,
      sym__int,
    STATE(158), 1,
      sym__operand_expression,
    STATE(289), 1,
      sym__non_number_literal,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(319), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(105), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(17), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [3275] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(152), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(283), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(15), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [3345] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(157), 1,
      sym__operand_expression,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(144), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(247), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(21), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [3415] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      aux_sym__int_token1,
    ACTIONS(173), 1,
      aux_sym__float_token1,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_BANG,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    STATE(126), 1,
      sym__float,
    STATE(129), 1,
      sym__int,
    STATE(159), 1,
      sym__operand_expression,
    STATE(281), 1,
      sym__non_number_literal,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(143), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(288), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(97), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(22), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [3485] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_type,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym__int_token1,
    ACTIONS(149), 1,
      aux_sym__float_token1,
    ACTIONS(199), 1,
      anon_sym_BANG,
    STATE(123), 1,
      sym__float,
    STATE(124), 1,
      sym__int,
    STATE(158), 1,
      sym__operand_expression,
    STATE(289), 1,
      sym__non_number_literal,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(156), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(314), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(105), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(17), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [3555] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      aux_sym__int_token1,
    ACTIONS(173), 1,
      aux_sym__float_token1,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_BANG,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    STATE(126), 1,
      sym__float,
    STATE(129), 1,
      sym__int,
    STATE(159), 1,
      sym__operand_expression,
    STATE(281), 1,
      sym__non_number_literal,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(143), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(270), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(97), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(22), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [3625] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(147), 10,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [3687] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      aux_sym__int_token1,
    ACTIONS(173), 1,
      aux_sym__float_token1,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_BANG,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    STATE(126), 1,
      sym__float,
    STATE(129), 1,
      sym__int,
    STATE(281), 1,
      sym__non_number_literal,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(97), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(145), 10,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [3749] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      aux_sym__int_token1,
    ACTIONS(173), 1,
      aux_sym__float_token1,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_BANG,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    STATE(126), 1,
      sym__float,
    STATE(129), 1,
      sym__int,
    STATE(281), 1,
      sym__non_number_literal,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(97), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(137), 10,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [3811] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      aux_sym__int_token1,
    ACTIONS(173), 1,
      aux_sym__float_token1,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_BANG,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    STATE(126), 1,
      sym__float,
    STATE(129), 1,
      sym__int,
    STATE(281), 1,
      sym__non_number_literal,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(97), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(142), 10,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [3873] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      aux_sym__int_token1,
    ACTIONS(173), 1,
      aux_sym__float_token1,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      anon_sym_BANG,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    STATE(126), 1,
      sym__float,
    STATE(129), 1,
      sym__int,
    STATE(281), 1,
      sym__non_number_literal,
    ACTIONS(189), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(97), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(140), 10,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [3935] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_type,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym__int_token1,
    ACTIONS(149), 1,
      aux_sym__float_token1,
    ACTIONS(199), 1,
      anon_sym_BANG,
    STATE(123), 1,
      sym__float,
    STATE(124), 1,
      sym__int,
    STATE(289), 1,
      sym__non_number_literal,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(105), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(154), 10,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [3997] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(141), 10,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [4059] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_type,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym__int_token1,
    ACTIONS(149), 1,
      aux_sym__float_token1,
    ACTIONS(199), 1,
      anon_sym_BANG,
    STATE(123), 1,
      sym__float,
    STATE(124), 1,
      sym__int,
    STATE(289), 1,
      sym__non_number_literal,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(105), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(153), 10,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [4121] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_type,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym__int_token1,
    ACTIONS(149), 1,
      aux_sym__float_token1,
    ACTIONS(199), 1,
      anon_sym_BANG,
    STATE(123), 1,
      sym__float,
    STATE(124), 1,
      sym__int,
    STATE(289), 1,
      sym__non_number_literal,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(105), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(150), 10,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [4183] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(138), 10,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [4245] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(27), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(139), 10,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [4307] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_type,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym__int_token1,
    ACTIONS(149), 1,
      aux_sym__float_token1,
    ACTIONS(199), 1,
      anon_sym_BANG,
    STATE(123), 1,
      sym__float,
    STATE(124), 1,
      sym__int,
    STATE(289), 1,
      sym__non_number_literal,
    ACTIONS(201), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(105), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(149), 10,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [4369] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_DOT,
    ACTIONS(226), 1,
      aux_sym__statement_terminator_token1,
    STATE(58), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(224), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [4407] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(232), 1,
      aux_sym__statement_terminator_token1,
    STATE(58), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(230), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [4445] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(236), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(234), 24,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [4478] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(240), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(238), 24,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [4511] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(242), 24,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [4544] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_DOT,
    STATE(64), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(230), 8,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(232), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [4581] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_DOT,
    STATE(64), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(224), 8,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(226), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [4618] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(251), 24,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [4651] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(255), 24,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [4684] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(259), 24,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [4717] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(263), 24,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [4750] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(267), 24,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [4783] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(271), 24,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [4816] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(277), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(275), 24,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [4849] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(281), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(279), 24,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [4882] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(285), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(283), 24,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [4915] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_DOT,
    ACTIONS(291), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(289), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [4950] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(232), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(293), 1,
      anon_sym_DOT,
    STATE(76), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(230), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [4987] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(226), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(295), 1,
      anon_sym_DOT,
    STATE(76), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(224), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [5024] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(300), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(298), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [5056] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      aux_sym__int_token1,
    ACTIONS(41), 1,
      aux_sym__float_token1,
    STATE(82), 1,
      sym__int,
    STATE(83), 1,
      sym__float,
    STATE(259), 1,
      sym__non_number_literal,
    ACTIONS(302), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(74), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(148), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [5112] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(306), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(304), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [5144] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_type,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym__int_token1,
    ACTIONS(149), 1,
      aux_sym__float_token1,
    STATE(123), 1,
      sym__float,
    STATE(124), 1,
      sym__int,
    STATE(289), 1,
      sym__non_number_literal,
    ACTIONS(308), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(105), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(257), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [5200] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(236), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(234), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [5232] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(310), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [5264] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(314), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [5296] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(261), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(259), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [5328] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_type,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym__int_token1,
    ACTIONS(149), 1,
      aux_sym__float_token1,
    STATE(123), 1,
      sym__float,
    STATE(124), 1,
      sym__int,
    STATE(289), 1,
      sym__non_number_literal,
    ACTIONS(308), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(105), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(290), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [5384] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(253), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(251), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [5416] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(263), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [5448] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(255), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [5480] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(240), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(238), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [5512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 9,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(265), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [5544] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(277), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(275), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [5576] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 9,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(253), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [5608] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(244), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(242), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [5640] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_type,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym__int_token1,
    ACTIONS(149), 1,
      aux_sym__float_token1,
    STATE(123), 1,
      sym__float,
    STATE(124), 1,
      sym__int,
    STATE(289), 1,
      sym__non_number_literal,
    ACTIONS(308), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(105), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(155), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [5696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 9,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(273), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [5728] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(320), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(318), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [5760] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_DOT,
    ACTIONS(291), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(289), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [5794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 9,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(244), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [5826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 9,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(269), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [5858] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 9,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(281), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [5890] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 9,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(285), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [5922] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_type,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(147), 1,
      aux_sym__int_token1,
    ACTIONS(149), 1,
      aux_sym__float_token1,
    STATE(123), 1,
      sym__float,
    STATE(124), 1,
      sym__int,
    STATE(289), 1,
      sym__non_number_literal,
    ACTIONS(308), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(105), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(275), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [5978] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(322), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [6010] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(326), 23,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [6042] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_DOT,
    ACTIONS(289), 8,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(291), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [6076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 9,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(277), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [6108] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 9,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(240), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [6140] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(273), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(271), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [6172] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(269), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(267), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [6204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 9,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(236), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [6236] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(281), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(279), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [6268] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 9,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(257), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [6300] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(285), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(283), 23,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [6332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 9,
      anon_sym_DOT,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(261), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [6364] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(171), 1,
      aux_sym__int_token1,
    ACTIONS(173), 1,
      aux_sym__float_token1,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    STATE(126), 1,
      sym__float,
    STATE(129), 1,
      sym__int,
    STATE(281), 1,
      sym__non_number_literal,
    ACTIONS(330), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(97), 4,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
    STATE(146), 7,
      sym__argument,
      sym_member_access,
      sym_type_expression,
      sym__literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
  [6420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 8,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(306), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [6451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 8,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(300), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [6482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 8,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(328), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [6513] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(320), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(318), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [6544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 8,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(320), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [6575] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(322), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [6606] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(328), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(326), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [6637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 8,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(316), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [6668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 8,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(312), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [6699] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(306), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(304), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [6730] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(316), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(314), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [6761] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(300), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(298), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [6792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 8,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
    ACTIONS(324), 15,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
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
  [6823] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(312), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(310), 22,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
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
      aux_sym__int_token1,
      aux_sym__float_token1,
  [6854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_BANG,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(332), 10,
      anon_sym_import,
      anon_sym_let,
      anon_sym_func,
      anon_sym_data,
      anon_sym_extern,
      anon_sym_enum,
      anon_sym_type,
      sym_identifier,
      aux_sym__int_token1,
      aux_sym__float_token1,
  [6880] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_DOT,
    ACTIONS(336), 1,
      aux_sym__statement_terminator_token1,
    STATE(59), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(334), 14,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [6909] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_DOT,
    ACTIONS(336), 1,
      aux_sym__list_terminator_token1,
    STATE(75), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(334), 14,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [6938] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_type,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(143), 1,
      anon_sym_LBRACK,
    ACTIONS(338), 1,
      sym_identifier,
    ACTIONS(340), 1,
      aux_sym__int_token1,
    ACTIONS(342), 1,
      aux_sym__float_token1,
    STATE(155), 3,
      sym__non_number_argument,
      sym_member_access,
      sym_type_expression,
    STATE(134), 5,
      sym__non_number_literal,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
  [6978] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_DOT,
    STATE(63), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(334), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(336), 11,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [7006] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_type,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 1,
      aux_sym__int_token1,
    ACTIONS(350), 1,
      aux_sym__float_token1,
    STATE(148), 3,
      sym__non_number_argument,
      sym_member_access,
      sym_type_expression,
    STATE(131), 5,
      sym__non_number_literal,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
  [7046] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_type,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(352), 1,
      sym_identifier,
    ACTIONS(354), 1,
      aux_sym__int_token1,
    ACTIONS(356), 1,
      aux_sym__float_token1,
    STATE(146), 3,
      sym__non_number_argument,
      sym_member_access,
      sym_type_expression,
    STATE(132), 5,
      sym__non_number_literal,
      sym_string_literal,
      sym_group_literal,
      sym_array_literal,
      sym_function_literal,
  [7086] = 7,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(358), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    ACTIONS(360), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(366), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(364), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [7117] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(370), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(358), 10,
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
  [7144] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(358), 12,
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
  [7169] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(358), 12,
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
  [7194] = 7,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(358), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(370), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(372), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(376), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(374), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [7225] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(360), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(362), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(358), 10,
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
  [7252] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
    ACTIONS(117), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7277] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(155), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(117), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7302] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(358), 14,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [7325] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(378), 14,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RBRACK,
  [7348] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(368), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(358), 14,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7371] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(380), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(378), 14,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7394] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_STAR,
    ACTIONS(386), 1,
      anon_sym_SLASH,
    ACTIONS(358), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(368), 8,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [7422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 11,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [7444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(117), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(135), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7468] = 4,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(117), 12,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7492] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_STAR,
    ACTIONS(386), 1,
      anon_sym_SLASH,
    ACTIONS(358), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(368), 10,
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
  [7518] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_STAR,
    ACTIONS(386), 1,
      anon_sym_SLASH,
    ACTIONS(368), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(380), 11,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_RPAREN,
  [7572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    ACTIONS(117), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(135), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7595] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_SLASH,
    ACTIONS(396), 1,
      anon_sym_STAR,
    ACTIONS(374), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 2,
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
  [7623] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_STAR,
    ACTIONS(386), 1,
      anon_sym_SLASH,
    ACTIONS(382), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(390), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(392), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(388), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7651] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_SLASH,
    ACTIONS(404), 1,
      anon_sym_STAR,
    ACTIONS(364), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(402), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(408), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(406), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7679] = 9,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    ACTIONS(412), 1,
      anon_sym_data,
    ACTIONS(414), 1,
      anon_sym_enum,
    ACTIONS(416), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(166), 1,
      sym__list_terminator,
    STATE(200), 1,
      aux_sym_enum_case_list_repeat1,
    STATE(162), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [7709] = 9,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_data,
    ACTIONS(414), 1,
      anon_sym_enum,
    ACTIONS(418), 1,
      sym_identifier,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    ACTIONS(422), 1,
      aux_sym__list_terminator_token1,
    STATE(168), 1,
      sym__list_terminator,
    STATE(195), 1,
      aux_sym_enum_case_list_repeat1,
    STATE(162), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [7739] = 7,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    ACTIONS(426), 1,
      anon_sym_data,
    ACTIONS(429), 1,
      anon_sym_enum,
    ACTIONS(432), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(162), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [7763] = 7,
    ACTIONS(412), 1,
      anon_sym_data,
    ACTIONS(414), 1,
      anon_sym_enum,
    ACTIONS(418), 1,
      sym_identifier,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    ACTIONS(439), 1,
      sym_comment,
    STATE(300), 1,
      sym_enum_case_list,
    STATE(160), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [7787] = 7,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_data,
    ACTIONS(414), 1,
      anon_sym_enum,
    ACTIONS(418), 1,
      sym_identifier,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    ACTIONS(443), 1,
      aux_sym__list_terminator_token1,
    STATE(162), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [7811] = 7,
    ACTIONS(412), 1,
      anon_sym_data,
    ACTIONS(414), 1,
      anon_sym_enum,
    ACTIONS(418), 1,
      sym_identifier,
    ACTIONS(439), 1,
      sym_comment,
    ACTIONS(445), 1,
      anon_sym_RBRACE,
    STATE(306), 1,
      sym_enum_case_list,
    STATE(160), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [7835] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_data,
    ACTIONS(414), 1,
      anon_sym_enum,
    ACTIONS(418), 1,
      sym_identifier,
    ACTIONS(447), 1,
      anon_sym_RBRACE,
    STATE(164), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [7856] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_data,
    ACTIONS(414), 1,
      anon_sym_enum,
    ACTIONS(418), 1,
      sym_identifier,
    ACTIONS(449), 1,
      anon_sym_RBRACE,
    STATE(164), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [7877] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_data,
    ACTIONS(414), 1,
      anon_sym_enum,
    ACTIONS(418), 1,
      sym_identifier,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    STATE(164), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [7898] = 5,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    ACTIONS(455), 1,
      sym_identifier,
    ACTIONS(457), 1,
      sym_comment,
    STATE(305), 1,
      sym_data_property_list,
    STATE(225), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [7916] = 5,
    ACTIONS(455), 1,
      sym_identifier,
    ACTIONS(457), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_RBRACE,
    STATE(308), 1,
      sym_data_property_list,
    STATE(225), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [7934] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_data,
    ACTIONS(414), 1,
      anon_sym_enum,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(161), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [7952] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    ACTIONS(465), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(463), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [7968] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_data,
    ACTIONS(414), 1,
      anon_sym_enum,
    ACTIONS(418), 1,
      sym_identifier,
    STATE(164), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [7986] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_LBRACE,
    ACTIONS(471), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(469), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8002] = 5,
    ACTIONS(455), 1,
      sym_identifier,
    ACTIONS(457), 1,
      sym_comment,
    ACTIONS(473), 1,
      anon_sym_RBRACE,
    STATE(302), 1,
      sym_data_property_list,
    STATE(225), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [8020] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(477), 1,
      aux_sym__list_terminator_token1,
    STATE(182), 1,
      aux_sym_import_members_repeat1,
    STATE(239), 1,
      sym__list_terminator,
    ACTIONS(475), 2,
      anon_sym_RBRACE,
      aux_sym__statement_terminator_token1,
  [8037] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(481), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(479), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8050] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_identifier,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    STATE(271), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [8065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_identifier,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
    STATE(271), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [8080] = 6,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_EQ,
    ACTIONS(489), 1,
      anon_sym_DOT,
    ACTIONS(491), 1,
      anon_sym_LBRACE,
    ACTIONS(493), 1,
      aux_sym__statement_terminator_token1,
    STATE(196), 1,
      aux_sym_import_module_repeat1,
  [8099] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(497), 1,
      aux_sym__list_terminator_token1,
    STATE(181), 1,
      aux_sym_import_members_repeat1,
    STATE(316), 1,
      sym__list_terminator,
    ACTIONS(495), 2,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [8116] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(500), 1,
      aux_sym__list_terminator_token1,
    STATE(182), 1,
      aux_sym_import_members_repeat1,
    STATE(335), 1,
      sym__list_terminator,
    ACTIONS(495), 2,
      anon_sym_RBRACE,
      aux_sym__statement_terminator_token1,
  [8133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_identifier,
    ACTIONS(503), 1,
      anon_sym_RBRACE,
    STATE(271), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [8148] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(507), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(505), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8161] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(511), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(509), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8174] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(515), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(513), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8187] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(519), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(517), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8200] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(523), 1,
      aux_sym__list_terminator_token1,
    STATE(176), 1,
      aux_sym_import_members_repeat1,
    STATE(248), 1,
      sym__list_terminator,
    ACTIONS(521), 2,
      anon_sym_RBRACE,
      aux_sym__statement_terminator_token1,
  [8217] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(525), 1,
      anon_sym_RBRACK,
    ACTIONS(527), 1,
      aux_sym__list_terminator_token1,
    STATE(33), 1,
      sym__list_terminator,
    STATE(216), 1,
      aux_sym_array_literal_repeat1,
  [8233] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    ACTIONS(531), 1,
      sym_identifier,
    STATE(220), 1,
      sym_type_case,
    STATE(328), 1,
      sym__type_case_list,
  [8249] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    ACTIONS(535), 1,
      aux_sym__statement_terminator_token1,
    STATE(191), 1,
      aux_sym_data_property_list_repeat1,
    STATE(193), 1,
      sym__statement_terminator,
  [8265] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    ACTIONS(538), 1,
      aux_sym__list_terminator_token1,
    STATE(173), 1,
      sym__list_terminator,
    STATE(192), 1,
      aux_sym_enum_case_list_repeat1,
  [8281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_identifier,
    STATE(271), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [8293] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(541), 1,
      anon_sym_RBRACE,
    ACTIONS(543), 1,
      aux_sym__statement_terminator_token1,
    STATE(183), 1,
      sym__statement_terminator,
    STATE(191), 1,
      aux_sym_data_property_list_repeat1,
  [8309] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_RBRACE,
    ACTIONS(547), 1,
      aux_sym__list_terminator_token1,
    STATE(167), 1,
      sym__list_terminator,
    STATE(192), 1,
      aux_sym_enum_case_list_repeat1,
  [8325] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(549), 1,
      anon_sym_DOT,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    ACTIONS(553), 1,
      aux_sym__statement_terminator_token1,
    STATE(231), 1,
      aux_sym_import_module_repeat1,
  [8341] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      aux_sym__statement_terminator_token1,
    STATE(233), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [8357] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    ACTIONS(563), 1,
      aux_sym__list_terminator_token1,
    STATE(205), 1,
      aux_sym__type_case_list_repeat1,
    STATE(243), 1,
      sym__list_terminator,
  [8373] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RBRACE,
    ACTIONS(567), 1,
      aux_sym__statement_terminator_token1,
    STATE(18), 1,
      sym__statement_terminator,
    STATE(229), 1,
      aux_sym__statement_list_repeat1,
  [8389] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    ACTIONS(422), 1,
      aux_sym__list_terminator_token1,
    STATE(168), 1,
      sym__list_terminator,
    STATE(192), 1,
      aux_sym_enum_case_list_repeat1,
  [8405] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    ACTIONS(571), 1,
      aux_sym__statement_terminator_token1,
    STATE(178), 1,
      sym__statement_terminator,
    STATE(191), 1,
      aux_sym_data_property_list_repeat1,
  [8421] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_RBRACE,
    ACTIONS(571), 1,
      aux_sym__statement_terminator_token1,
    STATE(178), 1,
      sym__statement_terminator,
    STATE(194), 1,
      aux_sym_data_property_list_repeat1,
  [8437] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(573), 1,
      anon_sym_DQUOTE,
    STATE(224), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(575), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8451] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RBRACE,
    ACTIONS(579), 1,
      aux_sym__statement_terminator_token1,
    STATE(20), 1,
      sym__statement_terminator,
    STATE(204), 1,
      aux_sym__statement_list_repeat1,
  [8467] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
    ACTIONS(584), 1,
      aux_sym__list_terminator_token1,
    STATE(205), 1,
      aux_sym__type_case_list_repeat1,
    STATE(266), 1,
      sym__list_terminator,
  [8483] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_LBRACE,
    ACTIONS(589), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(591), 1,
      sym_identifier,
    STATE(320), 1,
      sym_parameter_list,
  [8499] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_RBRACK,
    ACTIONS(595), 1,
      aux_sym__list_terminator_token1,
    STATE(31), 1,
      sym__list_terminator,
    STATE(216), 1,
      aux_sym_array_literal_repeat1,
  [8515] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_RBRACE,
    ACTIONS(599), 1,
      aux_sym__list_terminator_token1,
    STATE(181), 1,
      aux_sym_import_members_repeat1,
    STATE(272), 1,
      sym__list_terminator,
  [8531] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_EQ_GT,
    ACTIONS(601), 1,
      aux_sym__list_terminator_token1,
    STATE(181), 1,
      aux_sym_import_members_repeat1,
    STATE(282), 1,
      sym__list_terminator,
  [8547] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(521), 1,
      anon_sym_EQ_GT,
    ACTIONS(603), 1,
      aux_sym__list_terminator_token1,
    STATE(209), 1,
      aux_sym_import_members_repeat1,
    STATE(267), 1,
      sym__list_terminator,
  [8563] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_DQUOTE,
    STATE(219), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(607), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8577] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_RBRACK,
    ACTIONS(611), 1,
      aux_sym__list_terminator_token1,
    STATE(35), 1,
      sym__list_terminator,
    STATE(216), 1,
      aux_sym_array_literal_repeat1,
  [8593] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_RBRACE,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(618), 1,
      aux_sym__statement_terminator_token1,
    STATE(213), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [8609] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_RBRACK,
    ACTIONS(622), 1,
      aux_sym__list_terminator_token1,
    STATE(26), 1,
      sym__list_terminator,
    STATE(212), 1,
      aux_sym_array_literal_repeat1,
  [8625] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(624), 1,
      anon_sym_RBRACK,
    ACTIONS(626), 1,
      aux_sym__list_terminator_token1,
    STATE(29), 1,
      sym__list_terminator,
    STATE(207), 1,
      aux_sym_array_literal_repeat1,
  [8641] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_RBRACK,
    ACTIONS(630), 1,
      aux_sym__list_terminator_token1,
    STATE(43), 1,
      sym__list_terminator,
    STATE(216), 1,
      aux_sym_array_literal_repeat1,
  [8657] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(633), 1,
      anon_sym_DQUOTE,
    STATE(203), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(635), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8671] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_DQUOTE,
    STATE(224), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(575), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8685] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_DQUOTE,
    STATE(224), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(575), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8699] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
    ACTIONS(643), 1,
      aux_sym__list_terminator_token1,
    STATE(198), 1,
      aux_sym__type_case_list_repeat1,
    STATE(253), 1,
      sym__list_terminator,
  [8715] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_RBRACK,
    ACTIONS(647), 1,
      aux_sym__list_terminator_token1,
    STATE(36), 1,
      sym__list_terminator,
    STATE(189), 1,
      aux_sym_array_literal_repeat1,
  [8731] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(649), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      sym_type_case,
    STATE(307), 1,
      sym__type_case_list,
  [8747] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(651), 1,
      anon_sym_RBRACE,
    STATE(220), 1,
      sym_type_case,
    STATE(298), 1,
      sym__type_case_list,
  [8763] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(653), 1,
      anon_sym_DQUOTE,
    STATE(224), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(655), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8777] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_RBRACE,
    ACTIONS(660), 1,
      aux_sym__statement_terminator_token1,
    STATE(179), 1,
      sym__statement_terminator,
    STATE(201), 1,
      aux_sym_data_property_list_repeat1,
  [8793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      sym_identifier,
    STATE(202), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [8805] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(591), 1,
      sym_identifier,
    ACTIONS(662), 1,
      anon_sym_RBRACE,
    ACTIONS(664), 1,
      aux_sym__statement_terminator_token1,
    STATE(279), 1,
      sym_parameter_list,
  [8821] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_DQUOTE,
    STATE(218), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(668), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8835] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    ACTIONS(672), 1,
      aux_sym__statement_terminator_token1,
    STATE(19), 1,
      sym__statement_terminator,
    STATE(204), 1,
      aux_sym__statement_list_repeat1,
  [8851] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
    ACTIONS(676), 1,
      aux_sym__list_terminator_token1,
    STATE(208), 1,
      aux_sym_import_members_repeat1,
    STATE(285), 1,
      sym__list_terminator,
  [8867] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(678), 1,
      anon_sym_DOT,
    ACTIONS(681), 1,
      anon_sym_LBRACE,
    ACTIONS(683), 1,
      aux_sym__statement_terminator_token1,
    STATE(231), 1,
      aux_sym_import_module_repeat1,
  [8883] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(489), 1,
      anon_sym_DOT,
    ACTIONS(491), 1,
      anon_sym_LBRACE,
    ACTIONS(493), 1,
      aux_sym__statement_terminator_token1,
    STATE(196), 1,
      aux_sym_import_module_repeat1,
  [8899] = 5,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [8915] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
    ACTIONS(471), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(687), 1,
      anon_sym_LBRACE,
  [8928] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_LBRACE,
    ACTIONS(691), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(693), 1,
      sym_identifier,
  [8941] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_RPAREN,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [8954] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(683), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(681), 2,
      anon_sym_DOT,
      anon_sym_LBRACE,
  [8965] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_LBRACE,
    ACTIONS(700), 1,
      aux_sym__statement_terminator_token1,
    STATE(292), 1,
      sym_import_members,
  [8978] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_RBRACE,
    ACTIONS(704), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(706), 1,
      sym_identifier,
  [8991] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(495), 3,
      anon_sym_RBRACE,
      aux_sym__statement_terminator_token1,
      aux_sym__list_terminator_token1,
  [9000] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(710), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(708), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [9011] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(712), 1,
      aux_sym__list_terminator_token1,
    ACTIONS(495), 2,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
  [9022] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(714), 1,
      anon_sym_RBRACE,
    STATE(269), 1,
      sym_type_case,
  [9035] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(716), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [9048] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(698), 1,
      anon_sym_LBRACE,
    ACTIONS(718), 1,
      aux_sym__statement_terminator_token1,
    STATE(332), 1,
      sym_import_members,
  [9061] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(710), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(708), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [9072] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(618), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(613), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [9083] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_RBRACE,
    ACTIONS(706), 1,
      sym_identifier,
    ACTIONS(720), 1,
      aux_sym__statement_terminator_token1,
  [9096] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    ACTIONS(722), 1,
      anon_sym_COMMA,
    STATE(244), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [9109] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
    ACTIONS(465), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(724), 1,
      anon_sym_LBRACE,
  [9122] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_EQ_GT,
    ACTIONS(728), 1,
      sym_identifier,
    STATE(333), 1,
      sym_parameter_list,
  [9135] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_identifier,
    ACTIONS(730), 1,
      anon_sym_EQ_GT,
    STATE(295), 1,
      sym_parameter_list,
  [9148] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    STATE(269), 1,
      sym_type_case,
  [9161] = 4,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    ACTIONS(553), 1,
      aux_sym__statement_terminator_token1,
    ACTIONS(693), 1,
      sym_identifier,
  [9174] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(728), 1,
      sym_identifier,
    ACTIONS(734), 1,
      anon_sym_EQ_GT,
    STATE(337), 1,
      sym_parameter_list,
  [9187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(277), 1,
      sym_function_literal,
  [9197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym_type_body,
  [9207] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      sym_identifier,
    STATE(245), 1,
      sym_import_module,
  [9217] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_DOT,
    STATE(59), 1,
      aux_sym_member_access_repeat1,
  [9227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      sym_identifier,
    STATE(238), 1,
      sym_import_module,
  [9237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(618), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9245] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(744), 1,
      aux_sym__statement_terminator_token1,
    STATE(130), 1,
      sym__statement_terminator,
  [9255] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(746), 1,
      aux_sym__statement_terminator_token1,
    STATE(8), 1,
      sym__statement_terminator,
  [9265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_RBRACE,
    ACTIONS(750), 1,
      sym_identifier,
  [9275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      aux_sym__int_token1,
    ACTIONS(350), 1,
      aux_sym__float_token1,
  [9285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(531), 1,
      sym_identifier,
    STATE(269), 1,
      sym_type_case,
  [9295] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(720), 1,
      anon_sym_EQ_GT,
    ACTIONS(752), 1,
      sym_identifier,
  [9305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9313] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
    ACTIONS(754), 1,
      aux_sym__list_terminator_token1,
  [9323] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RBRACE,
    ACTIONS(758), 1,
      aux_sym__list_terminator_token1,
  [9333] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    ACTIONS(760), 1,
      aux_sym__statement_terminator_token1,
  [9343] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      sym_identifier,
    ACTIONS(762), 1,
      anon_sym_RBRACE,
  [9353] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
    ACTIONS(766), 1,
      aux_sym__statement_terminator_token1,
  [9363] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(768), 1,
      aux_sym__statement_terminator_token1,
    STATE(3), 1,
      sym__statement_terminator,
  [9373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_type_body,
  [9383] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(517), 1,
      anon_sym_RBRACE,
    ACTIONS(519), 1,
      aux_sym__statement_terminator_token1,
  [9393] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
    ACTIONS(774), 1,
      aux_sym__statement_terminator_token1,
  [9403] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(513), 1,
      anon_sym_RBRACE,
    ACTIONS(515), 1,
      aux_sym__statement_terminator_token1,
  [9413] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_RBRACE,
    ACTIONS(778), 1,
      aux_sym__statement_terminator_token1,
  [9423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      aux_sym__int_token1,
    ACTIONS(356), 1,
      aux_sym__float_token1,
  [9433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_member_access_repeat1,
  [9443] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_EQ_GT,
    ACTIONS(752), 1,
      sym_identifier,
  [9453] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_RBRACE,
    ACTIONS(784), 1,
      aux_sym__statement_terminator_token1,
  [9463] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_RBRACE,
    ACTIONS(786), 1,
      aux_sym__statement_terminator_token1,
  [9473] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      sym_identifier,
    ACTIONS(788), 1,
      anon_sym_RBRACE,
  [9483] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_RBRACE,
    ACTIONS(507), 1,
      aux_sym__statement_terminator_token1,
  [9493] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(509), 1,
      anon_sym_RBRACE,
    ACTIONS(511), 1,
      aux_sym__statement_terminator_token1,
  [9503] = 3,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_RBRACK,
    ACTIONS(790), 1,
      aux_sym__list_terminator_token1,
  [9513] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_DOT,
    STATE(63), 1,
      aux_sym_member_access_repeat1,
  [9523] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_type_body,
  [9533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      aux_sym__int_token1,
    ACTIONS(342), 1,
      aux_sym__float_token1,
  [9543] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(794), 1,
      aux_sym__statement_terminator_token1,
  [9550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      sym_identifier,
  [9557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_RPAREN,
  [9564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_EQ_GT,
  [9571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      sym_identifier,
  [9578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_RBRACE,
  [9585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_RBRACE,
  [9592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_COLON,
  [9599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_RBRACE,
  [9606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      ts_builtin_sym_end,
  [9613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
  [9620] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(816), 1,
      aux_sym__statement_terminator_token1,
  [9627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_RBRACE,
  [9634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_RBRACE,
  [9641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_RBRACE,
  [9648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_RBRACE,
  [9655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      anon_sym_RBRACE,
  [9662] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(828), 1,
      aux_sym__statement_terminator_token1,
  [9669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      sym_identifier,
  [9676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RBRACE,
  [9683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      sym_identifier,
  [9690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      sym_identifier,
  [9697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
  [9704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      sym_identifier,
  [9711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      sym_identifier,
  [9718] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(842), 1,
      aux_sym__statement_terminator_token1,
  [9725] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(844), 1,
      aux_sym__statement_terminator_token1,
  [9732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
  [9739] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(848), 1,
      aux_sym__statement_terminator_token1,
  [9746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym_identifier,
  [9753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      anon_sym_RBRACE,
  [9760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      sym_identifier,
  [9767] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(856), 1,
      aux_sym__statement_terminator_token1,
  [9774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      sym_identifier,
  [9781] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(860), 1,
      aux_sym__statement_terminator_token1,
  [9788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_RBRACE,
  [9795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_RBRACE,
  [9802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym_identifier,
  [9809] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(868), 1,
      aux_sym__statement_terminator_token1,
  [9816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(870), 1,
      anon_sym_RBRACE,
  [9823] = 2,
    ACTIONS(127), 1,
      sym_comment,
    ACTIONS(872), 1,
      aux_sym__statement_terminator_token1,
  [9830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_EQ_GT,
  [9837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      sym_identifier,
  [9844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      sym_identifier,
  [9851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(880), 1,
      sym_identifier,
  [9858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      anon_sym_EQ_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 107,
  [SMALL_STATE(4)] = 208,
  [SMALL_STATE(5)] = 309,
  [SMALL_STATE(6)] = 410,
  [SMALL_STATE(7)] = 511,
  [SMALL_STATE(8)] = 612,
  [SMALL_STATE(9)] = 713,
  [SMALL_STATE(10)] = 814,
  [SMALL_STATE(11)] = 908,
  [SMALL_STATE(12)] = 1002,
  [SMALL_STATE(13)] = 1096,
  [SMALL_STATE(14)] = 1190,
  [SMALL_STATE(15)] = 1284,
  [SMALL_STATE(16)] = 1370,
  [SMALL_STATE(17)] = 1464,
  [SMALL_STATE(18)] = 1549,
  [SMALL_STATE(19)] = 1640,
  [SMALL_STATE(20)] = 1731,
  [SMALL_STATE(21)] = 1819,
  [SMALL_STATE(22)] = 1892,
  [SMALL_STATE(23)] = 1965,
  [SMALL_STATE(24)] = 2037,
  [SMALL_STATE(25)] = 2113,
  [SMALL_STATE(26)] = 2189,
  [SMALL_STATE(27)] = 2262,
  [SMALL_STATE(28)] = 2335,
  [SMALL_STATE(29)] = 2408,
  [SMALL_STATE(30)] = 2481,
  [SMALL_STATE(31)] = 2554,
  [SMALL_STATE(32)] = 2627,
  [SMALL_STATE(33)] = 2700,
  [SMALL_STATE(34)] = 2773,
  [SMALL_STATE(35)] = 2846,
  [SMALL_STATE(36)] = 2919,
  [SMALL_STATE(37)] = 2992,
  [SMALL_STATE(38)] = 3065,
  [SMALL_STATE(39)] = 3135,
  [SMALL_STATE(40)] = 3205,
  [SMALL_STATE(41)] = 3275,
  [SMALL_STATE(42)] = 3345,
  [SMALL_STATE(43)] = 3415,
  [SMALL_STATE(44)] = 3485,
  [SMALL_STATE(45)] = 3555,
  [SMALL_STATE(46)] = 3625,
  [SMALL_STATE(47)] = 3687,
  [SMALL_STATE(48)] = 3749,
  [SMALL_STATE(49)] = 3811,
  [SMALL_STATE(50)] = 3873,
  [SMALL_STATE(51)] = 3935,
  [SMALL_STATE(52)] = 3997,
  [SMALL_STATE(53)] = 4059,
  [SMALL_STATE(54)] = 4121,
  [SMALL_STATE(55)] = 4183,
  [SMALL_STATE(56)] = 4245,
  [SMALL_STATE(57)] = 4307,
  [SMALL_STATE(58)] = 4369,
  [SMALL_STATE(59)] = 4407,
  [SMALL_STATE(60)] = 4445,
  [SMALL_STATE(61)] = 4478,
  [SMALL_STATE(62)] = 4511,
  [SMALL_STATE(63)] = 4544,
  [SMALL_STATE(64)] = 4581,
  [SMALL_STATE(65)] = 4618,
  [SMALL_STATE(66)] = 4651,
  [SMALL_STATE(67)] = 4684,
  [SMALL_STATE(68)] = 4717,
  [SMALL_STATE(69)] = 4750,
  [SMALL_STATE(70)] = 4783,
  [SMALL_STATE(71)] = 4816,
  [SMALL_STATE(72)] = 4849,
  [SMALL_STATE(73)] = 4882,
  [SMALL_STATE(74)] = 4915,
  [SMALL_STATE(75)] = 4950,
  [SMALL_STATE(76)] = 4987,
  [SMALL_STATE(77)] = 5024,
  [SMALL_STATE(78)] = 5056,
  [SMALL_STATE(79)] = 5112,
  [SMALL_STATE(80)] = 5144,
  [SMALL_STATE(81)] = 5200,
  [SMALL_STATE(82)] = 5232,
  [SMALL_STATE(83)] = 5264,
  [SMALL_STATE(84)] = 5296,
  [SMALL_STATE(85)] = 5328,
  [SMALL_STATE(86)] = 5384,
  [SMALL_STATE(87)] = 5416,
  [SMALL_STATE(88)] = 5448,
  [SMALL_STATE(89)] = 5480,
  [SMALL_STATE(90)] = 5512,
  [SMALL_STATE(91)] = 5544,
  [SMALL_STATE(92)] = 5576,
  [SMALL_STATE(93)] = 5608,
  [SMALL_STATE(94)] = 5640,
  [SMALL_STATE(95)] = 5696,
  [SMALL_STATE(96)] = 5728,
  [SMALL_STATE(97)] = 5760,
  [SMALL_STATE(98)] = 5794,
  [SMALL_STATE(99)] = 5826,
  [SMALL_STATE(100)] = 5858,
  [SMALL_STATE(101)] = 5890,
  [SMALL_STATE(102)] = 5922,
  [SMALL_STATE(103)] = 5978,
  [SMALL_STATE(104)] = 6010,
  [SMALL_STATE(105)] = 6042,
  [SMALL_STATE(106)] = 6076,
  [SMALL_STATE(107)] = 6108,
  [SMALL_STATE(108)] = 6140,
  [SMALL_STATE(109)] = 6172,
  [SMALL_STATE(110)] = 6204,
  [SMALL_STATE(111)] = 6236,
  [SMALL_STATE(112)] = 6268,
  [SMALL_STATE(113)] = 6300,
  [SMALL_STATE(114)] = 6332,
  [SMALL_STATE(115)] = 6364,
  [SMALL_STATE(116)] = 6420,
  [SMALL_STATE(117)] = 6451,
  [SMALL_STATE(118)] = 6482,
  [SMALL_STATE(119)] = 6513,
  [SMALL_STATE(120)] = 6544,
  [SMALL_STATE(121)] = 6575,
  [SMALL_STATE(122)] = 6606,
  [SMALL_STATE(123)] = 6637,
  [SMALL_STATE(124)] = 6668,
  [SMALL_STATE(125)] = 6699,
  [SMALL_STATE(126)] = 6730,
  [SMALL_STATE(127)] = 6761,
  [SMALL_STATE(128)] = 6792,
  [SMALL_STATE(129)] = 6823,
  [SMALL_STATE(130)] = 6854,
  [SMALL_STATE(131)] = 6880,
  [SMALL_STATE(132)] = 6909,
  [SMALL_STATE(133)] = 6938,
  [SMALL_STATE(134)] = 6978,
  [SMALL_STATE(135)] = 7006,
  [SMALL_STATE(136)] = 7046,
  [SMALL_STATE(137)] = 7086,
  [SMALL_STATE(138)] = 7117,
  [SMALL_STATE(139)] = 7144,
  [SMALL_STATE(140)] = 7169,
  [SMALL_STATE(141)] = 7194,
  [SMALL_STATE(142)] = 7225,
  [SMALL_STATE(143)] = 7252,
  [SMALL_STATE(144)] = 7277,
  [SMALL_STATE(145)] = 7302,
  [SMALL_STATE(146)] = 7325,
  [SMALL_STATE(147)] = 7348,
  [SMALL_STATE(148)] = 7371,
  [SMALL_STATE(149)] = 7394,
  [SMALL_STATE(150)] = 7422,
  [SMALL_STATE(151)] = 7444,
  [SMALL_STATE(152)] = 7468,
  [SMALL_STATE(153)] = 7492,
  [SMALL_STATE(154)] = 7518,
  [SMALL_STATE(155)] = 7550,
  [SMALL_STATE(156)] = 7572,
  [SMALL_STATE(157)] = 7595,
  [SMALL_STATE(158)] = 7623,
  [SMALL_STATE(159)] = 7651,
  [SMALL_STATE(160)] = 7679,
  [SMALL_STATE(161)] = 7709,
  [SMALL_STATE(162)] = 7739,
  [SMALL_STATE(163)] = 7763,
  [SMALL_STATE(164)] = 7787,
  [SMALL_STATE(165)] = 7811,
  [SMALL_STATE(166)] = 7835,
  [SMALL_STATE(167)] = 7856,
  [SMALL_STATE(168)] = 7877,
  [SMALL_STATE(169)] = 7898,
  [SMALL_STATE(170)] = 7916,
  [SMALL_STATE(171)] = 7934,
  [SMALL_STATE(172)] = 7952,
  [SMALL_STATE(173)] = 7968,
  [SMALL_STATE(174)] = 7986,
  [SMALL_STATE(175)] = 8002,
  [SMALL_STATE(176)] = 8020,
  [SMALL_STATE(177)] = 8037,
  [SMALL_STATE(178)] = 8050,
  [SMALL_STATE(179)] = 8065,
  [SMALL_STATE(180)] = 8080,
  [SMALL_STATE(181)] = 8099,
  [SMALL_STATE(182)] = 8116,
  [SMALL_STATE(183)] = 8133,
  [SMALL_STATE(184)] = 8148,
  [SMALL_STATE(185)] = 8161,
  [SMALL_STATE(186)] = 8174,
  [SMALL_STATE(187)] = 8187,
  [SMALL_STATE(188)] = 8200,
  [SMALL_STATE(189)] = 8217,
  [SMALL_STATE(190)] = 8233,
  [SMALL_STATE(191)] = 8249,
  [SMALL_STATE(192)] = 8265,
  [SMALL_STATE(193)] = 8281,
  [SMALL_STATE(194)] = 8293,
  [SMALL_STATE(195)] = 8309,
  [SMALL_STATE(196)] = 8325,
  [SMALL_STATE(197)] = 8341,
  [SMALL_STATE(198)] = 8357,
  [SMALL_STATE(199)] = 8373,
  [SMALL_STATE(200)] = 8389,
  [SMALL_STATE(201)] = 8405,
  [SMALL_STATE(202)] = 8421,
  [SMALL_STATE(203)] = 8437,
  [SMALL_STATE(204)] = 8451,
  [SMALL_STATE(205)] = 8467,
  [SMALL_STATE(206)] = 8483,
  [SMALL_STATE(207)] = 8499,
  [SMALL_STATE(208)] = 8515,
  [SMALL_STATE(209)] = 8531,
  [SMALL_STATE(210)] = 8547,
  [SMALL_STATE(211)] = 8563,
  [SMALL_STATE(212)] = 8577,
  [SMALL_STATE(213)] = 8593,
  [SMALL_STATE(214)] = 8609,
  [SMALL_STATE(215)] = 8625,
  [SMALL_STATE(216)] = 8641,
  [SMALL_STATE(217)] = 8657,
  [SMALL_STATE(218)] = 8671,
  [SMALL_STATE(219)] = 8685,
  [SMALL_STATE(220)] = 8699,
  [SMALL_STATE(221)] = 8715,
  [SMALL_STATE(222)] = 8731,
  [SMALL_STATE(223)] = 8747,
  [SMALL_STATE(224)] = 8763,
  [SMALL_STATE(225)] = 8777,
  [SMALL_STATE(226)] = 8793,
  [SMALL_STATE(227)] = 8805,
  [SMALL_STATE(228)] = 8821,
  [SMALL_STATE(229)] = 8835,
  [SMALL_STATE(230)] = 8851,
  [SMALL_STATE(231)] = 8867,
  [SMALL_STATE(232)] = 8883,
  [SMALL_STATE(233)] = 8899,
  [SMALL_STATE(234)] = 8915,
  [SMALL_STATE(235)] = 8928,
  [SMALL_STATE(236)] = 8941,
  [SMALL_STATE(237)] = 8954,
  [SMALL_STATE(238)] = 8965,
  [SMALL_STATE(239)] = 8978,
  [SMALL_STATE(240)] = 8991,
  [SMALL_STATE(241)] = 9000,
  [SMALL_STATE(242)] = 9011,
  [SMALL_STATE(243)] = 9022,
  [SMALL_STATE(244)] = 9035,
  [SMALL_STATE(245)] = 9048,
  [SMALL_STATE(246)] = 9061,
  [SMALL_STATE(247)] = 9072,
  [SMALL_STATE(248)] = 9083,
  [SMALL_STATE(249)] = 9096,
  [SMALL_STATE(250)] = 9109,
  [SMALL_STATE(251)] = 9122,
  [SMALL_STATE(252)] = 9135,
  [SMALL_STATE(253)] = 9148,
  [SMALL_STATE(254)] = 9161,
  [SMALL_STATE(255)] = 9174,
  [SMALL_STATE(256)] = 9187,
  [SMALL_STATE(257)] = 9197,
  [SMALL_STATE(258)] = 9207,
  [SMALL_STATE(259)] = 9217,
  [SMALL_STATE(260)] = 9227,
  [SMALL_STATE(261)] = 9237,
  [SMALL_STATE(262)] = 9245,
  [SMALL_STATE(263)] = 9255,
  [SMALL_STATE(264)] = 9265,
  [SMALL_STATE(265)] = 9275,
  [SMALL_STATE(266)] = 9285,
  [SMALL_STATE(267)] = 9295,
  [SMALL_STATE(268)] = 9305,
  [SMALL_STATE(269)] = 9313,
  [SMALL_STATE(270)] = 9323,
  [SMALL_STATE(271)] = 9333,
  [SMALL_STATE(272)] = 9343,
  [SMALL_STATE(273)] = 9353,
  [SMALL_STATE(274)] = 9363,
  [SMALL_STATE(275)] = 9373,
  [SMALL_STATE(276)] = 9383,
  [SMALL_STATE(277)] = 9393,
  [SMALL_STATE(278)] = 9403,
  [SMALL_STATE(279)] = 9413,
  [SMALL_STATE(280)] = 9423,
  [SMALL_STATE(281)] = 9433,
  [SMALL_STATE(282)] = 9443,
  [SMALL_STATE(283)] = 9453,
  [SMALL_STATE(284)] = 9463,
  [SMALL_STATE(285)] = 9473,
  [SMALL_STATE(286)] = 9483,
  [SMALL_STATE(287)] = 9493,
  [SMALL_STATE(288)] = 9503,
  [SMALL_STATE(289)] = 9513,
  [SMALL_STATE(290)] = 9523,
  [SMALL_STATE(291)] = 9533,
  [SMALL_STATE(292)] = 9543,
  [SMALL_STATE(293)] = 9550,
  [SMALL_STATE(294)] = 9557,
  [SMALL_STATE(295)] = 9564,
  [SMALL_STATE(296)] = 9571,
  [SMALL_STATE(297)] = 9578,
  [SMALL_STATE(298)] = 9585,
  [SMALL_STATE(299)] = 9592,
  [SMALL_STATE(300)] = 9599,
  [SMALL_STATE(301)] = 9606,
  [SMALL_STATE(302)] = 9613,
  [SMALL_STATE(303)] = 9620,
  [SMALL_STATE(304)] = 9627,
  [SMALL_STATE(305)] = 9634,
  [SMALL_STATE(306)] = 9641,
  [SMALL_STATE(307)] = 9648,
  [SMALL_STATE(308)] = 9655,
  [SMALL_STATE(309)] = 9662,
  [SMALL_STATE(310)] = 9669,
  [SMALL_STATE(311)] = 9676,
  [SMALL_STATE(312)] = 9683,
  [SMALL_STATE(313)] = 9690,
  [SMALL_STATE(314)] = 9697,
  [SMALL_STATE(315)] = 9704,
  [SMALL_STATE(316)] = 9711,
  [SMALL_STATE(317)] = 9718,
  [SMALL_STATE(318)] = 9725,
  [SMALL_STATE(319)] = 9732,
  [SMALL_STATE(320)] = 9739,
  [SMALL_STATE(321)] = 9746,
  [SMALL_STATE(322)] = 9753,
  [SMALL_STATE(323)] = 9760,
  [SMALL_STATE(324)] = 9767,
  [SMALL_STATE(325)] = 9774,
  [SMALL_STATE(326)] = 9781,
  [SMALL_STATE(327)] = 9788,
  [SMALL_STATE(328)] = 9795,
  [SMALL_STATE(329)] = 9802,
  [SMALL_STATE(330)] = 9809,
  [SMALL_STATE(331)] = 9816,
  [SMALL_STATE(332)] = 9823,
  [SMALL_STATE(333)] = 9830,
  [SMALL_STATE(334)] = 9837,
  [SMALL_STATE(335)] = 9844,
  [SMALL_STATE(336)] = 9851,
  [SMALL_STATE(337)] = 9858,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(258),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(252),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(329),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(325),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(323),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(315),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(312),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(102),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(217),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__complex_expression, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand_expression, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__complex_expression, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand_expression, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex_invocation_expression, 4, .production_id = 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex_invocation_expression, 4, .production_id = 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex_invocation_expression, 3, .production_id = 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex_invocation_expression, 3, .production_id = 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_member_access_repeat1, 2), SHIFT_REPEAT(334),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_member_access_repeat1, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_member_access_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_access, 2, .production_id = 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_access, 2, .production_id = 4),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_member_access_repeat1, 2, .production_id = 12),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_member_access_repeat1, 2, .production_id = 12),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 4),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 5),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_member_access_repeat1, 2), SHIFT_REPEAT(296),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 4, .production_id = 15),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 4, .production_id = 15),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 4, .production_id = 14),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 4, .production_id = 14),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 5, .production_id = 20),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 5, .production_id = 20),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_literal, 3, .production_id = 10),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_literal, 3, .production_id = 10),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__non_number_literal, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [295] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_member_access_repeat1, 2), SHIFT_REPEAT(321),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expression, 3, .production_id = 9),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 3, .production_id = 9),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_body, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_body, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_literal, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_literal, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_literal, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__float, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__float, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_body, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_body, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__int, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__int, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__non_number_argument, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__non_number_argument, 1),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_case_list, 1),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_case_list, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__enum_case, 2),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__enum_case, 2), SHIFT_REPEAT(313),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__enum_case, 2), SHIFT_REPEAT(310),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__enum_case, 2),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__enum_case, 2), SHIFT_REPEAT(177),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_case_list_repeat1, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_case_list_repeat1, 2),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_case_list, 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_case_list, 4),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_case_list, 3),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 2, .production_id = 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 2, .production_id = 1),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 2, .production_id = 1),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 2, .production_id = 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__enum_case, 1, .production_id = 18),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__enum_case, 1, .production_id = 18),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_list, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_list, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_module, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_module, 1),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_members_repeat1, 2),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_members_repeat1, 2), SHIFT_REPEAT(316),
  [500] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_members_repeat1, 2), SHIFT_REPEAT(335),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_list, 4),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 4, .production_id = 1),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 4, .production_id = 1),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 1),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 5, .production_id = 22),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 5, .production_id = 22),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 5, .production_id = 23),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 5, .production_id = 23),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 1),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_property_list_repeat1, 2),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_list_repeat1, 2), SHIFT_REPEAT(193),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_case_list_repeat1, 2), SHIFT_REPEAT(173),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_list, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_case_list, 3),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_module, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_module, 2),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex_invocation_expression, 2, .production_id = 3),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex_invocation_expression, 2, .production_id = 3),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_case_list, 2),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_list, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(20),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__type_case_list_repeat1, 2),
  [584] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_case_list_repeat1, 2), SHIFT_REPEAT(266),
  [587] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 2, .production_id = 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2),
  [615] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2), SHIFT_REPEAT(42),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [624] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(43),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type_case_list, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(224),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_list, 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_value, 1, .production_id = 17),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_value, 1, .production_id = 17),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [674] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [678] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_module_repeat1, 2), SHIFT_REPEAT(293),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_module_repeat1, 2),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_module_repeat1, 2),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_module, 3),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_module, 3),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2), SHIFT_REPEAT(38),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 4, .production_id = 13),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [708] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_invocation_expression, 2, .production_id = 3),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_invocation_expression, 2, .production_id = 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_members_repeat1, 2),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_case_list, 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_case_list, 2),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_case_list_repeat1, 2),
  [756] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_case, 3, .production_id = 24),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_case, 3, .production_id = 24),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_list_repeat1, 2),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3, .production_id = 6),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3, .production_id = 6),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 7),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 7),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_function, 2, .production_id = 21),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_function, 2, .production_id = 21),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 16),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 16),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 5, .production_id = 19),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [812] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 4, .production_id = 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 3),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 2),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 3, .production_id = 8),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 5, .production_id = 22),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 4),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 5),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 3, .production_id = 5),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
