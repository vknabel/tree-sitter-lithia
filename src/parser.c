#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 387
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 2
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 26

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
  sym__statement_terminator = 37,
  sym__implicit_list_terminator = 38,
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
  sym_dict_literal = 83,
  sym_dict_entry = 84,
  sym_function_literal = 85,
  sym_parameter_list = 86,
  sym__explicit_list_terminator = 87,
  aux_sym_source_file_repeat1 = 88,
  aux_sym_import_module_repeat1 = 89,
  aux_sym_import_members_repeat1 = 90,
  aux_sym_data_property_list_repeat1 = 91,
  aux_sym_enum_case_list_repeat1 = 92,
  aux_sym__statement_list_repeat1 = 93,
  aux_sym_complex_invocation_expression_repeat1 = 94,
  aux_sym_member_access_repeat1 = 95,
  aux_sym__type_case_list_repeat1 = 96,
  aux_sym_string_literal_repeat1 = 97,
  aux_sym_array_literal_repeat1 = 98,
  aux_sym_dict_literal_repeat1 = 99,
  aux_sym_parameter_list_repeat1 = 100,
  alias_sym_enum_case_reference = 101,
  alias_sym_member_identifier = 102,
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
  [sym__statement_terminator] = "_statement_terminator",
  [sym__implicit_list_terminator] = "_implicit_list_terminator",
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
  [sym_dict_literal] = "dict_literal",
  [sym_dict_entry] = "dict_entry",
  [sym_function_literal] = "function_literal",
  [sym_parameter_list] = "parameter_list",
  [sym__explicit_list_terminator] = "_explicit_list_terminator",
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
  [aux_sym_dict_literal_repeat1] = "dict_literal_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
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
  [sym__statement_terminator] = sym__statement_terminator,
  [sym__implicit_list_terminator] = sym__implicit_list_terminator,
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
  [sym_dict_literal] = sym_dict_literal,
  [sym_dict_entry] = sym_dict_entry,
  [sym_function_literal] = sym_function_literal,
  [sym_parameter_list] = sym_parameter_list,
  [sym__explicit_list_terminator] = sym__explicit_list_terminator,
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
  [aux_sym_dict_literal_repeat1] = aux_sym_dict_literal_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
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
  [sym__statement_terminator] = {
    .visible = false,
    .named = true,
  },
  [sym__implicit_list_terminator] = {
    .visible = false,
    .named = true,
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
  [sym_dict_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_dict_entry] = {
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
  [sym__explicit_list_terminator] = {
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
  [aux_sym_dict_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
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
  field_key = 6,
  field_label = 7,
  field_members = 8,
  field_name = 9,
  field_object = 10,
  field_operator = 11,
  field_parameters = 12,
  field_properties = 13,
  field_type = 14,
  field_value = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_body] = "body",
  [field_cases] = "cases",
  [field_expression] = "expression",
  [field_function] = "function",
  [field_key] = "key",
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
  [19] = {.index = 25, .length = 2},
  [20] = {.index = 27, .length = 4},
  [21] = {.index = 31, .length = 2},
  [22] = {.index = 33, .length = 2},
  [23] = {.index = 35, .length = 2},
  [24] = {.index = 37, .length = 2},
  [25] = {.index = 39, .length = 2},
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
    {field_key, 0},
    {field_value, 2},
  [27] =
    {field_alias, 1},
    {field_alias, 2},
    {field_members, 4},
    {field_name, 3},
  [31] =
    {field_body, 3},
    {field_parameters, 1},
  [33] =
    {field_name, 0},
    {field_parameters, 1},
  [35] =
    {field_name, 1},
    {field_properties, 3},
  [37] =
    {field_cases, 3},
    {field_name, 1},
  [39] =
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 13,
  [14] = 13,
  [15] = 12,
  [16] = 12,
  [17] = 13,
  [18] = 12,
  [19] = 13,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 20,
  [25] = 25,
  [26] = 25,
  [27] = 25,
  [28] = 25,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 31,
  [33] = 30,
  [34] = 34,
  [35] = 30,
  [36] = 36,
  [37] = 37,
  [38] = 31,
  [39] = 39,
  [40] = 30,
  [41] = 31,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 29,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 44,
  [53] = 53,
  [54] = 54,
  [55] = 46,
  [56] = 36,
  [57] = 46,
  [58] = 58,
  [59] = 59,
  [60] = 44,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 44,
  [67] = 46,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 37,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 39,
  [76] = 76,
  [77] = 74,
  [78] = 34,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 74,
  [83] = 74,
  [84] = 84,
  [85] = 79,
  [86] = 86,
  [87] = 62,
  [88] = 50,
  [89] = 58,
  [90] = 64,
  [91] = 47,
  [92] = 63,
  [93] = 69,
  [94] = 53,
  [95] = 49,
  [96] = 42,
  [97] = 61,
  [98] = 70,
  [99] = 65,
  [100] = 68,
  [101] = 54,
  [102] = 59,
  [103] = 51,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 81,
  [109] = 73,
  [110] = 76,
  [111] = 107,
  [112] = 106,
  [113] = 104,
  [114] = 105,
  [115] = 115,
  [116] = 115,
  [117] = 115,
  [118] = 118,
  [119] = 118,
  [120] = 115,
  [121] = 34,
  [122] = 37,
  [123] = 39,
  [124] = 42,
  [125] = 54,
  [126] = 58,
  [127] = 49,
  [128] = 59,
  [129] = 53,
  [130] = 50,
  [131] = 70,
  [132] = 69,
  [133] = 68,
  [134] = 65,
  [135] = 64,
  [136] = 63,
  [137] = 62,
  [138] = 61,
  [139] = 47,
  [140] = 51,
  [141] = 39,
  [142] = 76,
  [143] = 34,
  [144] = 73,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 81,
  [150] = 150,
  [151] = 151,
  [152] = 37,
  [153] = 153,
  [154] = 54,
  [155] = 42,
  [156] = 61,
  [157] = 62,
  [158] = 63,
  [159] = 64,
  [160] = 59,
  [161] = 53,
  [162] = 51,
  [163] = 47,
  [164] = 49,
  [165] = 65,
  [166] = 58,
  [167] = 68,
  [168] = 69,
  [169] = 70,
  [170] = 50,
  [171] = 146,
  [172] = 145,
  [173] = 76,
  [174] = 81,
  [175] = 147,
  [176] = 151,
  [177] = 73,
  [178] = 148,
  [179] = 150,
  [180] = 180,
  [181] = 180,
  [182] = 182,
  [183] = 182,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 186,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 193,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 207,
  [212] = 207,
  [213] = 213,
  [214] = 214,
  [215] = 207,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 217,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 218,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 217,
  [229] = 221,
  [230] = 223,
  [231] = 206,
  [232] = 225,
  [233] = 227,
  [234] = 234,
  [235] = 221,
  [236] = 223,
  [237] = 218,
  [238] = 227,
  [239] = 225,
  [240] = 227,
  [241] = 225,
  [242] = 242,
  [243] = 217,
  [244] = 244,
  [245] = 200,
  [246] = 246,
  [247] = 247,
  [248] = 218,
  [249] = 249,
  [250] = 250,
  [251] = 223,
  [252] = 221,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 201,
  [258] = 258,
  [259] = 259,
  [260] = 254,
  [261] = 261,
  [262] = 261,
  [263] = 261,
  [264] = 261,
  [265] = 265,
  [266] = 266,
  [267] = 242,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 198,
  [277] = 197,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 222,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 210,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 266,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 204,
  [302] = 275,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 291,
  [310] = 208,
  [311] = 311,
  [312] = 311,
  [313] = 283,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 209,
  [319] = 319,
  [320] = 311,
  [321] = 321,
  [322] = 214,
  [323] = 323,
  [324] = 311,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 326,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 334,
  [336] = 336,
  [337] = 337,
  [338] = 333,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 341,
  [348] = 339,
  [349] = 331,
  [350] = 334,
  [351] = 351,
  [352] = 352,
  [353] = 340,
  [354] = 354,
  [355] = 340,
  [356] = 339,
  [357] = 342,
  [358] = 339,
  [359] = 340,
  [360] = 341,
  [361] = 361,
  [362] = 341,
  [363] = 342,
  [364] = 364,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 331,
  [371] = 334,
  [372] = 372,
  [373] = 369,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 376,
  [378] = 337,
  [379] = 331,
  [380] = 380,
  [381] = 381,
  [382] = 337,
  [383] = 383,
  [384] = 342,
  [385] = 332,
  [386] = 337,
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
      if (eof) ADVANCE(36);
      if (lookahead == '!') ADVANCE(53);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == ']') ADVANCE(81);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(116);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 'm') ADVANCE(100);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '!') ADVANCE(53);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '[') ADVANCE(80);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(116);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(62);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(116);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '/') ADVANCE(13);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(116);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(53);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == '[') ADVANCE(80);
      if (lookahead == ']') ADVANCE(81);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(116);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == '[') ADVANCE(80);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(116);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '[') ADVANCE(80);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(116);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '.') ADVANCE(42);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(62);
      if (lookahead == ']') ADVANCE(81);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(116);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
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
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '0') ADVANCE(118);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '=') ADVANCE(20);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(116);
      if (lookahead == '}') ADVANCE(45);
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
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 21:
      if (lookahead == 'U') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(29);
      if (lookahead == 'x') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (lookahead != 0) ADVANCE(75);
      END_STATE();
    case 22:
      if (lookahead == '|') ADVANCE(66);
      END_STATE();
    case 23:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
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
      if (eof) ADVANCE(36);
      if (lookahead == '!') ADVANCE(53);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '&') ADVANCE(12);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ')') ADVANCE(79);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(58);
      if (lookahead == '.') ADVANCE(43);
      if (lookahead == '/') ADVANCE(55);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '<') ADVANCE(63);
      if (lookahead == '=') ADVANCE(41);
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
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '|') ADVANCE(22);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 35:
      if (eof) ADVANCE(36);
      if (lookahead == '!') ADVANCE(52);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '(') ADVANCE(78);
      if (lookahead == ',') ADVANCE(51);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '=') ADVANCE(20);
      if (lookahead == '[') ADVANCE(80);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(116);
      if (lookahead == 'd') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__shebang);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_module);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(116);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_import);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(116);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(59);
      if (lookahead == '>') ADVANCE(82);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_let);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(116);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_func);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(116);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_data);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(116);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_extern);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(116);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_enum);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(116);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(60);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(126);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '0') ADVANCE(118);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(119);
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
      ACCEPT_TOKEN(sym__statement_terminator);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__statement_terminator);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == ';') ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__implicit_list_terminator);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__implicit_list_terminator);
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
      if (lookahead == 'c') ADVANCE(47);
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
      if (lookahead == 'e') ADVANCE(38);
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
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(116);
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(116);
      if (lookahead == 'n') ADVANCE(49);
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
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(116);
      if (lookahead == 't') ADVANCE(39);
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
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__int);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__int);
      if (lookahead == '.') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__int);
      if (lookahead == '.') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__int);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__float);
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
  [3] = {.lex_state = 35},
  [4] = {.lex_state = 35},
  [5] = {.lex_state = 35},
  [6] = {.lex_state = 35},
  [7] = {.lex_state = 35},
  [8] = {.lex_state = 35},
  [9] = {.lex_state = 35},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 6},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 10},
  [122] = {.lex_state = 10},
  [123] = {.lex_state = 10},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 10},
  [126] = {.lex_state = 10},
  [127] = {.lex_state = 10},
  [128] = {.lex_state = 10},
  [129] = {.lex_state = 10},
  [130] = {.lex_state = 10},
  [131] = {.lex_state = 10},
  [132] = {.lex_state = 10},
  [133] = {.lex_state = 10},
  [134] = {.lex_state = 10},
  [135] = {.lex_state = 10},
  [136] = {.lex_state = 10},
  [137] = {.lex_state = 10},
  [138] = {.lex_state = 10},
  [139] = {.lex_state = 10},
  [140] = {.lex_state = 10},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 10},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 10},
  [145] = {.lex_state = 10},
  [146] = {.lex_state = 10},
  [147] = {.lex_state = 10},
  [148] = {.lex_state = 10},
  [149] = {.lex_state = 10},
  [150] = {.lex_state = 10},
  [151] = {.lex_state = 10},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 35},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 2},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 2},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 10},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 10},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 10},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 17},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 17},
  [196] = {.lex_state = 17},
  [197] = {.lex_state = 4},
  [198] = {.lex_state = 4},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 4},
  [203] = {.lex_state = 17},
  [204] = {.lex_state = 4},
  [205] = {.lex_state = 17},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 4},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 17},
  [214] = {.lex_state = 4},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 17},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 17},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 17},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 5},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 35},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 5},
  [234] = {.lex_state = 2},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 17},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 5},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 35},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 17},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 1},
  [257] = {.lex_state = 35},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 17},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 17},
  [262] = {.lex_state = 17},
  [263] = {.lex_state = 17},
  [264] = {.lex_state = 17},
  [265] = {.lex_state = 4},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 4},
  [270] = {.lex_state = 1},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 2},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 2},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 1},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 17},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 17},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 1},
  [287] = {.lex_state = 4},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 4},
  [291] = {.lex_state = 2},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 1},
  [294] = {.lex_state = 4},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 17},
  [300] = {.lex_state = 1},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 17},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 17},
  [306] = {.lex_state = 17},
  [307] = {.lex_state = 17},
  [308] = {.lex_state = 17},
  [309] = {.lex_state = 17},
  [310] = {.lex_state = 1},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 35},
  [314] = {.lex_state = 1},
  [315] = {.lex_state = 1},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 4},
  [318] = {.lex_state = 1},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 1},
  [323] = {.lex_state = 17},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 1},
  [326] = {.lex_state = 17},
  [327] = {.lex_state = 1},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 17},
  [330] = {.lex_state = 17},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 35},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 17},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 1},
  [344] = {.lex_state = 1},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 1},
  [347] = {.lex_state = 17},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 1},
  [352] = {.lex_state = 1},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 1},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 17},
  [361] = {.lex_state = 1},
  [362] = {.lex_state = 17},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 1},
  [365] = {.lex_state = 17},
  [366] = {.lex_state = 1},
  [367] = {.lex_state = 1},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 17},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 17},
  [373] = {.lex_state = 17},
  [374] = {.lex_state = 1},
  [375] = {.lex_state = 17},
  [376] = {.lex_state = 17},
  [377] = {.lex_state = 17},
  [378] = {.lex_state = 35},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 17},
  [381] = {.lex_state = 17},
  [382] = {.lex_state = 35},
  [383] = {.lex_state = 1},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 35},
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
    [sym_source_file] = STATE(368),
    [sym_module_declaration] = STATE(366),
    [sym__top_level_declaration] = STATE(364),
    [sym_import_declaration] = STATE(364),
    [sym_let_declaration] = STATE(364),
    [sym_function_declaration] = STATE(364),
    [sym_data_declaration] = STATE(364),
    [sym_extern_declaration] = STATE(364),
    [sym_enum_declaration] = STATE(364),
    [sym__complex_expression] = STATE(364),
    [sym_complex_invocation_expression] = STATE(364),
    [sym__operand_expression] = STATE(182),
    [sym_unary_expression] = STATE(180),
    [sym_binary_expression] = STATE(180),
    [sym__argument] = STATE(10),
    [sym_member_access] = STATE(10),
    [sym_type_expression] = STATE(10),
    [sym__literal] = STATE(75),
    [sym_string_literal] = STATE(75),
    [sym_group_literal] = STATE(75),
    [sym__number_literal] = STATE(75),
    [sym_int_literal] = STATE(75),
    [sym_float_literal] = STATE(75),
    [sym_array_literal] = STATE(75),
    [sym_dict_literal] = STATE(75),
    [sym_function_literal] = STATE(75),
    [aux_sym_source_file_repeat1] = STATE(8),
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
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    STATE(182), 1,
      sym__operand_expression,
    STATE(352), 1,
      sym_module_declaration,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
    STATE(364), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [95] = 23,
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
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(182), 1,
      sym__operand_expression,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
    STATE(364), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [184] = 23,
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
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(182), 1,
      sym__operand_expression,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
    STATE(364), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [273] = 23,
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
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(182), 1,
      sym__operand_expression,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
    STATE(364), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [362] = 23,
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
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(182), 1,
      sym__operand_expression,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
    STATE(364), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [451] = 23,
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
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(182), 1,
      sym__operand_expression,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
    STATE(364), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [540] = 23,
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
    STATE(7), 1,
      aux_sym_source_file_repeat1,
    STATE(182), 1,
      sym__operand_expression,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
    STATE(364), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [629] = 23,
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
    STATE(5), 1,
      aux_sym_source_file_repeat1,
    STATE(182), 1,
      sym__operand_expression,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
    STATE(364), 9,
      sym__top_level_declaration,
      sym_import_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_extern_declaration,
      sym_enum_declaration,
      sym__complex_expression,
      sym_complex_invocation_expression,
  [718] = 18,
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
      sym__statement_terminator,
    ACTIONS(112), 1,
      sym_comment,
    STATE(182), 1,
      sym__operand_expression,
    STATE(178), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(242), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(24), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
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
  [796] = 18,
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
    STATE(183), 1,
      sym__operand_expression,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(267), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
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
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [873] = 21,
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
    STATE(182), 1,
      sym__operand_expression,
    STATE(363), 1,
      sym__statement_list,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(293), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [955] = 21,
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
    STATE(182), 1,
      sym__operand_expression,
    STATE(379), 1,
      sym__statement_list,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(293), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [1037] = 21,
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
    STATE(182), 1,
      sym__operand_expression,
    STATE(331), 1,
      sym__statement_list,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(293), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [1119] = 21,
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
    STATE(182), 1,
      sym__operand_expression,
    STATE(342), 1,
      sym__statement_list,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(293), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [1201] = 21,
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
    STATE(182), 1,
      sym__operand_expression,
    STATE(357), 1,
      sym__statement_list,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(293), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [1283] = 21,
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
    STATE(182), 1,
      sym__operand_expression,
    STATE(349), 1,
      sym__statement_list,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(293), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [1365] = 21,
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
    STATE(182), 1,
      sym__operand_expression,
    STATE(384), 1,
      sym__statement_list,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(293), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [1447] = 21,
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
    STATE(182), 1,
      sym__operand_expression,
    STATE(370), 1,
      sym__statement_list,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(293), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [1529] = 14,
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
    STATE(210), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    ACTIONS(102), 4,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(150), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(118), 8,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [1596] = 20,
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
    STATE(182), 1,
      sym__operand_expression,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(314), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [1675] = 20,
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
    STATE(182), 1,
      sym__operand_expression,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(314), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [1754] = 19,
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
    STATE(182), 1,
      sym__operand_expression,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(314), 8,
      sym__scope_level_declaration,
      sym_let_declaration,
      sym_function_declaration,
      sym_data_declaration,
      sym_enum_declaration,
      sym__statement,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [1830] = 14,
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
    ACTIONS(150), 1,
      sym__statement_terminator,
    ACTIONS(156), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    STATE(289), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
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
  [1895] = 18,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(160), 1,
      anon_sym_COLON,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(225), 1,
      sym_dict_entry,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(207), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [1962] = 18,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(164), 1,
      anon_sym_COLON,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(241), 1,
      sym_dict_entry,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(212), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [2029] = 18,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(168), 1,
      anon_sym_COLON,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(232), 1,
      sym_dict_entry,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(215), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [2096] = 18,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(172), 1,
      anon_sym_COLON,
    ACTIONS(174), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(239), 1,
      sym_dict_entry,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(211), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [2163] = 17,
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
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    ACTIONS(178), 1,
      sym__statement_terminator,
    STATE(182), 1,
      sym__operand_expression,
    STATE(178), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(266), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(24), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [2227] = 17,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(296), 1,
      sym_dict_entry,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(336), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [2291] = 17,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(296), 1,
      sym_dict_entry,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(336), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [2355] = 17,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(296), 1,
      sym_dict_entry,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(336), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [2419] = 17,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(296), 1,
      sym_dict_entry,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(336), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [2483] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(193), 9,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(191), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2523] = 17,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(296), 1,
      sym_dict_entry,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(336), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [2587] = 17,
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
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      sym__statement_terminator,
    STATE(182), 1,
      sym__operand_expression,
    STATE(178), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(266), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(24), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [2651] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_DOT,
    STATE(34), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(205), 9,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(203), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2691] = 17,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(296), 1,
      sym_dict_entry,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(336), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [2755] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_DOT,
    STATE(37), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(211), 9,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(209), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2795] = 17,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(296), 1,
      sym_dict_entry,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(336), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [2859] = 17,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(296), 1,
      sym_dict_entry,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(336), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [2923] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 10,
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
    ACTIONS(219), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [2958] = 16,
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
    ACTIONS(221), 1,
      anon_sym_EQ,
    STATE(182), 1,
      sym__operand_expression,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(295), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [3019] = 16,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(223), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(316), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [3080] = 16,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(178), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      sym__operand_expression,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(297), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [3141] = 16,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(316), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [3202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 10,
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
    ACTIONS(229), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [3237] = 16,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    STATE(183), 1,
      sym__operand_expression,
    STATE(296), 1,
      sym_dict_entry,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(336), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [3298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 10,
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
    ACTIONS(233), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [3333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 10,
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
    ACTIONS(237), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [3368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 10,
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
    ACTIONS(241), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [3403] = 16,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(243), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(316), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [3464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 10,
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
    ACTIONS(247), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [3499] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 10,
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
    ACTIONS(251), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [3534] = 16,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(316), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [3595] = 16,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      sym__operand_expression,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(297), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [3656] = 16,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(316), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [3717] = 3,
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
    ACTIONS(259), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [3752] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 10,
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
    ACTIONS(263), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [3787] = 16,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(265), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(316), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [3848] = 3,
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
    ACTIONS(269), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [3883] = 3,
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
    ACTIONS(273), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [3918] = 3,
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
    ACTIONS(277), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [3953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 10,
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
    ACTIONS(281), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [3988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 10,
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
    ACTIONS(285), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [4023] = 16,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(287), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(316), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [4084] = 16,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(289), 1,
      anon_sym_RBRACK,
    STATE(183), 1,
      sym__operand_expression,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(316), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [4145] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 10,
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
    ACTIONS(293), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [4180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 10,
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
    ACTIONS(297), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [4215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 10,
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
    ACTIONS(301), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [4250] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym__statement_terminator,
    ACTIONS(303), 1,
      anon_sym_DOT,
    STATE(78), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(205), 23,
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
  [4288] = 15,
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
    STATE(182), 1,
      sym__operand_expression,
    STATE(180), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(303), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(10), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [4346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 9,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(305), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [4380] = 15,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    STATE(183), 1,
      sym__operand_expression,
    STATE(181), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(356), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(11), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [4438] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym__statement_terminator,
    ACTIONS(303), 1,
      anon_sym_DOT,
    STATE(71), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(211), 23,
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
  [4476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 9,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(309), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [4510] = 15,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    STATE(183), 1,
      sym__operand_expression,
    STATE(181), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(339), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(11), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [4568] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym__statement_terminator,
    ACTIONS(313), 1,
      anon_sym_DOT,
    STATE(78), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(193), 23,
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
  [4606] = 15,
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
    STATE(182), 1,
      sym__operand_expression,
    STATE(178), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(266), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(24), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(75), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [4664] = 15,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    STATE(183), 1,
      sym__operand_expression,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(316), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [4722] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 9,
      anon_sym_BANG,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_type,
      sym_identifier,
      sym__int,
      sym__float,
    ACTIONS(316), 17,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [4756] = 15,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    STATE(183), 1,
      sym__operand_expression,
    STATE(181), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(348), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(11), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [4814] = 15,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    STATE(183), 1,
      sym__operand_expression,
    STATE(181), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(358), 2,
      sym__complex_expression,
      sym_complex_invocation_expression,
    STATE(11), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [4872] = 15,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    STATE(183), 1,
      sym__operand_expression,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(304), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [4930] = 15,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    STATE(183), 1,
      sym__operand_expression,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(297), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [4988] = 15,
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
    ACTIONS(158), 1,
      anon_sym_BANG,
    STATE(183), 1,
      sym__operand_expression,
    STATE(148), 2,
      sym_unary_expression,
      sym_binary_expression,
    STATE(298), 2,
      sym_simple_invocation_expression,
      sym__simple_expression,
    STATE(20), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [5046] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym__statement_terminator,
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
  [5079] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym__statement_terminator,
    ACTIONS(235), 24,
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
  [5112] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__statement_terminator,
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
  [5145] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym__statement_terminator,
    ACTIONS(279), 24,
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
  [5178] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym__statement_terminator,
    ACTIONS(227), 24,
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
  [5211] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym__statement_terminator,
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
  [5244] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym__statement_terminator,
    ACTIONS(295), 24,
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
  [5277] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym__statement_terminator,
    ACTIONS(245), 24,
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
  [5310] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__statement_terminator,
    ACTIONS(231), 24,
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
  [5343] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym__statement_terminator,
    ACTIONS(217), 24,
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
  [5376] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym__statement_terminator,
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
  [5409] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym__statement_terminator,
    ACTIONS(299), 24,
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
  [5442] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym__statement_terminator,
    ACTIONS(283), 24,
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
  [5475] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym__statement_terminator,
    ACTIONS(291), 24,
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
  [5508] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym__statement_terminator,
    ACTIONS(249), 24,
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
  [5541] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym__statement_terminator,
    ACTIONS(261), 24,
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
  [5574] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym__statement_terminator,
    ACTIONS(239), 24,
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
  [5607] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
    ACTIONS(322), 1,
      anon_sym_type,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(332), 1,
      sym__int,
    ACTIONS(334), 1,
      sym__float,
    STATE(147), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(123), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [5657] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
    ACTIONS(322), 1,
      anon_sym_type,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(332), 1,
      sym__int,
    ACTIONS(334), 1,
      sym__float,
    STATE(151), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(123), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [5707] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
    ACTIONS(322), 1,
      anon_sym_type,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(332), 1,
      sym__int,
    ACTIONS(334), 1,
      sym__float,
    STATE(146), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(123), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [5757] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      anon_sym_BANG,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
    ACTIONS(322), 1,
      anon_sym_type,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(332), 1,
      sym__int,
    ACTIONS(334), 1,
      sym__float,
    STATE(145), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(123), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [5807] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym__statement_terminator,
    ACTIONS(318), 23,
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
  [5839] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__statement_terminator,
    ACTIONS(307), 23,
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
  [5871] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym__statement_terminator,
    ACTIONS(311), 23,
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
  [5903] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      anon_sym_type,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 1,
      sym__int,
    ACTIONS(350), 1,
      sym__float,
    STATE(172), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(141), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [5953] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      anon_sym_type,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 1,
      sym__int,
    ACTIONS(350), 1,
      sym__float,
    STATE(171), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(141), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [6003] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      anon_sym_type,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 1,
      sym__int,
    ACTIONS(350), 1,
      sym__float,
    STATE(175), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(141), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [6053] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      anon_sym_type,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 1,
      sym__int,
    ACTIONS(350), 1,
      sym__float,
    STATE(176), 6,
      sym__operand_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(141), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [6103] = 11,
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
    STATE(324), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [6147] = 11,
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
    STATE(311), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [6191] = 11,
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
    STATE(312), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [6235] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
    ACTIONS(322), 1,
      anon_sym_type,
    ACTIONS(324), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      anon_sym_LPAREN,
    ACTIONS(328), 1,
      anon_sym_LBRACK,
    ACTIONS(330), 1,
      sym_identifier,
    ACTIONS(332), 1,
      sym__int,
    ACTIONS(334), 1,
      sym__float,
    STATE(150), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(123), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [6279] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
    ACTIONS(338), 1,
      anon_sym_type,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    ACTIONS(342), 1,
      anon_sym_LPAREN,
    ACTIONS(344), 1,
      anon_sym_LBRACK,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(348), 1,
      sym__int,
    ACTIONS(350), 1,
      sym__float,
    STATE(179), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(141), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [6323] = 11,
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
    STATE(320), 3,
      sym__argument,
      sym_member_access,
      sym_type_expression,
    STATE(39), 9,
      sym__literal,
      sym_string_literal,
      sym_group_literal,
      sym__number_literal,
      sym_int_literal,
      sym_float_literal,
      sym_array_literal,
      sym_dict_literal,
      sym_function_literal,
  [6367] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_DOT,
    STATE(121), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(193), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(191), 14,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6398] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_DOT,
    STATE(121), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(205), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(203), 14,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6429] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_DOT,
    STATE(122), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(211), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(209), 14,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6460] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(219), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(251), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6512] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(259), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(233), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(263), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6590] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(247), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6616] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(237), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6642] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(301), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(297), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(293), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6720] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(285), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6746] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(281), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(277), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(273), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(269), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(229), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(241), 15,
      anon_sym_DOT,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6902] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym__statement_terminator,
    ACTIONS(357), 1,
      anon_sym_DOT,
    STATE(152), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(211), 14,
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
  [6931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(309), 14,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6956] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym__statement_terminator,
    ACTIONS(359), 1,
      anon_sym_DOT,
    STATE(143), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(193), 14,
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
  [6985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(305), 14,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7010] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(366), 1,
      anon_sym_SLASH,
    ACTIONS(368), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(372), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(370), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
    ACTIONS(362), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7045] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(366), 1,
      anon_sym_SLASH,
    ACTIONS(368), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(362), 11,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7076] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(366), 1,
      anon_sym_SLASH,
    ACTIONS(376), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(362), 13,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7105] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(150), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
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
  [7132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(316), 14,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(378), 14,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 3,
      anon_sym_SLASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(362), 14,
      anon_sym_RBRACE,
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
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7207] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym__statement_terminator,
    ACTIONS(357), 1,
      anon_sym_DOT,
    STATE(143), 1,
      aux_sym_member_access_repeat1,
    ACTIONS(205), 14,
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
  [7236] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_BANG,
      anon_sym_DQUOTE,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
    ACTIONS(382), 10,
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
  [7260] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym__statement_terminator,
    ACTIONS(249), 15,
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
  [7284] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym__statement_terminator,
    ACTIONS(217), 15,
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
  [7308] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(269), 1,
      sym__statement_terminator,
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
  [7332] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(273), 1,
      sym__statement_terminator,
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
  [7356] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(277), 1,
      sym__statement_terminator,
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
  [7380] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym__statement_terminator,
    ACTIONS(279), 15,
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
  [7404] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym__statement_terminator,
    ACTIONS(261), 15,
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
  [7428] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym__statement_terminator,
    ACTIONS(245), 15,
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
  [7452] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym__statement_terminator,
    ACTIONS(239), 15,
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
  [7476] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym__statement_terminator,
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
  [7500] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym__statement_terminator,
    ACTIONS(231), 15,
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
  [7524] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(285), 1,
      sym__statement_terminator,
    ACTIONS(283), 15,
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
  [7548] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym__statement_terminator,
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
  [7572] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(293), 1,
      sym__statement_terminator,
    ACTIONS(291), 15,
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
  [7596] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym__statement_terminator,
    ACTIONS(295), 15,
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
  [7620] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(301), 1,
      sym__statement_terminator,
    ACTIONS(299), 15,
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
  [7644] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym__statement_terminator,
    ACTIONS(235), 15,
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
  [7668] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym__statement_terminator,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(376), 10,
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
  [7695] = 7,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym__statement_terminator,
    ACTIONS(376), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(386), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(390), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(388), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_LT_EQ,
  [7726] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym__statement_terminator,
    ACTIONS(311), 14,
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
  [7749] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(316), 1,
      sym__statement_terminator,
    ACTIONS(318), 14,
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
  [7772] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym__statement_terminator,
    ACTIONS(384), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(376), 12,
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
  [7797] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym__statement_terminator,
    ACTIONS(376), 14,
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
  [7820] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym__statement_terminator,
    ACTIONS(307), 14,
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
  [7843] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym__statement_terminator,
    ACTIONS(156), 2,
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
  [7868] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym__statement_terminator,
    ACTIONS(380), 14,
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
  [7891] = 4,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      sym__statement_terminator,
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
  [7915] = 4,
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
  [7938] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_SLASH,
    ACTIONS(392), 1,
      anon_sym_STAR,
    ACTIONS(388), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(394), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(398), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(396), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7966] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_STAR,
    ACTIONS(366), 1,
      anon_sym_SLASH,
    ACTIONS(368), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(372), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(374), 2,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(370), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_EQ,
  [7994] = 8,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    ACTIONS(402), 1,
      anon_sym_data,
    ACTIONS(404), 1,
      anon_sym_enum,
    ACTIONS(406), 1,
      sym__implicit_list_terminator,
    ACTIONS(408), 1,
      sym_identifier,
    STATE(288), 1,
      aux_sym_enum_case_list_repeat1,
    STATE(189), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [8021] = 8,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_data,
    ACTIONS(404), 1,
      anon_sym_enum,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    ACTIONS(412), 1,
      sym__implicit_list_terminator,
    STATE(294), 1,
      aux_sym_enum_case_list_repeat1,
    STATE(189), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [8048] = 7,
    ACTIONS(402), 1,
      anon_sym_data,
    ACTIONS(404), 1,
      anon_sym_enum,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    ACTIONS(416), 1,
      sym_comment,
    STATE(333), 1,
      sym_enum_case_list,
    STATE(185), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [8072] = 7,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_data,
    ACTIONS(404), 1,
      anon_sym_enum,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    ACTIONS(420), 1,
      sym__implicit_list_terminator,
    STATE(189), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [8096] = 7,
    ACTIONS(402), 1,
      anon_sym_data,
    ACTIONS(404), 1,
      anon_sym_enum,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(416), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
    STATE(338), 1,
      sym_enum_case_list,
    STATE(185), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [8120] = 7,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    ACTIONS(426), 1,
      anon_sym_data,
    ACTIONS(429), 1,
      anon_sym_enum,
    ACTIONS(432), 1,
      sym__implicit_list_terminator,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(189), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [8144] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_data,
    ACTIONS(404), 1,
      anon_sym_enum,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    STATE(187), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [8165] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_data,
    ACTIONS(404), 1,
      anon_sym_enum,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(439), 1,
      anon_sym_RBRACE,
    STATE(187), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [8186] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_data,
    ACTIONS(404), 1,
      anon_sym_enum,
    ACTIONS(408), 1,
      sym_identifier,
    ACTIONS(441), 1,
      anon_sym_RBRACE,
    STATE(187), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [8207] = 5,
    ACTIONS(443), 1,
      anon_sym_RBRACE,
    ACTIONS(445), 1,
      sym_identifier,
    ACTIONS(447), 1,
      sym_comment,
    STATE(332), 1,
      sym_data_property_list,
    STATE(278), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [8225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_data,
    ACTIONS(404), 1,
      anon_sym_enum,
    ACTIONS(408), 1,
      sym_identifier,
    STATE(184), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [8243] = 5,
    ACTIONS(445), 1,
      sym_identifier,
    ACTIONS(447), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_RBRACE,
    STATE(385), 1,
      sym_data_property_list,
    STATE(278), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [8261] = 5,
    ACTIONS(445), 1,
      sym_identifier,
    ACTIONS(447), 1,
      sym_comment,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
    STATE(345), 1,
      sym_data_property_list,
    STATE(278), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [8279] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
    ACTIONS(457), 1,
      sym__implicit_list_terminator,
    ACTIONS(455), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8295] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(459), 1,
      anon_sym_LBRACE,
    ACTIONS(463), 1,
      sym__implicit_list_terminator,
    ACTIONS(461), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8311] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_data,
    ACTIONS(404), 1,
      anon_sym_enum,
    ACTIONS(408), 1,
      sym_identifier,
    STATE(187), 3,
      sym_data_declaration,
      sym_enum_declaration,
      aux_sym__enum_case,
  [8329] = 6,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      sym__statement_terminator,
    STATE(201), 1,
      aux_sym_parameter_list_repeat1,
    STATE(291), 1,
      sym__explicit_list_terminator,
  [8348] = 6,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
    ACTIONS(473), 1,
      anon_sym_COMMA,
    ACTIONS(476), 1,
      sym__statement_terminator,
    STATE(201), 1,
      aux_sym_parameter_list_repeat1,
    STATE(330), 1,
      sym__explicit_list_terminator,
  [8367] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym__implicit_list_terminator,
    ACTIONS(478), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_identifier,
    ACTIONS(482), 1,
      anon_sym_RBRACE,
    STATE(315), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [8395] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(486), 1,
      sym__implicit_list_terminator,
    ACTIONS(484), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8408] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_identifier,
    ACTIONS(488), 1,
      anon_sym_RBRACE,
    STATE(315), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [8423] = 6,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
    ACTIONS(492), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      sym__statement_terminator,
    STATE(200), 1,
      aux_sym_parameter_list_repeat1,
    STATE(275), 1,
      sym__explicit_list_terminator,
  [8442] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_COLON,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym__explicit_list_terminator,
    STATE(223), 1,
      aux_sym_array_literal_repeat1,
  [8461] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym__implicit_list_terminator,
    ACTIONS(502), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8474] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym__implicit_list_terminator,
    ACTIONS(506), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 5,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [8498] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_COLON,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      sym__explicit_list_terminator,
    STATE(236), 1,
      aux_sym_array_literal_repeat1,
  [8517] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_COLON,
    ACTIONS(516), 1,
      anon_sym_COMMA,
    ACTIONS(518), 1,
      anon_sym_RBRACK,
    STATE(46), 1,
      sym__explicit_list_terminator,
    STATE(251), 1,
      aux_sym_array_literal_repeat1,
  [8536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_identifier,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    STATE(315), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [8551] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(524), 1,
      sym__implicit_list_terminator,
    ACTIONS(522), 4,
      anon_sym_RBRACE,
      anon_sym_data,
      anon_sym_enum,
      sym_identifier,
  [8564] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_COLON,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    ACTIONS(528), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      sym__explicit_list_terminator,
    STATE(230), 1,
      aux_sym_array_literal_repeat1,
  [8583] = 6,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_EQ,
    ACTIONS(532), 1,
      anon_sym_DOT,
    ACTIONS(534), 1,
      anon_sym_LBRACE,
    ACTIONS(536), 1,
      sym__statement_terminator,
    STATE(244), 1,
      aux_sym_import_module_repeat1,
  [8602] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_DQUOTE,
    STATE(233), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(540), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8616] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      anon_sym_RBRACE,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(247), 1,
      sym_type_case,
    STATE(350), 1,
      sym__type_case_list,
  [8632] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(546), 1,
      anon_sym_DQUOTE,
    STATE(238), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(548), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8646] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_identifier,
    STATE(315), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [8658] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_RBRACK,
    ACTIONS(550), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      sym__explicit_list_terminator,
    STATE(226), 1,
      aux_sym_dict_literal_repeat1,
  [8674] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_RBRACE,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      sym__statement_terminator,
    STATE(222), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [8690] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_RBRACK,
    ACTIONS(559), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      sym__explicit_list_terminator,
    STATE(246), 1,
      aux_sym_array_literal_repeat1,
  [8706] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(561), 1,
      anon_sym_RBRACE,
    STATE(247), 1,
      sym_type_case,
    STATE(371), 1,
      sym__type_case_list,
  [8722] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym__explicit_list_terminator,
    STATE(221), 1,
      aux_sym_dict_literal_repeat1,
  [8738] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(570), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      sym__explicit_list_terminator,
    STATE(226), 1,
      aux_sym_dict_literal_repeat1,
  [8754] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_DQUOTE,
    STATE(249), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(574), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8768] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_DQUOTE,
    STATE(227), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(578), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8782] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_RBRACK,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      sym__explicit_list_terminator,
    STATE(226), 1,
      aux_sym_dict_literal_repeat1,
  [8798] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_RBRACK,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      sym__explicit_list_terminator,
    STATE(246), 1,
      aux_sym_array_literal_repeat1,
  [8814] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_EQ_GT,
    ACTIONS(584), 1,
      anon_sym_COMMA,
    STATE(245), 1,
      aux_sym_parameter_list_repeat1,
    STATE(302), 1,
      sym__explicit_list_terminator,
  [8830] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym__explicit_list_terminator,
    STATE(229), 1,
      aux_sym_dict_literal_repeat1,
  [8846] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_DQUOTE,
    STATE(249), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(574), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8860] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
    ACTIONS(594), 1,
      sym__statement_terminator,
    ACTIONS(596), 1,
      sym_identifier,
    STATE(343), 1,
      sym_parameter_list,
  [8876] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_RBRACK,
    ACTIONS(598), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      sym__explicit_list_terminator,
    STATE(226), 1,
      aux_sym_dict_literal_repeat1,
  [8892] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_RBRACK,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      sym__explicit_list_terminator,
    STATE(246), 1,
      aux_sym_array_literal_repeat1,
  [8908] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(602), 1,
      anon_sym_RBRACE,
    STATE(247), 1,
      sym_type_case,
    STATE(334), 1,
      sym__type_case_list,
  [8924] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_DQUOTE,
    STATE(249), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(574), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8938] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(608), 1,
      anon_sym_RBRACK,
    STATE(40), 1,
      sym__explicit_list_terminator,
    STATE(235), 1,
      aux_sym_dict_literal_repeat1,
  [8954] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_DQUOTE,
    STATE(249), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(574), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [8968] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 1,
      anon_sym_COMMA,
    ACTIONS(614), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      sym__explicit_list_terminator,
    STATE(252), 1,
      aux_sym_dict_literal_repeat1,
  [8984] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_RBRACE,
    ACTIONS(618), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      sym__statement_terminator,
    STATE(254), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [9000] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_DQUOTE,
    STATE(240), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(624), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [9014] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_DOT,
    ACTIONS(628), 1,
      anon_sym_LBRACE,
    ACTIONS(630), 1,
      sym__statement_terminator,
    STATE(256), 1,
      aux_sym_import_module_repeat1,
  [9030] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_EQ_GT,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_parameter_list_repeat1,
    STATE(309), 1,
      sym__explicit_list_terminator,
  [9046] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      sym__explicit_list_terminator,
    STATE(246), 1,
      aux_sym_array_literal_repeat1,
  [9062] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(639), 1,
      anon_sym_RBRACE,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    STATE(250), 1,
      aux_sym__type_case_list_repeat1,
    STATE(284), 1,
      sym__explicit_list_terminator,
  [9078] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(643), 1,
      anon_sym_RBRACE,
    STATE(247), 1,
      sym_type_case,
    STATE(335), 1,
      sym__type_case_list,
  [9094] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(645), 1,
      anon_sym_DQUOTE,
    STATE(249), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(647), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [9108] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    ACTIONS(652), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym__type_case_list_repeat1,
    STATE(279), 1,
      sym__explicit_list_terminator,
  [9124] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      sym__explicit_list_terminator,
    STATE(246), 1,
      aux_sym_array_literal_repeat1,
  [9140] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      sym__explicit_list_terminator,
    STATE(226), 1,
      aux_sym_dict_literal_repeat1,
  [9156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 1,
      anon_sym_RBRACE,
    ACTIONS(660), 1,
      anon_sym_COMMA,
    STATE(253), 1,
      aux_sym__type_case_list_repeat1,
    STATE(307), 1,
      sym__explicit_list_terminator,
  [9172] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(199), 1,
      sym__statement_terminator,
    ACTIONS(663), 1,
      anon_sym_COMMA,
    STATE(222), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [9188] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_DOT,
    ACTIONS(534), 1,
      anon_sym_LBRACE,
    ACTIONS(536), 1,
      sym__statement_terminator,
    STATE(244), 1,
      aux_sym_import_module_repeat1,
  [9204] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_DOT,
    ACTIONS(668), 1,
      anon_sym_LBRACE,
    ACTIONS(670), 1,
      sym__statement_terminator,
    STATE(256), 1,
      aux_sym_import_module_repeat1,
  [9220] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_EQ_GT,
    ACTIONS(672), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_parameter_list_repeat1,
    STATE(326), 1,
      sym__explicit_list_terminator,
  [9236] = 5,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(596), 1,
      sym_identifier,
    ACTIONS(675), 1,
      anon_sym_RBRACE,
    ACTIONS(677), 1,
      sym__statement_terminator,
    STATE(325), 1,
      sym_parameter_list,
  [9252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_identifier,
    STATE(280), 3,
      sym__data_property,
      sym_data_property_value,
      sym_data_property_function,
  [9264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_RPAREN,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    STATE(282), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [9277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_EQ_GT,
    ACTIONS(683), 1,
      sym_identifier,
    STATE(337), 1,
      sym_parameter_list,
  [9290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      sym_identifier,
    ACTIONS(685), 1,
      anon_sym_EQ_GT,
    STATE(386), 1,
      sym_parameter_list,
  [9303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      sym_identifier,
    ACTIONS(687), 1,
      anon_sym_EQ_GT,
    STATE(382), 1,
      sym_parameter_list,
  [9316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      sym_identifier,
    ACTIONS(689), 1,
      anon_sym_EQ_GT,
    STATE(378), 1,
      sym_parameter_list,
  [9329] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_RBRACE,
    ACTIONS(693), 1,
      sym__implicit_list_terminator,
    STATE(290), 1,
      aux_sym_import_members_repeat1,
  [9342] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(557), 1,
      sym__statement_terminator,
    ACTIONS(552), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [9353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 1,
      anon_sym_RPAREN,
    ACTIONS(695), 1,
      anon_sym_COMMA,
    STATE(260), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [9366] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_RBRACE,
    ACTIONS(699), 1,
      sym__statement_terminator,
    STATE(271), 1,
      aux_sym__statement_list_repeat1,
  [9379] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_RBRACE,
    ACTIONS(703), 1,
      sym__implicit_list_terminator,
    STATE(265), 1,
      aux_sym_import_members_repeat1,
  [9392] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_LBRACE,
    ACTIONS(707), 1,
      sym__statement_terminator,
    STATE(383), 1,
      sym_import_members,
  [9405] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    ACTIONS(711), 1,
      sym__statement_terminator,
    STATE(271), 1,
      aux_sym__statement_list_repeat1,
  [9418] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_LBRACE,
    ACTIONS(716), 1,
      sym__statement_terminator,
    ACTIONS(718), 1,
      sym_identifier,
  [9431] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(670), 1,
      sym__statement_terminator,
    ACTIONS(668), 2,
      anon_sym_DOT,
      anon_sym_LBRACE,
  [9442] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_LBRACE,
    ACTIONS(720), 1,
      sym__statement_terminator,
    STATE(367), 1,
      sym_import_members,
  [9455] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(465), 1,
      anon_sym_RBRACE,
    ACTIONS(469), 1,
      sym__statement_terminator,
    ACTIONS(722), 1,
      sym_identifier,
  [9468] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_RBRACE,
    ACTIONS(463), 1,
      sym__statement_terminator,
    ACTIONS(724), 1,
      anon_sym_LBRACE,
  [9481] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    ACTIONS(457), 1,
      sym__statement_terminator,
    ACTIONS(726), 1,
      anon_sym_LBRACE,
  [9494] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
    ACTIONS(730), 1,
      sym__statement_terminator,
    STATE(286), 1,
      aux_sym_data_property_list_repeat1,
  [9507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(732), 1,
      anon_sym_RBRACE,
    STATE(319), 1,
      sym_type_case,
  [9520] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
    ACTIONS(736), 1,
      sym__statement_terminator,
    STATE(292), 1,
      aux_sym_data_property_list_repeat1,
  [9533] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
    ACTIONS(740), 1,
      sym__statement_terminator,
    STATE(281), 1,
      aux_sym_data_property_list_repeat1,
  [9546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_RPAREN,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    STATE(282), 1,
      aux_sym_complex_invocation_expression_repeat1,
  [9559] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym__statement_terminator,
    ACTIONS(471), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [9570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_identifier,
    ACTIONS(650), 1,
      anon_sym_RBRACE,
    STATE(319), 1,
      sym_type_case,
  [9583] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(628), 1,
      anon_sym_LBRACE,
    ACTIONS(630), 1,
      sym__statement_terminator,
    ACTIONS(718), 1,
      sym_identifier,
  [9596] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RBRACE,
    ACTIONS(736), 1,
      sym__statement_terminator,
    STATE(281), 1,
      aux_sym_data_property_list_repeat1,
  [9609] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    ACTIONS(746), 1,
      sym__implicit_list_terminator,
    STATE(287), 1,
      aux_sym_enum_case_list_repeat1,
  [9622] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_RBRACE,
    ACTIONS(751), 1,
      sym__implicit_list_terminator,
    STATE(287), 1,
      aux_sym_enum_case_list_repeat1,
  [9635] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym__statement_terminator,
    ACTIONS(753), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [9646] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
    ACTIONS(757), 1,
      sym__implicit_list_terminator,
    STATE(290), 1,
      aux_sym_import_members_repeat1,
  [9659] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(722), 1,
      sym_identifier,
    ACTIONS(760), 1,
      anon_sym_RBRACE,
    ACTIONS(762), 1,
      sym__statement_terminator,
  [9672] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
    ACTIONS(766), 1,
      sym__statement_terminator,
    STATE(281), 1,
      aux_sym_data_property_list_repeat1,
  [9685] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_RBRACE,
    ACTIONS(770), 1,
      sym__statement_terminator,
    STATE(268), 1,
      aux_sym__statement_list_repeat1,
  [9698] = 4,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_RBRACE,
    ACTIONS(406), 1,
      sym__implicit_list_terminator,
    STATE(287), 1,
      aux_sym_enum_case_list_repeat1,
  [9711] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_RBRACE,
    ACTIONS(774), 1,
      sym__statement_terminator,
  [9721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [9745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      sym_identifier,
    STATE(270), 1,
      sym_import_module,
  [9755] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_RBRACE,
    ACTIONS(782), 1,
      sym__statement_terminator,
  [9765] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
    ACTIONS(486), 1,
      sym__statement_terminator,
  [9775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      anon_sym_EQ_GT,
    ACTIONS(784), 1,
      sym_identifier,
  [9785] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_RBRACE,
    ACTIONS(788), 1,
      sym__statement_terminator,
  [9795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_RBRACE,
    ACTIONS(794), 1,
      sym_identifier,
  [9813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      sym_identifier,
    STATE(274), 1,
      sym_import_module,
  [9823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_identifier,
    STATE(319), 1,
      sym_type_case,
  [9833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_RBRACE,
    ACTIONS(800), 1,
      sym_identifier,
  [9843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_EQ_GT,
    ACTIONS(784), 1,
      sym_identifier,
  [9853] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    ACTIONS(504), 1,
      sym__statement_terminator,
  [9863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_LBRACE,
    STATE(174), 1,
      sym_type_body,
  [9873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_type_body,
  [9883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
  [9891] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_RBRACE,
    ACTIONS(806), 1,
      sym__statement_terminator,
  [9901] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_RBRACE,
    ACTIONS(808), 1,
      sym__statement_terminator,
  [9911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [9919] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_RBRACE,
    ACTIONS(810), 1,
      sym__implicit_list_terminator,
  [9929] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_RBRACE,
    ACTIONS(508), 1,
      sym__statement_terminator,
  [9939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_RBRACE,
      anon_sym_COMMA,
  [9947] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_LBRACE,
    STATE(108), 1,
      sym_type_body,
  [9957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    STATE(300), 1,
      sym_function_literal,
  [9967] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
    ACTIONS(524), 1,
      sym__statement_terminator,
  [9977] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym_identifier,
    ACTIONS(814), 1,
      anon_sym_RBRACE,
  [9987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_type_body,
  [9997] = 3,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(818), 1,
      anon_sym_RBRACE,
    ACTIONS(820), 1,
      sym__statement_terminator,
  [10007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      sym_identifier,
  [10014] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(822), 1,
      sym__statement_terminator,
  [10021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_COLON,
  [10028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      sym_identifier,
  [10035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      sym_identifier,
  [10042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_RBRACE,
  [10049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_RBRACE,
  [10056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_RBRACE,
  [10063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_RBRACE,
  [10070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_RBRACE,
  [10077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_COLON,
  [10084] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_EQ_GT,
  [10091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_RBRACE,
  [10098] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      anon_sym_RPAREN,
  [10105] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_RBRACK,
  [10112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      sym_identifier,
  [10119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
  [10126] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(850), 1,
      sym__statement_terminator,
  [10133] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym__statement_terminator,
  [10140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_RBRACE,
  [10147] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(856), 1,
      sym__statement_terminator,
  [10154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      sym_identifier,
  [10161] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
  [10168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_RBRACE,
  [10175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_RBRACE,
  [10182] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym__statement_terminator,
  [10189] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(868), 1,
      sym__statement_terminator,
  [10196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RBRACK,
  [10203] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(870), 1,
      sym__statement_terminator,
  [10210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_RBRACK,
  [10217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(872), 1,
      anon_sym_RPAREN,
  [10224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(874), 1,
      anon_sym_RBRACE,
  [10231] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(876), 1,
      anon_sym_RPAREN,
  [10238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_RBRACK,
  [10245] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(878), 1,
      sym_identifier,
  [10252] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(880), 1,
      sym__statement_terminator,
  [10259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(882), 1,
      sym_identifier,
  [10266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(884), 1,
      anon_sym_RBRACE,
  [10273] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(886), 1,
      sym__statement_terminator,
  [10280] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(888), 1,
      sym_identifier,
  [10287] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(890), 1,
      sym__statement_terminator,
  [10294] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(892), 1,
      sym__statement_terminator,
  [10301] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(894), 1,
      ts_builtin_sym_end,
  [10308] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(896), 1,
      sym_identifier,
  [10315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(898), 1,
      anon_sym_RBRACE,
  [10322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(900), 1,
      anon_sym_RBRACE,
  [10329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      sym_identifier,
  [10336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(902), 1,
      sym_identifier,
  [10343] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(904), 1,
      sym__statement_terminator,
  [10350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(906), 1,
      sym_identifier,
  [10357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(908), 1,
      sym_identifier,
  [10364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(910), 1,
      sym_identifier,
  [10371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(912), 1,
      anon_sym_EQ_GT,
  [10378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(914), 1,
      anon_sym_RBRACE,
  [10385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(916), 1,
      sym_identifier,
  [10392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(918), 1,
      sym_identifier,
  [10399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(920), 1,
      anon_sym_EQ_GT,
  [10406] = 2,
    ACTIONS(112), 1,
      sym_comment,
    ACTIONS(922), 1,
      sym__statement_terminator,
  [10413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(924), 1,
      anon_sym_RBRACE,
  [10420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(926), 1,
      anon_sym_RBRACE,
  [10427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(928), 1,
      anon_sym_EQ_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 184,
  [SMALL_STATE(5)] = 273,
  [SMALL_STATE(6)] = 362,
  [SMALL_STATE(7)] = 451,
  [SMALL_STATE(8)] = 540,
  [SMALL_STATE(9)] = 629,
  [SMALL_STATE(10)] = 718,
  [SMALL_STATE(11)] = 796,
  [SMALL_STATE(12)] = 873,
  [SMALL_STATE(13)] = 955,
  [SMALL_STATE(14)] = 1037,
  [SMALL_STATE(15)] = 1119,
  [SMALL_STATE(16)] = 1201,
  [SMALL_STATE(17)] = 1283,
  [SMALL_STATE(18)] = 1365,
  [SMALL_STATE(19)] = 1447,
  [SMALL_STATE(20)] = 1529,
  [SMALL_STATE(21)] = 1596,
  [SMALL_STATE(22)] = 1675,
  [SMALL_STATE(23)] = 1754,
  [SMALL_STATE(24)] = 1830,
  [SMALL_STATE(25)] = 1895,
  [SMALL_STATE(26)] = 1962,
  [SMALL_STATE(27)] = 2029,
  [SMALL_STATE(28)] = 2096,
  [SMALL_STATE(29)] = 2163,
  [SMALL_STATE(30)] = 2227,
  [SMALL_STATE(31)] = 2291,
  [SMALL_STATE(32)] = 2355,
  [SMALL_STATE(33)] = 2419,
  [SMALL_STATE(34)] = 2483,
  [SMALL_STATE(35)] = 2523,
  [SMALL_STATE(36)] = 2587,
  [SMALL_STATE(37)] = 2651,
  [SMALL_STATE(38)] = 2691,
  [SMALL_STATE(39)] = 2755,
  [SMALL_STATE(40)] = 2795,
  [SMALL_STATE(41)] = 2859,
  [SMALL_STATE(42)] = 2923,
  [SMALL_STATE(43)] = 2958,
  [SMALL_STATE(44)] = 3019,
  [SMALL_STATE(45)] = 3080,
  [SMALL_STATE(46)] = 3141,
  [SMALL_STATE(47)] = 3202,
  [SMALL_STATE(48)] = 3237,
  [SMALL_STATE(49)] = 3298,
  [SMALL_STATE(50)] = 3333,
  [SMALL_STATE(51)] = 3368,
  [SMALL_STATE(52)] = 3403,
  [SMALL_STATE(53)] = 3464,
  [SMALL_STATE(54)] = 3499,
  [SMALL_STATE(55)] = 3534,
  [SMALL_STATE(56)] = 3595,
  [SMALL_STATE(57)] = 3656,
  [SMALL_STATE(58)] = 3717,
  [SMALL_STATE(59)] = 3752,
  [SMALL_STATE(60)] = 3787,
  [SMALL_STATE(61)] = 3848,
  [SMALL_STATE(62)] = 3883,
  [SMALL_STATE(63)] = 3918,
  [SMALL_STATE(64)] = 3953,
  [SMALL_STATE(65)] = 3988,
  [SMALL_STATE(66)] = 4023,
  [SMALL_STATE(67)] = 4084,
  [SMALL_STATE(68)] = 4145,
  [SMALL_STATE(69)] = 4180,
  [SMALL_STATE(70)] = 4215,
  [SMALL_STATE(71)] = 4250,
  [SMALL_STATE(72)] = 4288,
  [SMALL_STATE(73)] = 4346,
  [SMALL_STATE(74)] = 4380,
  [SMALL_STATE(75)] = 4438,
  [SMALL_STATE(76)] = 4476,
  [SMALL_STATE(77)] = 4510,
  [SMALL_STATE(78)] = 4568,
  [SMALL_STATE(79)] = 4606,
  [SMALL_STATE(80)] = 4664,
  [SMALL_STATE(81)] = 4722,
  [SMALL_STATE(82)] = 4756,
  [SMALL_STATE(83)] = 4814,
  [SMALL_STATE(84)] = 4872,
  [SMALL_STATE(85)] = 4930,
  [SMALL_STATE(86)] = 4988,
  [SMALL_STATE(87)] = 5046,
  [SMALL_STATE(88)] = 5079,
  [SMALL_STATE(89)] = 5112,
  [SMALL_STATE(90)] = 5145,
  [SMALL_STATE(91)] = 5178,
  [SMALL_STATE(92)] = 5211,
  [SMALL_STATE(93)] = 5244,
  [SMALL_STATE(94)] = 5277,
  [SMALL_STATE(95)] = 5310,
  [SMALL_STATE(96)] = 5343,
  [SMALL_STATE(97)] = 5376,
  [SMALL_STATE(98)] = 5409,
  [SMALL_STATE(99)] = 5442,
  [SMALL_STATE(100)] = 5475,
  [SMALL_STATE(101)] = 5508,
  [SMALL_STATE(102)] = 5541,
  [SMALL_STATE(103)] = 5574,
  [SMALL_STATE(104)] = 5607,
  [SMALL_STATE(105)] = 5657,
  [SMALL_STATE(106)] = 5707,
  [SMALL_STATE(107)] = 5757,
  [SMALL_STATE(108)] = 5807,
  [SMALL_STATE(109)] = 5839,
  [SMALL_STATE(110)] = 5871,
  [SMALL_STATE(111)] = 5903,
  [SMALL_STATE(112)] = 5953,
  [SMALL_STATE(113)] = 6003,
  [SMALL_STATE(114)] = 6053,
  [SMALL_STATE(115)] = 6103,
  [SMALL_STATE(116)] = 6147,
  [SMALL_STATE(117)] = 6191,
  [SMALL_STATE(118)] = 6235,
  [SMALL_STATE(119)] = 6279,
  [SMALL_STATE(120)] = 6323,
  [SMALL_STATE(121)] = 6367,
  [SMALL_STATE(122)] = 6398,
  [SMALL_STATE(123)] = 6429,
  [SMALL_STATE(124)] = 6460,
  [SMALL_STATE(125)] = 6486,
  [SMALL_STATE(126)] = 6512,
  [SMALL_STATE(127)] = 6538,
  [SMALL_STATE(128)] = 6564,
  [SMALL_STATE(129)] = 6590,
  [SMALL_STATE(130)] = 6616,
  [SMALL_STATE(131)] = 6642,
  [SMALL_STATE(132)] = 6668,
  [SMALL_STATE(133)] = 6694,
  [SMALL_STATE(134)] = 6720,
  [SMALL_STATE(135)] = 6746,
  [SMALL_STATE(136)] = 6772,
  [SMALL_STATE(137)] = 6798,
  [SMALL_STATE(138)] = 6824,
  [SMALL_STATE(139)] = 6850,
  [SMALL_STATE(140)] = 6876,
  [SMALL_STATE(141)] = 6902,
  [SMALL_STATE(142)] = 6931,
  [SMALL_STATE(143)] = 6956,
  [SMALL_STATE(144)] = 6985,
  [SMALL_STATE(145)] = 7010,
  [SMALL_STATE(146)] = 7045,
  [SMALL_STATE(147)] = 7076,
  [SMALL_STATE(148)] = 7105,
  [SMALL_STATE(149)] = 7132,
  [SMALL_STATE(150)] = 7157,
  [SMALL_STATE(151)] = 7182,
  [SMALL_STATE(152)] = 7207,
  [SMALL_STATE(153)] = 7236,
  [SMALL_STATE(154)] = 7260,
  [SMALL_STATE(155)] = 7284,
  [SMALL_STATE(156)] = 7308,
  [SMALL_STATE(157)] = 7332,
  [SMALL_STATE(158)] = 7356,
  [SMALL_STATE(159)] = 7380,
  [SMALL_STATE(160)] = 7404,
  [SMALL_STATE(161)] = 7428,
  [SMALL_STATE(162)] = 7452,
  [SMALL_STATE(163)] = 7476,
  [SMALL_STATE(164)] = 7500,
  [SMALL_STATE(165)] = 7524,
  [SMALL_STATE(166)] = 7548,
  [SMALL_STATE(167)] = 7572,
  [SMALL_STATE(168)] = 7596,
  [SMALL_STATE(169)] = 7620,
  [SMALL_STATE(170)] = 7644,
  [SMALL_STATE(171)] = 7668,
  [SMALL_STATE(172)] = 7695,
  [SMALL_STATE(173)] = 7726,
  [SMALL_STATE(174)] = 7749,
  [SMALL_STATE(175)] = 7772,
  [SMALL_STATE(176)] = 7797,
  [SMALL_STATE(177)] = 7820,
  [SMALL_STATE(178)] = 7843,
  [SMALL_STATE(179)] = 7868,
  [SMALL_STATE(180)] = 7891,
  [SMALL_STATE(181)] = 7915,
  [SMALL_STATE(182)] = 7938,
  [SMALL_STATE(183)] = 7966,
  [SMALL_STATE(184)] = 7994,
  [SMALL_STATE(185)] = 8021,
  [SMALL_STATE(186)] = 8048,
  [SMALL_STATE(187)] = 8072,
  [SMALL_STATE(188)] = 8096,
  [SMALL_STATE(189)] = 8120,
  [SMALL_STATE(190)] = 8144,
  [SMALL_STATE(191)] = 8165,
  [SMALL_STATE(192)] = 8186,
  [SMALL_STATE(193)] = 8207,
  [SMALL_STATE(194)] = 8225,
  [SMALL_STATE(195)] = 8243,
  [SMALL_STATE(196)] = 8261,
  [SMALL_STATE(197)] = 8279,
  [SMALL_STATE(198)] = 8295,
  [SMALL_STATE(199)] = 8311,
  [SMALL_STATE(200)] = 8329,
  [SMALL_STATE(201)] = 8348,
  [SMALL_STATE(202)] = 8367,
  [SMALL_STATE(203)] = 8380,
  [SMALL_STATE(204)] = 8395,
  [SMALL_STATE(205)] = 8408,
  [SMALL_STATE(206)] = 8423,
  [SMALL_STATE(207)] = 8442,
  [SMALL_STATE(208)] = 8461,
  [SMALL_STATE(209)] = 8474,
  [SMALL_STATE(210)] = 8487,
  [SMALL_STATE(211)] = 8498,
  [SMALL_STATE(212)] = 8517,
  [SMALL_STATE(213)] = 8536,
  [SMALL_STATE(214)] = 8551,
  [SMALL_STATE(215)] = 8564,
  [SMALL_STATE(216)] = 8583,
  [SMALL_STATE(217)] = 8602,
  [SMALL_STATE(218)] = 8616,
  [SMALL_STATE(219)] = 8632,
  [SMALL_STATE(220)] = 8646,
  [SMALL_STATE(221)] = 8658,
  [SMALL_STATE(222)] = 8674,
  [SMALL_STATE(223)] = 8690,
  [SMALL_STATE(224)] = 8706,
  [SMALL_STATE(225)] = 8722,
  [SMALL_STATE(226)] = 8738,
  [SMALL_STATE(227)] = 8754,
  [SMALL_STATE(228)] = 8768,
  [SMALL_STATE(229)] = 8782,
  [SMALL_STATE(230)] = 8798,
  [SMALL_STATE(231)] = 8814,
  [SMALL_STATE(232)] = 8830,
  [SMALL_STATE(233)] = 8846,
  [SMALL_STATE(234)] = 8860,
  [SMALL_STATE(235)] = 8876,
  [SMALL_STATE(236)] = 8892,
  [SMALL_STATE(237)] = 8908,
  [SMALL_STATE(238)] = 8924,
  [SMALL_STATE(239)] = 8938,
  [SMALL_STATE(240)] = 8954,
  [SMALL_STATE(241)] = 8968,
  [SMALL_STATE(242)] = 8984,
  [SMALL_STATE(243)] = 9000,
  [SMALL_STATE(244)] = 9014,
  [SMALL_STATE(245)] = 9030,
  [SMALL_STATE(246)] = 9046,
  [SMALL_STATE(247)] = 9062,
  [SMALL_STATE(248)] = 9078,
  [SMALL_STATE(249)] = 9094,
  [SMALL_STATE(250)] = 9108,
  [SMALL_STATE(251)] = 9124,
  [SMALL_STATE(252)] = 9140,
  [SMALL_STATE(253)] = 9156,
  [SMALL_STATE(254)] = 9172,
  [SMALL_STATE(255)] = 9188,
  [SMALL_STATE(256)] = 9204,
  [SMALL_STATE(257)] = 9220,
  [SMALL_STATE(258)] = 9236,
  [SMALL_STATE(259)] = 9252,
  [SMALL_STATE(260)] = 9264,
  [SMALL_STATE(261)] = 9277,
  [SMALL_STATE(262)] = 9290,
  [SMALL_STATE(263)] = 9303,
  [SMALL_STATE(264)] = 9316,
  [SMALL_STATE(265)] = 9329,
  [SMALL_STATE(266)] = 9342,
  [SMALL_STATE(267)] = 9353,
  [SMALL_STATE(268)] = 9366,
  [SMALL_STATE(269)] = 9379,
  [SMALL_STATE(270)] = 9392,
  [SMALL_STATE(271)] = 9405,
  [SMALL_STATE(272)] = 9418,
  [SMALL_STATE(273)] = 9431,
  [SMALL_STATE(274)] = 9442,
  [SMALL_STATE(275)] = 9455,
  [SMALL_STATE(276)] = 9468,
  [SMALL_STATE(277)] = 9481,
  [SMALL_STATE(278)] = 9494,
  [SMALL_STATE(279)] = 9507,
  [SMALL_STATE(280)] = 9520,
  [SMALL_STATE(281)] = 9533,
  [SMALL_STATE(282)] = 9546,
  [SMALL_STATE(283)] = 9559,
  [SMALL_STATE(284)] = 9570,
  [SMALL_STATE(285)] = 9583,
  [SMALL_STATE(286)] = 9596,
  [SMALL_STATE(287)] = 9609,
  [SMALL_STATE(288)] = 9622,
  [SMALL_STATE(289)] = 9635,
  [SMALL_STATE(290)] = 9646,
  [SMALL_STATE(291)] = 9659,
  [SMALL_STATE(292)] = 9672,
  [SMALL_STATE(293)] = 9685,
  [SMALL_STATE(294)] = 9698,
  [SMALL_STATE(295)] = 9711,
  [SMALL_STATE(296)] = 9721,
  [SMALL_STATE(297)] = 9729,
  [SMALL_STATE(298)] = 9737,
  [SMALL_STATE(299)] = 9745,
  [SMALL_STATE(300)] = 9755,
  [SMALL_STATE(301)] = 9765,
  [SMALL_STATE(302)] = 9775,
  [SMALL_STATE(303)] = 9785,
  [SMALL_STATE(304)] = 9795,
  [SMALL_STATE(305)] = 9803,
  [SMALL_STATE(306)] = 9813,
  [SMALL_STATE(307)] = 9823,
  [SMALL_STATE(308)] = 9833,
  [SMALL_STATE(309)] = 9843,
  [SMALL_STATE(310)] = 9853,
  [SMALL_STATE(311)] = 9863,
  [SMALL_STATE(312)] = 9873,
  [SMALL_STATE(313)] = 9883,
  [SMALL_STATE(314)] = 9891,
  [SMALL_STATE(315)] = 9901,
  [SMALL_STATE(316)] = 9911,
  [SMALL_STATE(317)] = 9919,
  [SMALL_STATE(318)] = 9929,
  [SMALL_STATE(319)] = 9939,
  [SMALL_STATE(320)] = 9947,
  [SMALL_STATE(321)] = 9957,
  [SMALL_STATE(322)] = 9967,
  [SMALL_STATE(323)] = 9977,
  [SMALL_STATE(324)] = 9987,
  [SMALL_STATE(325)] = 9997,
  [SMALL_STATE(326)] = 10007,
  [SMALL_STATE(327)] = 10014,
  [SMALL_STATE(328)] = 10021,
  [SMALL_STATE(329)] = 10028,
  [SMALL_STATE(330)] = 10035,
  [SMALL_STATE(331)] = 10042,
  [SMALL_STATE(332)] = 10049,
  [SMALL_STATE(333)] = 10056,
  [SMALL_STATE(334)] = 10063,
  [SMALL_STATE(335)] = 10070,
  [SMALL_STATE(336)] = 10077,
  [SMALL_STATE(337)] = 10084,
  [SMALL_STATE(338)] = 10091,
  [SMALL_STATE(339)] = 10098,
  [SMALL_STATE(340)] = 10105,
  [SMALL_STATE(341)] = 10112,
  [SMALL_STATE(342)] = 10119,
  [SMALL_STATE(343)] = 10126,
  [SMALL_STATE(344)] = 10133,
  [SMALL_STATE(345)] = 10140,
  [SMALL_STATE(346)] = 10147,
  [SMALL_STATE(347)] = 10154,
  [SMALL_STATE(348)] = 10161,
  [SMALL_STATE(349)] = 10168,
  [SMALL_STATE(350)] = 10175,
  [SMALL_STATE(351)] = 10182,
  [SMALL_STATE(352)] = 10189,
  [SMALL_STATE(353)] = 10196,
  [SMALL_STATE(354)] = 10203,
  [SMALL_STATE(355)] = 10210,
  [SMALL_STATE(356)] = 10217,
  [SMALL_STATE(357)] = 10224,
  [SMALL_STATE(358)] = 10231,
  [SMALL_STATE(359)] = 10238,
  [SMALL_STATE(360)] = 10245,
  [SMALL_STATE(361)] = 10252,
  [SMALL_STATE(362)] = 10259,
  [SMALL_STATE(363)] = 10266,
  [SMALL_STATE(364)] = 10273,
  [SMALL_STATE(365)] = 10280,
  [SMALL_STATE(366)] = 10287,
  [SMALL_STATE(367)] = 10294,
  [SMALL_STATE(368)] = 10301,
  [SMALL_STATE(369)] = 10308,
  [SMALL_STATE(370)] = 10315,
  [SMALL_STATE(371)] = 10322,
  [SMALL_STATE(372)] = 10329,
  [SMALL_STATE(373)] = 10336,
  [SMALL_STATE(374)] = 10343,
  [SMALL_STATE(375)] = 10350,
  [SMALL_STATE(376)] = 10357,
  [SMALL_STATE(377)] = 10364,
  [SMALL_STATE(378)] = 10371,
  [SMALL_STATE(379)] = 10378,
  [SMALL_STATE(380)] = 10385,
  [SMALL_STATE(381)] = 10392,
  [SMALL_STATE(382)] = 10399,
  [SMALL_STATE(383)] = 10406,
  [SMALL_STATE(384)] = 10413,
  [SMALL_STATE(385)] = 10420,
  [SMALL_STATE(386)] = 10427,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(375),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(261),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(381),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(380),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(376),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(375),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(373),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(119),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(120),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__complex_expression, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__operand_expression, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__complex_expression, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__operand_expression, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_expression, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement_list, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_expression, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex_invocation_expression, 4, .production_id = 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex_invocation_expression, 4, .production_id = 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_member_access_repeat1, 2), SHIFT_REPEAT(341),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_member_access_repeat1, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_member_access_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex_invocation_expression, 3, .production_id = 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex_invocation_expression, 3, .production_id = 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member_access, 2, .production_id = 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_member_access, 2, .production_id = 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_literal, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_literal, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 5),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 5),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 4),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float_literal, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float_literal, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 5),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 5),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 5, .production_id = 21),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 5, .production_id = 21),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_literal, 3, .production_id = 10),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_literal, 3, .production_id = 10),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict_literal, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_literal, 3),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 3),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_member_access_repeat1, 2, .production_id = 12),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_member_access_repeat1, 2, .production_id = 12),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 4, .production_id = 14),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 4, .production_id = 14),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_literal, 4, .production_id = 15),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_literal, 4, .production_id = 15),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_literal, 4),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_literal, 4),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_body, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_body, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_body, 3),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_body, 3),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_member_access_repeat1, 2), SHIFT_REPEAT(360),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_expression, 3, .production_id = 9),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_expression, 3, .production_id = 9),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [352] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_member_access_repeat1, 2), SHIFT_REPEAT(362),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_member_access_repeat1, 2), SHIFT_REPEAT(347),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 11),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_case_list, 2),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_case_list, 1),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_enum_case_list_repeat1, 2),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_case_list_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__enum_case, 2),
  [426] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__enum_case, 2), SHIFT_REPEAT(377),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__enum_case, 2), SHIFT_REPEAT(369),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__enum_case, 2),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__enum_case, 2), SHIFT_REPEAT(202),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_case_list, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_case_list, 3),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_case_list, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 2, .production_id = 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 2, .production_id = 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 2, .production_id = 1),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 2, .production_id = 1),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [473] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(330),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__enum_case, 1, .production_id = 18),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__enum_case, 1, .production_id = 18),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_list, 4),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 4, .production_id = 1),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 4, .production_id = 1),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_list, 2),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 1),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 5, .production_id = 24),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 5, .production_id = 24),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_declaration, 4, .production_id = 1),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_declaration, 4, .production_id = 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simple_invocation_expression, 2, .production_id = 3),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_list, 3),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_declaration, 5, .production_id = 23),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_declaration, 5, .production_id = 23),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_module, 1),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_module, 1),
  [538] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [546] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2),
  [554] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2), SHIFT_REPEAT(79),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2), SHIFT_REPEAT(48),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_literal_repeat1, 2),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [592] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 2, .production_id = 1),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [610] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_complex_invocation_expression, 2, .production_id = 3),
  [618] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_complex_invocation_expression, 2, .production_id = 3),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [626] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_module, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_module, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2), SHIFT_REPEAT(80),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_literal_repeat1, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_case_list, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(249),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_case_list, 2),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__type_case_list_repeat1, 2),
  [660] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__type_case_list_repeat1, 2), SHIFT_REPEAT(307),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [665] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_import_module_repeat1, 2), SHIFT_REPEAT(365),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_module_repeat1, 2),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_module_repeat1, 2),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(326),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_value, 1, .production_id = 17),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_value, 1, .production_id = 17),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 2),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 2, .production_id = 1),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2), SHIFT_REPEAT(23),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_module, 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_module, 3),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 4, .production_id = 13),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_list, 1),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_case_list, 3),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_list, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_data_property_list_repeat1, 2),
  [740] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_property_list_repeat1, 2), SHIFT_REPEAT(220),
  [743] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_complex_invocation_expression_repeat1, 2), SHIFT_REPEAT(85),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_case_list_repeat1, 2), SHIFT_REPEAT(199),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_case_list, 3),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_simple_invocation_expression, 2, .production_id = 3),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_import_members_repeat1, 2),
  [757] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_members_repeat1, 2), SHIFT_REPEAT(372),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter_list, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_list, 3),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement_list, 1),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3, .production_id = 6),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3, .production_id = 6),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_case, 3, .production_id = 25),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 3, .production_id = 7),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, .production_id = 7),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 16),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 16),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict_entry, 3, .production_id = 19),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement_list_repeat1, 2),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_property_list_repeat1, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_members_repeat1, 2),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_property_function, 2, .production_id = 22),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_property_function, 2, .production_id = 22),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 5, .production_id = 23),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 3, .production_id = 8),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 5),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 2),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_declaration, 2, .production_id = 1),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 4),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_members, 3),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 5, .production_id = 20),
  [894] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [904] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern_declaration, 4, .production_id = 1),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 3, .production_id = 5),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_lithia(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
