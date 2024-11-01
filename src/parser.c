#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 372
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 142
#define ALIAS_COUNT 0
#define TOKEN_COUNT 88
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  sym_comment = 2,
  anon_sym_comment = 3,
  aux_sym_block_comment_token1 = 4,
  anon_sym_end = 5,
  anon_sym_endcomment = 6,
  anon_sym_test = 7,
  anon_sym_endtest = 8,
  anon_sym_DASH = 9,
  anon_sym_DASH_DASH = 10,
  aux_sym_option_token1 = 11,
  anon_sym_EQ = 12,
  aux_sym_option_value_token1 = 13,
  anon_sym_account = 14,
  anon_sym_eval = 15,
  aux_sym_eval_subdirective_token1 = 16,
  anon_sym_payee = 17,
  anon_sym_commodity = 18,
  anon_sym_nomarket = 19,
  anon_sym_tag = 20,
  aux_sym_tag_directive_token1 = 21,
  anon_sym_include = 22,
  anon_sym_alias = 23,
  aux_sym_word_directive_token1 = 24,
  anon_sym_def = 25,
  anon_sym_year = 26,
  aux_sym_word_directive_token2 = 27,
  anon_sym_bucket = 28,
  anon_sym_A = 29,
  anon_sym_Y = 30,
  anon_sym_N = 31,
  anon_sym_D = 32,
  anon_sym_C = 33,
  anon_sym_P = 34,
  anon_sym_default = 35,
  anon_sym_format = 36,
  anon_sym_note = 37,
  anon_sym_assert = 38,
  anon_sym_check = 39,
  anon_sym_i = 40,
  anon_sym_I = 41,
  anon_sym_o = 42,
  anon_sym_O = 43,
  anon_sym_TILDE = 44,
  aux_sym_interval_token1 = 45,
  aux_sym_interval_token2 = 46,
  aux_sym_interval_token3 = 47,
  aux_sym_interval_token4 = 48,
  aux_sym_interval_token5 = 49,
  aux_sym_interval_token6 = 50,
  aux_sym_interval_token7 = 51,
  aux_sym_interval_token8 = 52,
  aux_sym_interval_token9 = 53,
  aux_sym_interval_token10 = 54,
  aux_sym_interval_token11 = 55,
  aux_sym_interval_token12 = 56,
  aux_sym_interval_token13 = 57,
  aux_sym_interval_token14 = 58,
  aux_sym_interval_token15 = 59,
  aux_sym_interval_token16 = 60,
  aux_sym_interval_token17 = 61,
  sym__dsep = 62,
  sym__2d = 63,
  sym_time = 64,
  anon_sym_STAR = 65,
  anon_sym_BANG = 66,
  anon_sym_LPAREN = 67,
  aux_sym_code_token1 = 68,
  anon_sym_RPAREN = 69,
  sym_payee = 70,
  sym_query = 71,
  anon_sym_SEMI = 72,
  anon_sym_LBRACK = 73,
  anon_sym_RBRACK = 74,
  aux_sym_note_token1 = 75,
  sym_account_name = 76,
  sym__quantity = 77,
  anon_sym_PLUS = 78,
  aux_sym_commodity_token1 = 79,
  aux_sym_commodity_token2 = 80,
  aux_sym_commodity_token3 = 81,
  anon_sym_AT = 82,
  anon_sym_AT_AT = 83,
  anon_sym_SPACE = 84,
  anon_sym_TAB = 85,
  anon_sym_ = 86,
  anon_sym_TAB2 = 87,
  sym_source_file = 88,
  sym_journal_item = 89,
  sym_block_comment = 90,
  sym_test = 91,
  sym_option = 92,
  sym_option_value = 93,
  sym_directive = 94,
  sym_account_directive = 95,
  sym_account_subdirective = 96,
  sym_eval_subdirective = 97,
  sym_payee_subdirective = 98,
  sym_commodity_directive = 99,
  sym_commodity_subdirective = 100,
  sym_nomarket_subdirective = 101,
  sym_tag_directive = 102,
  sym_word_directive = 103,
  sym_filename = 104,
  sym_char_directive = 105,
  sym_alias_subdirective = 106,
  sym_default_subdirective = 107,
  sym_format_subdirective = 108,
  sym_note_subdirective = 109,
  sym_assert_subdirective = 110,
  sym_check_subdirective = 111,
  sym_check_in = 112,
  sym_check_out = 113,
  sym_xact = 114,
  sym_plain_xact = 115,
  sym_periodic_xact = 116,
  sym_interval = 117,
  sym_automated_xact = 118,
  sym__xact_date = 119,
  sym_date = 120,
  sym_effective_date = 121,
  sym__4d = 122,
  sym__single_date = 123,
  sym_status = 124,
  sym_code = 125,
  sym_note = 126,
  sym_posting = 127,
  sym_account = 128,
  sym_amount = 129,
  sym_quantity = 130,
  sym_negative_quantity = 131,
  sym_commodity = 132,
  sym_price = 133,
  sym_balance_assertion = 134,
  aux_sym_source_file_repeat1 = 135,
  aux_sym_block_comment_repeat1 = 136,
  aux_sym_account_directive_repeat1 = 137,
  aux_sym_commodity_directive_repeat1 = 138,
  aux_sym_tag_directive_repeat1 = 139,
  aux_sym_plain_xact_repeat1 = 140,
  aux_sym_whitespace_repeat1 = 141,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_comment] = "comment",
  [anon_sym_comment] = "comment",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_end] = "end",
  [anon_sym_endcomment] = "end comment",
  [anon_sym_test] = "test",
  [anon_sym_endtest] = "end test",
  [anon_sym_DASH] = "-",
  [anon_sym_DASH_DASH] = "--",
  [aux_sym_option_token1] = "option_token1",
  [anon_sym_EQ] = "=",
  [aux_sym_option_value_token1] = "option_value_token1",
  [anon_sym_account] = "account",
  [anon_sym_eval] = "eval",
  [aux_sym_eval_subdirective_token1] = "value",
  [anon_sym_payee] = "payee",
  [anon_sym_commodity] = "commodity",
  [anon_sym_nomarket] = "nomarket",
  [anon_sym_tag] = "tag",
  [aux_sym_tag_directive_token1] = "tag",
  [anon_sym_include] = "include",
  [anon_sym_alias] = "alias",
  [aux_sym_word_directive_token1] = "name",
  [anon_sym_def] = "def",
  [anon_sym_year] = "year",
  [aux_sym_word_directive_token2] = "word_directive_token2",
  [anon_sym_bucket] = "bucket",
  [anon_sym_A] = "A",
  [anon_sym_Y] = "Y",
  [anon_sym_N] = "N",
  [anon_sym_D] = "D",
  [anon_sym_C] = "C",
  [anon_sym_P] = "P",
  [anon_sym_default] = "default",
  [anon_sym_format] = "format",
  [anon_sym_note] = "note",
  [anon_sym_assert] = "assert",
  [anon_sym_check] = "check",
  [anon_sym_i] = "i",
  [anon_sym_I] = "I",
  [anon_sym_o] = "o",
  [anon_sym_O] = "O",
  [anon_sym_TILDE] = "~",
  [aux_sym_interval_token1] = "interval_token1",
  [aux_sym_interval_token2] = "interval_token2",
  [aux_sym_interval_token3] = "interval_token3",
  [aux_sym_interval_token4] = "interval_token4",
  [aux_sym_interval_token5] = "interval_token5",
  [aux_sym_interval_token6] = "interval_token6",
  [aux_sym_interval_token7] = "interval_token7",
  [aux_sym_interval_token8] = "interval_token8",
  [aux_sym_interval_token9] = "interval_token9",
  [aux_sym_interval_token10] = "interval_token10",
  [aux_sym_interval_token11] = "interval_token11",
  [aux_sym_interval_token12] = "interval_token12",
  [aux_sym_interval_token13] = "interval_token13",
  [aux_sym_interval_token14] = "interval_token14",
  [aux_sym_interval_token15] = "interval_token15",
  [aux_sym_interval_token16] = "interval_token16",
  [aux_sym_interval_token17] = "interval_token17",
  [sym__dsep] = "_dsep",
  [sym__2d] = "_2d",
  [sym_time] = "time",
  [anon_sym_STAR] = "*",
  [anon_sym_BANG] = "!",
  [anon_sym_LPAREN] = "(",
  [aux_sym_code_token1] = "code_token1",
  [anon_sym_RPAREN] = ")",
  [sym_payee] = "payee",
  [sym_query] = "query",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_note_token1] = "note_token1",
  [sym_account_name] = "",
  [sym__quantity] = "_quantity",
  [anon_sym_PLUS] = "+",
  [aux_sym_commodity_token1] = "commodity_token1",
  [aux_sym_commodity_token2] = "commodity_token2",
  [aux_sym_commodity_token3] = "commodity_token3",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_SPACE] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_] = "  ",
  [anon_sym_TAB2] = " \t",
  [sym_source_file] = "source_file",
  [sym_journal_item] = "journal_item",
  [sym_block_comment] = "block_comment",
  [sym_test] = "test",
  [sym_option] = "option",
  [sym_option_value] = "option_value",
  [sym_directive] = "directive",
  [sym_account_directive] = "account_directive",
  [sym_account_subdirective] = "account_subdirective",
  [sym_eval_subdirective] = "eval_subdirective",
  [sym_payee_subdirective] = "payee_subdirective",
  [sym_commodity_directive] = "commodity_directive",
  [sym_commodity_subdirective] = "commodity_subdirective",
  [sym_nomarket_subdirective] = "nomarket_subdirective",
  [sym_tag_directive] = "tag_directive",
  [sym_word_directive] = "word_directive",
  [sym_filename] = "filename",
  [sym_char_directive] = "char_directive",
  [sym_alias_subdirective] = "alias_subdirective",
  [sym_default_subdirective] = "default_subdirective",
  [sym_format_subdirective] = "format_subdirective",
  [sym_note_subdirective] = "note_subdirective",
  [sym_assert_subdirective] = "assert_subdirective",
  [sym_check_subdirective] = "check_subdirective",
  [sym_check_in] = "check_in",
  [sym_check_out] = "check_out",
  [sym_xact] = "xact",
  [sym_plain_xact] = "plain_xact",
  [sym_periodic_xact] = "periodic_xact",
  [sym_interval] = "interval",
  [sym_automated_xact] = "automated_xact",
  [sym__xact_date] = "_xact_date",
  [sym_date] = "date",
  [sym_effective_date] = "effective_date",
  [sym__4d] = "_4d",
  [sym__single_date] = "_single_date",
  [sym_status] = "status",
  [sym_code] = "code",
  [sym_note] = "note",
  [sym_posting] = "posting",
  [sym_account] = "account",
  [sym_amount] = "amount",
  [sym_quantity] = "quantity",
  [sym_negative_quantity] = "negative_quantity",
  [sym_commodity] = "commodity",
  [sym_price] = "price",
  [sym_balance_assertion] = "balance_assertion",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
  [aux_sym_account_directive_repeat1] = "account_directive_repeat1",
  [aux_sym_commodity_directive_repeat1] = "commodity_directive_repeat1",
  [aux_sym_tag_directive_repeat1] = "tag_directive_repeat1",
  [aux_sym_plain_xact_repeat1] = "plain_xact_repeat1",
  [aux_sym_whitespace_repeat1] = "whitespace_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_comment] = sym_comment,
  [anon_sym_comment] = anon_sym_comment,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_endcomment] = anon_sym_endcomment,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_endtest] = anon_sym_endtest,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [aux_sym_option_token1] = aux_sym_option_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_option_value_token1] = aux_sym_option_value_token1,
  [anon_sym_account] = anon_sym_account,
  [anon_sym_eval] = anon_sym_eval,
  [aux_sym_eval_subdirective_token1] = aux_sym_eval_subdirective_token1,
  [anon_sym_payee] = anon_sym_payee,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_nomarket] = anon_sym_nomarket,
  [anon_sym_tag] = anon_sym_tag,
  [aux_sym_tag_directive_token1] = aux_sym_tag_directive_token1,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_alias] = anon_sym_alias,
  [aux_sym_word_directive_token1] = aux_sym_word_directive_token1,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_year] = anon_sym_year,
  [aux_sym_word_directive_token2] = aux_sym_word_directive_token2,
  [anon_sym_bucket] = anon_sym_bucket,
  [anon_sym_A] = anon_sym_A,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_N] = anon_sym_N,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_C] = anon_sym_C,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_default] = anon_sym_default,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_check] = anon_sym_check,
  [anon_sym_i] = anon_sym_i,
  [anon_sym_I] = anon_sym_I,
  [anon_sym_o] = anon_sym_o,
  [anon_sym_O] = anon_sym_O,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym_interval_token1] = aux_sym_interval_token1,
  [aux_sym_interval_token2] = aux_sym_interval_token2,
  [aux_sym_interval_token3] = aux_sym_interval_token3,
  [aux_sym_interval_token4] = aux_sym_interval_token4,
  [aux_sym_interval_token5] = aux_sym_interval_token5,
  [aux_sym_interval_token6] = aux_sym_interval_token6,
  [aux_sym_interval_token7] = aux_sym_interval_token7,
  [aux_sym_interval_token8] = aux_sym_interval_token8,
  [aux_sym_interval_token9] = aux_sym_interval_token9,
  [aux_sym_interval_token10] = aux_sym_interval_token10,
  [aux_sym_interval_token11] = aux_sym_interval_token11,
  [aux_sym_interval_token12] = aux_sym_interval_token12,
  [aux_sym_interval_token13] = aux_sym_interval_token13,
  [aux_sym_interval_token14] = aux_sym_interval_token14,
  [aux_sym_interval_token15] = aux_sym_interval_token15,
  [aux_sym_interval_token16] = aux_sym_interval_token16,
  [aux_sym_interval_token17] = aux_sym_interval_token17,
  [sym__dsep] = sym__dsep,
  [sym__2d] = sym__2d,
  [sym_time] = sym_time,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_payee] = sym_payee,
  [sym_query] = sym_query,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_note_token1] = aux_sym_note_token1,
  [sym_account_name] = sym_account_name,
  [sym__quantity] = sym__quantity,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [aux_sym_commodity_token1] = aux_sym_commodity_token1,
  [aux_sym_commodity_token2] = aux_sym_commodity_token2,
  [aux_sym_commodity_token3] = aux_sym_commodity_token3,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_SPACE] = anon_sym_SPACE,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB2] = anon_sym_TAB2,
  [sym_source_file] = sym_source_file,
  [sym_journal_item] = sym_journal_item,
  [sym_block_comment] = sym_block_comment,
  [sym_test] = sym_test,
  [sym_option] = sym_option,
  [sym_option_value] = sym_option_value,
  [sym_directive] = sym_directive,
  [sym_account_directive] = sym_account_directive,
  [sym_account_subdirective] = sym_account_subdirective,
  [sym_eval_subdirective] = sym_eval_subdirective,
  [sym_payee_subdirective] = sym_payee_subdirective,
  [sym_commodity_directive] = sym_commodity_directive,
  [sym_commodity_subdirective] = sym_commodity_subdirective,
  [sym_nomarket_subdirective] = sym_nomarket_subdirective,
  [sym_tag_directive] = sym_tag_directive,
  [sym_word_directive] = sym_word_directive,
  [sym_filename] = sym_filename,
  [sym_char_directive] = sym_char_directive,
  [sym_alias_subdirective] = sym_alias_subdirective,
  [sym_default_subdirective] = sym_default_subdirective,
  [sym_format_subdirective] = sym_format_subdirective,
  [sym_note_subdirective] = sym_note_subdirective,
  [sym_assert_subdirective] = sym_assert_subdirective,
  [sym_check_subdirective] = sym_check_subdirective,
  [sym_check_in] = sym_check_in,
  [sym_check_out] = sym_check_out,
  [sym_xact] = sym_xact,
  [sym_plain_xact] = sym_plain_xact,
  [sym_periodic_xact] = sym_periodic_xact,
  [sym_interval] = sym_interval,
  [sym_automated_xact] = sym_automated_xact,
  [sym__xact_date] = sym__xact_date,
  [sym_date] = sym_date,
  [sym_effective_date] = sym_effective_date,
  [sym__4d] = sym__4d,
  [sym__single_date] = sym__single_date,
  [sym_status] = sym_status,
  [sym_code] = sym_code,
  [sym_note] = sym_note,
  [sym_posting] = sym_posting,
  [sym_account] = sym_account,
  [sym_amount] = sym_amount,
  [sym_quantity] = sym_quantity,
  [sym_negative_quantity] = sym_negative_quantity,
  [sym_commodity] = sym_commodity,
  [sym_price] = sym_price,
  [sym_balance_assertion] = sym_balance_assertion,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
  [aux_sym_account_directive_repeat1] = aux_sym_account_directive_repeat1,
  [aux_sym_commodity_directive_repeat1] = aux_sym_commodity_directive_repeat1,
  [aux_sym_tag_directive_repeat1] = aux_sym_tag_directive_repeat1,
  [aux_sym_plain_xact_repeat1] = aux_sym_plain_xact_repeat1,
  [aux_sym_whitespace_repeat1] = aux_sym_whitespace_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endcomment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endtest] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_option_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_option_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_account] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eval] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_eval_subdirective_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_payee] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commodity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nomarket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_year] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_bucket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_A] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Y] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_N] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_check] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_o] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_O] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interval_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token7] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token8] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token9] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token10] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token11] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token12] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token13] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token14] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token15] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token16] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interval_token17] = {
    .visible = false,
    .named = false,
  },
  [sym__dsep] = {
    .visible = false,
    .named = true,
  },
  [sym__2d] = {
    .visible = false,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_payee] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
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
  [aux_sym_note_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_account_name] = {
    .visible = true,
    .named = false,
  },
  [sym__quantity] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_commodity_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_token3] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SPACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB2] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_journal_item] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_test] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_option_value] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_account_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_account_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_eval_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_payee_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_nomarket_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_word_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_char_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_alias_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_default_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_format_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_note_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_assert_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_check_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_check_in] = {
    .visible = true,
    .named = true,
  },
  [sym_check_out] = {
    .visible = true,
    .named = true,
  },
  [sym_xact] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_xact] = {
    .visible = true,
    .named = true,
  },
  [sym_periodic_xact] = {
    .visible = true,
    .named = true,
  },
  [sym_interval] = {
    .visible = true,
    .named = true,
  },
  [sym_automated_xact] = {
    .visible = true,
    .named = true,
  },
  [sym__xact_date] = {
    .visible = false,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_effective_date] = {
    .visible = true,
    .named = true,
  },
  [sym__4d] = {
    .visible = false,
    .named = true,
  },
  [sym__single_date] = {
    .visible = false,
    .named = true,
  },
  [sym_status] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_posting] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_negative_quantity] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_balance_assertion] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_account_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_plain_xact_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_whitespace_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_account_name,
  },
  [2] = {
    [2] = aux_sym_eval_subdirective_token1,
  },
  [3] = {
    [0] = sym_account_name,
    [2] = sym_account_name,
  },
  [4] = {
    [4] = aux_sym_eval_subdirective_token1,
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
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 23,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 21,
  [53] = 22,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 46,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 78,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 78,
  [99] = 99,
  [100] = 10,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 22,
  [109] = 109,
  [110] = 110,
  [111] = 23,
  [112] = 21,
  [113] = 113,
  [114] = 78,
  [115] = 78,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 125,
  [132] = 132,
  [133] = 133,
  [134] = 130,
  [135] = 133,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 50,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 51,
  [161] = 161,
  [162] = 152,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 78,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 174,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 177,
  [182] = 182,
  [183] = 78,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 78,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
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
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 194,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 78,
  [240] = 240,
  [241] = 241,
  [242] = 238,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 78,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 78,
  [268] = 78,
  [269] = 269,
  [270] = 78,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 360,
  [361] = 361,
  [362] = 362,
  [363] = 363,
  [364] = 347,
  [365] = 320,
  [366] = 329,
  [367] = 362,
  [368] = 320,
  [369] = 329,
  [370] = 370,
  [371] = 371,
};

static TSCharacterRange aux_sym_tag_directive_token1_character_set_1[] = {
  {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6}, {0xf8, 0x2c1},
  {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d}, {0x37f, 0x37f},
  {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f}, {0x531, 0x556},
  {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3}, {0x6d5, 0x6d5},
  {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5}, {0x7b1, 0x7b1},
  {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828}, {0x840, 0x858},
  {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950}, {0x958, 0x961},
  {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9}, {0x9bd, 0x9bd},
  {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10}, {0xa13, 0xa28},
  {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74}, {0xa85, 0xa8d},
  {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0}, {0xae0, 0xae1},
  {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39}, {0xb3d, 0xb3d},
  {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95}, {0xb99, 0xb9a},
  {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c}, {0xc0e, 0xc10},
  {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80}, {0xc85, 0xc8c},
  {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1}, {0xcf1, 0xcf2},
  {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61}, {0xd7a, 0xd7f},
  {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe33}, {0xe40, 0xe46},
  {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3}, {0xebd, 0xebd},
  {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c}, {0x1000, 0x102a},
  {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081}, {0x108e, 0x108e},
  {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256}, {0x1258, 0x1258},
  {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0}, {0x12c2, 0x12c5},
  {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd}, {0x1401, 0x166c},
  {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751}, {0x1760, 0x176c},
  {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8}, {0x18aa, 0x18aa},
  {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16}, {0x1a20, 0x1a54},
  {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23}, {0x1c4d, 0x1c4f},
  {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6}, {0x1cfa, 0x1cfa},
  {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59}, {0x1f5b, 0x1f5b},
  {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc}, {0x1fd0, 0x1fd3},
  {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c}, {0x2102, 0x2102},
  {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128}, {0x212a, 0x212d},
  {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee}, {0x2cf2, 0x2cf3},
  {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6}, {0x2da8, 0x2dae},
  {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f}, {0x3005, 0x3006},
  {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f}, {0x3131, 0x318e},
  {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd}, {0xa500, 0xa60c},
  {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f}, {0xa722, 0xa788}, {0xa78b, 0xa7ca},
  {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822}, {0xa840, 0xa873},
  {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c}, {0xa984, 0xa9b2},
  {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b}, {0xaa60, 0xaa76},
  {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2}, {0xaadb, 0xaadd},
  {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e}, {0xab30, 0xab5a},
  {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d}, {0xfa70, 0xfad9},
  {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e}, {0xfb40, 0xfb41},
  {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74}, {0xfe76, 0xfefc},
  {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc}, {0x10000, 0x1000b},
  {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10280, 0x1029c}, {0x102a0, 0x102d0},
  {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf}, {0x10400, 0x1049d},
  {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592}, {0x10594, 0x10595},
  {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767}, {0x10780, 0x10785},
  {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c}, {0x1083f, 0x10855},
  {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static TSCharacterRange aux_sym_tag_directive_token1_character_set_2[] = {
  {'\n', '\n'}, {'A', 'Z'}, {'a', 'z'}, {0xaa, 0xaa}, {0xb5, 0xb5}, {0xba, 0xba}, {0xc0, 0xd6}, {0xd8, 0xf6},
  {0xf8, 0x2c1}, {0x2c6, 0x2d1}, {0x2e0, 0x2e4}, {0x2ec, 0x2ec}, {0x2ee, 0x2ee}, {0x370, 0x374}, {0x376, 0x377}, {0x37a, 0x37d},
  {0x37f, 0x37f}, {0x386, 0x386}, {0x388, 0x38a}, {0x38c, 0x38c}, {0x38e, 0x3a1}, {0x3a3, 0x3f5}, {0x3f7, 0x481}, {0x48a, 0x52f},
  {0x531, 0x556}, {0x559, 0x559}, {0x560, 0x588}, {0x5d0, 0x5ea}, {0x5ef, 0x5f2}, {0x620, 0x64a}, {0x66e, 0x66f}, {0x671, 0x6d3},
  {0x6d5, 0x6d5}, {0x6e5, 0x6e6}, {0x6ee, 0x6ef}, {0x6fa, 0x6fc}, {0x6ff, 0x6ff}, {0x710, 0x710}, {0x712, 0x72f}, {0x74d, 0x7a5},
  {0x7b1, 0x7b1}, {0x7ca, 0x7ea}, {0x7f4, 0x7f5}, {0x7fa, 0x7fa}, {0x800, 0x815}, {0x81a, 0x81a}, {0x824, 0x824}, {0x828, 0x828},
  {0x840, 0x858}, {0x860, 0x86a}, {0x870, 0x887}, {0x889, 0x88e}, {0x8a0, 0x8c9}, {0x904, 0x939}, {0x93d, 0x93d}, {0x950, 0x950},
  {0x958, 0x961}, {0x971, 0x980}, {0x985, 0x98c}, {0x98f, 0x990}, {0x993, 0x9a8}, {0x9aa, 0x9b0}, {0x9b2, 0x9b2}, {0x9b6, 0x9b9},
  {0x9bd, 0x9bd}, {0x9ce, 0x9ce}, {0x9dc, 0x9dd}, {0x9df, 0x9e1}, {0x9f0, 0x9f1}, {0x9fc, 0x9fc}, {0xa05, 0xa0a}, {0xa0f, 0xa10},
  {0xa13, 0xa28}, {0xa2a, 0xa30}, {0xa32, 0xa33}, {0xa35, 0xa36}, {0xa38, 0xa39}, {0xa59, 0xa5c}, {0xa5e, 0xa5e}, {0xa72, 0xa74},
  {0xa85, 0xa8d}, {0xa8f, 0xa91}, {0xa93, 0xaa8}, {0xaaa, 0xab0}, {0xab2, 0xab3}, {0xab5, 0xab9}, {0xabd, 0xabd}, {0xad0, 0xad0},
  {0xae0, 0xae1}, {0xaf9, 0xaf9}, {0xb05, 0xb0c}, {0xb0f, 0xb10}, {0xb13, 0xb28}, {0xb2a, 0xb30}, {0xb32, 0xb33}, {0xb35, 0xb39},
  {0xb3d, 0xb3d}, {0xb5c, 0xb5d}, {0xb5f, 0xb61}, {0xb71, 0xb71}, {0xb83, 0xb83}, {0xb85, 0xb8a}, {0xb8e, 0xb90}, {0xb92, 0xb95},
  {0xb99, 0xb9a}, {0xb9c, 0xb9c}, {0xb9e, 0xb9f}, {0xba3, 0xba4}, {0xba8, 0xbaa}, {0xbae, 0xbb9}, {0xbd0, 0xbd0}, {0xc05, 0xc0c},
  {0xc0e, 0xc10}, {0xc12, 0xc28}, {0xc2a, 0xc39}, {0xc3d, 0xc3d}, {0xc58, 0xc5a}, {0xc5d, 0xc5d}, {0xc60, 0xc61}, {0xc80, 0xc80},
  {0xc85, 0xc8c}, {0xc8e, 0xc90}, {0xc92, 0xca8}, {0xcaa, 0xcb3}, {0xcb5, 0xcb9}, {0xcbd, 0xcbd}, {0xcdd, 0xcde}, {0xce0, 0xce1},
  {0xcf1, 0xcf2}, {0xd04, 0xd0c}, {0xd0e, 0xd10}, {0xd12, 0xd3a}, {0xd3d, 0xd3d}, {0xd4e, 0xd4e}, {0xd54, 0xd56}, {0xd5f, 0xd61},
  {0xd7a, 0xd7f}, {0xd85, 0xd96}, {0xd9a, 0xdb1}, {0xdb3, 0xdbb}, {0xdbd, 0xdbd}, {0xdc0, 0xdc6}, {0xe01, 0xe30}, {0xe32, 0xe33},
  {0xe40, 0xe46}, {0xe81, 0xe82}, {0xe84, 0xe84}, {0xe86, 0xe8a}, {0xe8c, 0xea3}, {0xea5, 0xea5}, {0xea7, 0xeb0}, {0xeb2, 0xeb3},
  {0xebd, 0xebd}, {0xec0, 0xec4}, {0xec6, 0xec6}, {0xedc, 0xedf}, {0xf00, 0xf00}, {0xf40, 0xf47}, {0xf49, 0xf6c}, {0xf88, 0xf8c},
  {0x1000, 0x102a}, {0x103f, 0x103f}, {0x1050, 0x1055}, {0x105a, 0x105d}, {0x1061, 0x1061}, {0x1065, 0x1066}, {0x106e, 0x1070}, {0x1075, 0x1081},
  {0x108e, 0x108e}, {0x10a0, 0x10c5}, {0x10c7, 0x10c7}, {0x10cd, 0x10cd}, {0x10d0, 0x10fa}, {0x10fc, 0x1248}, {0x124a, 0x124d}, {0x1250, 0x1256},
  {0x1258, 0x1258}, {0x125a, 0x125d}, {0x1260, 0x1288}, {0x128a, 0x128d}, {0x1290, 0x12b0}, {0x12b2, 0x12b5}, {0x12b8, 0x12be}, {0x12c0, 0x12c0},
  {0x12c2, 0x12c5}, {0x12c8, 0x12d6}, {0x12d8, 0x1310}, {0x1312, 0x1315}, {0x1318, 0x135a}, {0x1380, 0x138f}, {0x13a0, 0x13f5}, {0x13f8, 0x13fd},
  {0x1401, 0x166c}, {0x166f, 0x167f}, {0x1681, 0x169a}, {0x16a0, 0x16ea}, {0x16f1, 0x16f8}, {0x1700, 0x1711}, {0x171f, 0x1731}, {0x1740, 0x1751},
  {0x1760, 0x176c}, {0x176e, 0x1770}, {0x1780, 0x17b3}, {0x17d7, 0x17d7}, {0x17dc, 0x17dc}, {0x1820, 0x1878}, {0x1880, 0x1884}, {0x1887, 0x18a8},
  {0x18aa, 0x18aa}, {0x18b0, 0x18f5}, {0x1900, 0x191e}, {0x1950, 0x196d}, {0x1970, 0x1974}, {0x1980, 0x19ab}, {0x19b0, 0x19c9}, {0x1a00, 0x1a16},
  {0x1a20, 0x1a54}, {0x1aa7, 0x1aa7}, {0x1b05, 0x1b33}, {0x1b45, 0x1b4c}, {0x1b83, 0x1ba0}, {0x1bae, 0x1baf}, {0x1bba, 0x1be5}, {0x1c00, 0x1c23},
  {0x1c4d, 0x1c4f}, {0x1c5a, 0x1c7d}, {0x1c80, 0x1c88}, {0x1c90, 0x1cba}, {0x1cbd, 0x1cbf}, {0x1ce9, 0x1cec}, {0x1cee, 0x1cf3}, {0x1cf5, 0x1cf6},
  {0x1cfa, 0x1cfa}, {0x1d00, 0x1dbf}, {0x1e00, 0x1f15}, {0x1f18, 0x1f1d}, {0x1f20, 0x1f45}, {0x1f48, 0x1f4d}, {0x1f50, 0x1f57}, {0x1f59, 0x1f59},
  {0x1f5b, 0x1f5b}, {0x1f5d, 0x1f5d}, {0x1f5f, 0x1f7d}, {0x1f80, 0x1fb4}, {0x1fb6, 0x1fbc}, {0x1fbe, 0x1fbe}, {0x1fc2, 0x1fc4}, {0x1fc6, 0x1fcc},
  {0x1fd0, 0x1fd3}, {0x1fd6, 0x1fdb}, {0x1fe0, 0x1fec}, {0x1ff2, 0x1ff4}, {0x1ff6, 0x1ffc}, {0x2071, 0x2071}, {0x207f, 0x207f}, {0x2090, 0x209c},
  {0x2102, 0x2102}, {0x2107, 0x2107}, {0x210a, 0x2113}, {0x2115, 0x2115}, {0x2119, 0x211d}, {0x2124, 0x2124}, {0x2126, 0x2126}, {0x2128, 0x2128},
  {0x212a, 0x212d}, {0x212f, 0x2139}, {0x213c, 0x213f}, {0x2145, 0x2149}, {0x214e, 0x214e}, {0x2183, 0x2184}, {0x2c00, 0x2ce4}, {0x2ceb, 0x2cee},
  {0x2cf2, 0x2cf3}, {0x2d00, 0x2d25}, {0x2d27, 0x2d27}, {0x2d2d, 0x2d2d}, {0x2d30, 0x2d67}, {0x2d6f, 0x2d6f}, {0x2d80, 0x2d96}, {0x2da0, 0x2da6},
  {0x2da8, 0x2dae}, {0x2db0, 0x2db6}, {0x2db8, 0x2dbe}, {0x2dc0, 0x2dc6}, {0x2dc8, 0x2dce}, {0x2dd0, 0x2dd6}, {0x2dd8, 0x2dde}, {0x2e2f, 0x2e2f},
  {0x3005, 0x3006}, {0x3031, 0x3035}, {0x303b, 0x303c}, {0x3041, 0x3096}, {0x309d, 0x309f}, {0x30a1, 0x30fa}, {0x30fc, 0x30ff}, {0x3105, 0x312f},
  {0x3131, 0x318e}, {0x31a0, 0x31bf}, {0x31f0, 0x31ff}, {0x3400, 0x3400}, {0x4dbf, 0x4dbf}, {0x4e00, 0x4e00}, {0x9fff, 0xa48c}, {0xa4d0, 0xa4fd},
  {0xa500, 0xa60c}, {0xa610, 0xa61f}, {0xa62a, 0xa62b}, {0xa640, 0xa66e}, {0xa67f, 0xa69d}, {0xa6a0, 0xa6e5}, {0xa717, 0xa71f}, {0xa722, 0xa788},
  {0xa78b, 0xa7ca}, {0xa7d0, 0xa7d1}, {0xa7d3, 0xa7d3}, {0xa7d5, 0xa7d9}, {0xa7f2, 0xa801}, {0xa803, 0xa805}, {0xa807, 0xa80a}, {0xa80c, 0xa822},
  {0xa840, 0xa873}, {0xa882, 0xa8b3}, {0xa8f2, 0xa8f7}, {0xa8fb, 0xa8fb}, {0xa8fd, 0xa8fe}, {0xa90a, 0xa925}, {0xa930, 0xa946}, {0xa960, 0xa97c},
  {0xa984, 0xa9b2}, {0xa9cf, 0xa9cf}, {0xa9e0, 0xa9e4}, {0xa9e6, 0xa9ef}, {0xa9fa, 0xa9fe}, {0xaa00, 0xaa28}, {0xaa40, 0xaa42}, {0xaa44, 0xaa4b},
  {0xaa60, 0xaa76}, {0xaa7a, 0xaa7a}, {0xaa7e, 0xaaaf}, {0xaab1, 0xaab1}, {0xaab5, 0xaab6}, {0xaab9, 0xaabd}, {0xaac0, 0xaac0}, {0xaac2, 0xaac2},
  {0xaadb, 0xaadd}, {0xaae0, 0xaaea}, {0xaaf2, 0xaaf4}, {0xab01, 0xab06}, {0xab09, 0xab0e}, {0xab11, 0xab16}, {0xab20, 0xab26}, {0xab28, 0xab2e},
  {0xab30, 0xab5a}, {0xab5c, 0xab69}, {0xab70, 0xabe2}, {0xac00, 0xac00}, {0xd7a3, 0xd7a3}, {0xd7b0, 0xd7c6}, {0xd7cb, 0xd7fb}, {0xf900, 0xfa6d},
  {0xfa70, 0xfad9}, {0xfb00, 0xfb06}, {0xfb13, 0xfb17}, {0xfb1d, 0xfb1d}, {0xfb1f, 0xfb28}, {0xfb2a, 0xfb36}, {0xfb38, 0xfb3c}, {0xfb3e, 0xfb3e},
  {0xfb40, 0xfb41}, {0xfb43, 0xfb44}, {0xfb46, 0xfbb1}, {0xfbd3, 0xfd3d}, {0xfd50, 0xfd8f}, {0xfd92, 0xfdc7}, {0xfdf0, 0xfdfb}, {0xfe70, 0xfe74},
  {0xfe76, 0xfefc}, {0xff21, 0xff3a}, {0xff41, 0xff5a}, {0xff66, 0xffbe}, {0xffc2, 0xffc7}, {0xffca, 0xffcf}, {0xffd2, 0xffd7}, {0xffda, 0xffdc},
  {0x10000, 0x1000b}, {0x1000d, 0x10026}, {0x10028, 0x1003a}, {0x1003c, 0x1003d}, {0x1003f, 0x1004d}, {0x10050, 0x1005d}, {0x10080, 0x100fa}, {0x10280, 0x1029c},
  {0x102a0, 0x102d0}, {0x10300, 0x1031f}, {0x1032d, 0x10340}, {0x10342, 0x10349}, {0x10350, 0x10375}, {0x10380, 0x1039d}, {0x103a0, 0x103c3}, {0x103c8, 0x103cf},
  {0x10400, 0x1049d}, {0x104b0, 0x104d3}, {0x104d8, 0x104fb}, {0x10500, 0x10527}, {0x10530, 0x10563}, {0x10570, 0x1057a}, {0x1057c, 0x1058a}, {0x1058c, 0x10592},
  {0x10594, 0x10595}, {0x10597, 0x105a1}, {0x105a3, 0x105b1}, {0x105b3, 0x105b9}, {0x105bb, 0x105bc}, {0x10600, 0x10736}, {0x10740, 0x10755}, {0x10760, 0x10767},
  {0x10780, 0x10785}, {0x10787, 0x107b0}, {0x107b2, 0x107ba}, {0x10800, 0x10805}, {0x10808, 0x10808}, {0x1080a, 0x10835}, {0x10837, 0x10838}, {0x1083c, 0x1083c},
  {0x1083f, 0x10855}, {0x10860, 0x10876}, {0x10880, 0x1089e}, {0x108e0, 0x108f2}, {0x108f4, 0x108f5}, {0x10900, 0x10915},
};

static TSCharacterRange aux_sym_commodity_token2_character_set_1[] = {
  {'$', '$'}, {0xa2, 0xa5}, {0x58f, 0x58f}, {0x60b, 0x60b}, {0x7fe, 0x7ff}, {0x9f2, 0x9f3}, {0x9fb, 0x9fb}, {0xaf1, 0xaf1},
  {0xbf9, 0xbf9}, {0xe3f, 0xe3f}, {0x17db, 0x17db}, {0x20a0, 0x20c0}, {0xa838, 0xa838}, {0xfdfc, 0xfdfc}, {0xfe69, 0xfe69}, {0xff04, 0xff04},
  {0xffe0, 0xffe1}, {0xffe5, 0xffe6},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(209);
      ADVANCE_MAP(
        '\t', 561,
        '\n', 210,
        ' ', 553,
        '!', 414,
        '"', 30,
        '(', 416,
        ')', 419,
        '*', 412,
        '+', 430,
        '-', 290,
        ';', 422,
        '=', 295,
        '@', 551,
        'A', 335,
        'B', 518,
        'C', 349,
        'D', 345,
        'I', 370,
        'N', 342,
        'O', 376,
        'P', 352,
        'Y', 338,
        '[', 423,
        ']', 425,
        'a', 441,
        'b', 503,
        'c', 465,
        'd', 450,
        'e', 478,
        'f', 483,
        'i', 366,
        'n', 484,
        'o', 373,
        'p', 434,
        't', 435,
        'y', 432,
        '~', 378,
        'M', 532,
        'm', 532,
        'Q', 540,
        'q', 540,
        'W', 512,
        'w', 512,
        '.', 404,
        '/', 404,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(549);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '\t', 561,
        '\n', 210,
        ' ', 553,
        '"', 30,
        '+', 430,
        '-', 289,
        ';', 422,
        '=', 295,
        '@', 551,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(549);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(561);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == ' ') ADVANCE(553);
      if (lookahead == ';') ADVANCE(422);
      if (lookahead == '=') ADVANCE(295);
      if (lookahead == ']') ADVANCE(425);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(561);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == ' ') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(561);
      if (lookahead == ' ') ADVANCE(553);
      if (lookahead == '"') ADVANCE(30);
      if (lookahead == ';') ADVANCE(422);
      if (lookahead == '=') ADVANCE(295);
      if (lookahead == '@') ADVANCE(551);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(549);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\t', 561,
        ' ', 553,
        '+', 430,
        '-', 289,
        'D', 108,
        'E', 185,
        'a', 72,
        'c', 65,
        'd', 55,
        'e', 33,
        'f', 85,
        'n', 83,
        'p', 37,
        'B', 138,
        'b', 138,
        'M', 156,
        'm', 156,
        'Q', 182,
        'q', 182,
        'W', 123,
        'w', 123,
        'Y', 128,
        'y', 128,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(561);
      if (lookahead == ' ') ADVANCE(553);
      if (lookahead == '+') ADVANCE(430);
      if (lookahead == '-') ADVANCE(289);
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(26);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(563);
      if (lookahead == ' ') ADVANCE(553);
      if (lookahead == '!') ADVANCE(415);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '*') ADVANCE(413);
      if (lookahead == ';') ADVANCE(422);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead != 0) ADVANCE(428);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(563);
      if (lookahead == ' ') ADVANCE(553);
      if (lookahead == '(') ADVANCE(417);
      if (lookahead == '[') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(428);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(564);
      if (lookahead == ' ') ADVANCE(555);
      if (lookahead == '!') ADVANCE(414);
      if (lookahead == '(') ADVANCE(416);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(420);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(565);
      if (lookahead == ' ') ADVANCE(556);
      if (lookahead == '[') ADVANCE(423);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(562);
      if (lookahead == ' ') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(571);
      if (lookahead == ' ') ADVANCE(570);
      END_STATE();
    case 13:
      if (lookahead == '\t') ADVANCE(569);
      if (lookahead == ' ') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(321);
      END_STATE();
    case 14:
      if (lookahead == '\t') ADVANCE(567);
      if (lookahead == ' ') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 15:
      if (lookahead == '\t') ADVANCE(568);
      if (lookahead == ' ') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(421);
      END_STATE();
    case 16:
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(21);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(17);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(22);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == 'h') ADVANCE(18);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == 'k') ADVANCE(364);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == 'r') ADVANCE(25);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == 's') ADVANCE(24);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == 's') ADVANCE(19);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == '\n') ADVANCE(314);
      if (lookahead == 't') ADVANCE(361);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == '\n') ADVANCE(314);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead == '\n') ADVANCE(303);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 29:
      if (lookahead == ' ') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '"') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(200);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(201);
      END_STATE();
    case 33:
      if (lookahead == 'V') ADVANCE(119);
      if (lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(105);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(89);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(84);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(279);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 62:
      if (lookahead == 'f') ADVANCE(322);
      END_STATE();
    case 63:
      if (lookahead == 'f') ADVANCE(39);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(311);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 69:
      if (lookahead == 'k') ADVANCE(363);
      END_STATE();
    case 70:
      if (lookahead == 'k') ADVANCE(57);
      END_STATE();
    case 71:
      if (lookahead == 'k') ADVANCE(60);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(67);
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(301);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(40);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 87:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 88:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 89:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 91:
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(285);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(360);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(298);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(356);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(354);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(309);
      END_STATE();
    case 102:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 103:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 104:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 105:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 106:
      if (lookahead == 'y') ADVANCE(306);
      END_STATE();
    case 107:
      if (lookahead == 'y') ADVANCE(59);
      END_STATE();
    case 108:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 109:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 110:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 111:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 112:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(164);
      END_STATE();
    case 113:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 114:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 115:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 116:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 117:
      ADVANCE_MAP(
        'D', 113,
        'd', 113,
        'M', 157,
        'm', 157,
        'Q', 183,
        'q', 183,
        'W', 124,
        'w', 124,
        'Y', 129,
        'y', 129,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 118:
      ADVANCE_MAP(
        'D', 114,
        'd', 114,
        'M', 158,
        'm', 158,
        'Q', 184,
        'q', 184,
        'W', 126,
        'w', 126,
        'Y', 130,
        'y', 130,
      );
      END_STATE();
    case 119:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 120:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 121:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 122:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 123:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 124:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 125:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 126:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 127:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 128:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 129:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 130:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 131:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 132:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 133:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 134:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(382);
      END_STATE();
    case 135:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(173);
      END_STATE();
    case 136:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(147);
      END_STATE();
    case 137:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(149);
      END_STATE();
    case 138:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 139:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 140:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(381);
      END_STATE();
    case 141:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(171);
      END_STATE();
    case 142:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(145);
      END_STATE();
    case 143:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(148);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 151:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(159);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(133);
      END_STATE();
    case 152:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 153:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 154:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(177);
      END_STATE();
    case 155:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 156:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(152);
      END_STATE();
    case 157:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 158:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 159:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 160:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 161:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(383);
      END_STATE();
    case 162:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 163:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 164:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 165:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 166:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 167:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 168:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 169:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 170:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(385);
      END_STATE();
    case 171:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(386);
      END_STATE();
    case 172:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(389);
      END_STATE();
    case 173:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(387);
      END_STATE();
    case 174:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(388);
      END_STATE();
    case 175:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(136);
      END_STATE();
    case 176:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(134);
      END_STATE();
    case 177:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(135);
      END_STATE();
    case 178:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(132);
      END_STATE();
    case 179:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      END_STATE();
    case 180:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(127);
      END_STATE();
    case 181:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(137);
      END_STATE();
    case 182:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(109);
      END_STATE();
    case 183:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(115);
      END_STATE();
    case 184:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 185:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(119);
      END_STATE();
    case 186:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(390);
      END_STATE();
    case 187:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(28);
      END_STATE();
    case 188:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(392);
      END_STATE();
    case 189:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(402);
      END_STATE();
    case 190:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(396);
      END_STATE();
    case 191:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(394);
      END_STATE();
    case 192:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(380);
      END_STATE();
    case 193:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(398);
      END_STATE();
    case 194:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(400);
      END_STATE();
    case 195:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(170);
      END_STATE();
    case 196:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 203:
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(428);
      END_STATE();
    case 204:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(294);
      END_STATE();
    case 205:
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(428);
      END_STATE();
    case 206:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 207:
      if (eof) ADVANCE(209);
      ADVANCE_MAP(
        '\t', 561,
        '\n', 210,
        ' ', 553,
        '"', 30,
        '-', 290,
        '=', 295,
        'A', 335,
        'C', 349,
        'D', 346,
        'I', 370,
        'N', 342,
        'O', 376,
        'P', 352,
        'Y', 339,
        'a', 442,
        'b', 504,
        'c', 482,
        'd', 454,
        'e', 479,
        'i', 366,
        'o', 373,
        't', 435,
        'y', 458,
        '~', 378,
        '#', 16,
        '%', 16,
        '*', 16,
        ';', 16,
        '|', 16,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      if (set_contains(aux_sym_commodity_token2_character_set_1, 18, lookahead)) ADVANCE(549);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(548);
      END_STATE();
    case 208:
      if (eof) ADVANCE(209);
      ADVANCE_MAP(
        '\t', 561,
        '\n', 210,
        ' ', 553,
        '-', 290,
        '=', 295,
        'A', 334,
        'C', 348,
        'D', 344,
        'I', 369,
        'N', 341,
        'O', 375,
        'P', 351,
        'Y', 337,
        'a', 42,
        'b', 103,
        'c', 66,
        'd', 50,
        'e', 80,
        'i', 367,
        'o', 372,
        't', 34,
        'y', 51,
        '~', 378,
        '#', 16,
        '%', 16,
        '*', 16,
        ';', 16,
        '|', 16,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(410);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_comment);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_comment);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(566);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == ' ') ADVANCE(557);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(566);
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == ' ') ADVANCE(557);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\t') ADVANCE(566);
      if (lookahead == ' ') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '\n') ADVANCE(211);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'e') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'a') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == 'l') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'c') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'd') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'g') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(221);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'i') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'k') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'm') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'r') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 's') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 't') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'u') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == 'y') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (eof) ADVANCE(209);
      ADVANCE_MAP(
        '\n', 210,
        '-', 291,
        '=', 296,
        'A', 336,
        'C', 350,
        'D', 347,
        'I', 371,
        'N', 343,
        'O', 377,
        'P', 353,
        'Y', 340,
        'a', 222,
        'b', 271,
        'c', 255,
        'd', 232,
        'e', 249,
        'i', 368,
        'o', 374,
        't', 219,
        'y', 233,
        '~', 379,
        '#', 218,
        '%', 218,
        '*', 218,
        ';', 218,
        '|', 218,
      );
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (lookahead != 0) ADVANCE(277);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_end);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_end);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_endcomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_test);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_test);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_endtest);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(292);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_option_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ' ' &&
          lookahead != '=') ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_option_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_account);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_account);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_eval);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_eval_subdirective_token1);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_payee);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_nomarket);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_nomarket);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_tag);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_tag);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_tag);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_tag_directive_token1);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_include);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_alias);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_alias);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'a') ADVANCE(506);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_def);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(542);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_year);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_A);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_A);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(509);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_Y);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_N);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(519);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_D);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_C);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_C);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_P);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_P);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_default);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_format);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_note);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_assert);
      if (lookahead == '\n') ADVANCE(314);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(26);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_assert);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_check);
      if (lookahead == '\n') ADVANCE(314);
      if (set_contains(aux_sym_tag_directive_token1_character_set_2, 430, lookahead)) ADVANCE(26);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_check);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(445);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_I);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_o);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_O);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(aux_sym_interval_token1);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(aux_sym_interval_token2);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(aux_sym_interval_token3);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(aux_sym_interval_token4);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(aux_sym_interval_token5);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(aux_sym_interval_token6);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_interval_token7);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_interval_token8);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_interval_token9);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_interval_token10);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_interval_token13);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(aux_sym_interval_token14);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_interval_token15);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_interval_token16);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_interval_token17);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__dsep);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__2d);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__2d);
      if (lookahead == ':') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(406);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__2d);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(409);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(427);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(427);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(427);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(418);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_query);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(421);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(427);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '=') ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(427);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__quantity);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'A') ADVANCE(535);
      if (lookahead == 'a') ADVANCE(433);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E') ADVANCE(509);
      if (lookahead == 'e') ADVANCE(431);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(327);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(508);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(464);
      if (lookahead == 'e') ADVANCE(490);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(471);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(491);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(489);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(486);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(496);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(446);
      if (lookahead == 'l') ADVANCE(466);
      if (lookahead == 's') ADVANCE(492);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(446);
      if (lookahead == 'l') ADVANCE(466);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(469);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(468);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(472);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(485);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(282);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(467);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(453);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(462);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(519);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(359);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(305);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(316);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(463);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(487);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(495);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(444);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(439);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(452);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(500);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead == 'o') ADVANCE(448);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'f') ADVANCE(323);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'f') ADVANCE(324);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'g') ADVANCE(312);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'h') ADVANCE(457);
      if (lookahead == 'o') ADVANCE(475);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(437);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(501);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(365);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(456);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(460);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(302);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(505);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(499);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(461);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(474);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(438);
      if (lookahead == 't') ADVANCE(451);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(440);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(447);
      if (lookahead == 'v') ADVANCE(436);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(447);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(497);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(498);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(475);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(488);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(476);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(502);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(328);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(494);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(477);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(470);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(493);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(319);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(455);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(286);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(362);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(332);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(357);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(299);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(213);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(355);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(310);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(507);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(480);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(443);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(529);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(443);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(449);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(473);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(307);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(459);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(535);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(534);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(520);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(511);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(536);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(521);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(514);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(525);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(527);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(529);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(522);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(524);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(526);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(541);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(542);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(543);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(544);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(545);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(546);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(547);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(533);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(515);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(537);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(539);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(530);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(531);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(538);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(523);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(528);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(516);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(513);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(517);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(510);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(391);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(403);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(393);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(397);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(395);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(399);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(401);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (set_contains(aux_sym_tag_directive_token1_character_set_1, 429, lookahead)) ADVANCE(548);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_commodity_token3);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(552);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_SPACE);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == '\n') ADVANCE(303);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(420);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '=') ADVANCE(426);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(421);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(321);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(303);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(427);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(420);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '=') ADVANCE(426);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(277);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(421);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(321);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 208},
  [2] = {.lex_state = 208},
  [3] = {.lex_state = 208},
  [4] = {.lex_state = 208},
  [5] = {.lex_state = 208},
  [6] = {.lex_state = 208},
  [7] = {.lex_state = 208},
  [8] = {.lex_state = 208},
  [9] = {.lex_state = 208},
  [10] = {.lex_state = 207},
  [11] = {.lex_state = 208},
  [12] = {.lex_state = 208},
  [13] = {.lex_state = 208},
  [14] = {.lex_state = 208},
  [15] = {.lex_state = 208},
  [16] = {.lex_state = 208},
  [17] = {.lex_state = 208},
  [18] = {.lex_state = 208},
  [19] = {.lex_state = 208},
  [20] = {.lex_state = 208},
  [21] = {.lex_state = 207},
  [22] = {.lex_state = 207},
  [23] = {.lex_state = 207},
  [24] = {.lex_state = 208},
  [25] = {.lex_state = 208},
  [26] = {.lex_state = 208},
  [27] = {.lex_state = 208},
  [28] = {.lex_state = 208},
  [29] = {.lex_state = 208},
  [30] = {.lex_state = 208},
  [31] = {.lex_state = 208},
  [32] = {.lex_state = 208},
  [33] = {.lex_state = 208},
  [34] = {.lex_state = 208},
  [35] = {.lex_state = 208},
  [36] = {.lex_state = 208},
  [37] = {.lex_state = 208},
  [38] = {.lex_state = 208},
  [39] = {.lex_state = 208},
  [40] = {.lex_state = 208},
  [41] = {.lex_state = 208},
  [42] = {.lex_state = 208},
  [43] = {.lex_state = 208},
  [44] = {.lex_state = 208},
  [45] = {.lex_state = 208},
  [46] = {.lex_state = 208},
  [47] = {.lex_state = 208},
  [48] = {.lex_state = 208},
  [49] = {.lex_state = 208},
  [50] = {.lex_state = 208},
  [51] = {.lex_state = 208},
  [52] = {.lex_state = 208},
  [53] = {.lex_state = 208},
  [54] = {.lex_state = 278},
  [55] = {.lex_state = 278},
  [56] = {.lex_state = 278},
  [57] = {.lex_state = 278},
  [58] = {.lex_state = 278},
  [59] = {.lex_state = 278},
  [60] = {.lex_state = 278},
  [61] = {.lex_state = 278},
  [62] = {.lex_state = 208},
  [63] = {.lex_state = 208},
  [64] = {.lex_state = 208},
  [65] = {.lex_state = 208},
  [66] = {.lex_state = 208},
  [67] = {.lex_state = 208},
  [68] = {.lex_state = 208},
  [69] = {.lex_state = 208},
  [70] = {.lex_state = 208},
  [71] = {.lex_state = 208},
  [72] = {.lex_state = 208},
  [73] = {.lex_state = 208},
  [74] = {.lex_state = 208},
  [75] = {.lex_state = 208},
  [76] = {.lex_state = 208},
  [77] = {.lex_state = 208},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
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
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 9},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 7},
  [116] = {.lex_state = 215},
  [117] = {.lex_state = 208},
  [118] = {.lex_state = 216},
  [119] = {.lex_state = 215},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 5},
  [122] = {.lex_state = 208},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 215},
  [126] = {.lex_state = 216},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 216},
  [129] = {.lex_state = 208},
  [130] = {.lex_state = 5},
  [131] = {.lex_state = 216},
  [132] = {.lex_state = 216},
  [133] = {.lex_state = 5},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 215},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 215},
  [141] = {.lex_state = 208},
  [142] = {.lex_state = 208},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 8},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 8},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 8},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 8},
  [164] = {.lex_state = 8},
  [165] = {.lex_state = 8},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 9},
  [169] = {.lex_state = 8},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 216},
  [175] = {.lex_state = 215},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 215},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 216},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 9},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 208},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 14},
  [212] = {.lex_state = 14},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 9},
  [215] = {.lex_state = 11},
  [216] = {.lex_state = 11},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 217},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 217},
  [225] = {.lex_state = 11},
  [226] = {.lex_state = 11},
  [227] = {.lex_state = 11},
  [228] = {.lex_state = 208},
  [229] = {.lex_state = 11},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 9},
  [232] = {.lex_state = 9},
  [233] = {.lex_state = 3},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 15},
  [238] = {.lex_state = 217},
  [239] = {.lex_state = 217},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 2},
  [242] = {.lex_state = 217},
  [243] = {.lex_state = 9},
  [244] = {.lex_state = 9},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 13},
  [248] = {.lex_state = 14},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 3},
  [251] = {.lex_state = 9},
  [252] = {.lex_state = 9},
  [253] = {.lex_state = 3},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 3},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 15},
  [258] = {.lex_state = 9},
  [259] = {.lex_state = 3},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 2},
  [262] = {.lex_state = 3},
  [263] = {.lex_state = 2},
  [264] = {.lex_state = 2},
  [265] = {.lex_state = 2},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 14},
  [268] = {.lex_state = 13},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 11},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 206},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 204},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 5},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 5},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 418},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 3},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 205},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 4},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 3},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 3},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 4},
  [356] = {.lex_state = 206},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 4},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 205},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 5},
  [366] = {.lex_state = 5},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 5},
  [369] = {.lex_state = 5},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_comment] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_account] = ACTIONS(1),
    [anon_sym_eval] = ACTIONS(1),
    [anon_sym_payee] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_nomarket] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_year] = ACTIONS(1),
    [aux_sym_word_directive_token2] = ACTIONS(1),
    [anon_sym_bucket] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_N] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_check] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [aux_sym_interval_token11] = ACTIONS(1),
    [aux_sym_interval_token12] = ACTIONS(1),
    [aux_sym_interval_token13] = ACTIONS(1),
    [aux_sym_interval_token14] = ACTIONS(1),
    [aux_sym_interval_token15] = ACTIONS(1),
    [aux_sym_interval_token16] = ACTIONS(1),
    [aux_sym_interval_token17] = ACTIONS(1),
    [sym__dsep] = ACTIONS(1),
    [sym__2d] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [aux_sym_commodity_token1] = ACTIONS(1),
    [aux_sym_commodity_token2] = ACTIONS(1),
    [aux_sym_commodity_token3] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_SPACE] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(327),
    [sym_journal_item] = STATE(3),
    [sym_block_comment] = STATE(65),
    [sym_test] = STATE(65),
    [sym_option] = STATE(77),
    [sym_directive] = STATE(65),
    [sym_account_directive] = STATE(77),
    [sym_commodity_directive] = STATE(77),
    [sym_tag_directive] = STATE(77),
    [sym_word_directive] = STATE(311),
    [sym_char_directive] = STATE(311),
    [sym_check_in] = STATE(323),
    [sym_check_out] = STATE(323),
    [sym_xact] = STATE(65),
    [sym_plain_xact] = STATE(63),
    [sym_periodic_xact] = STATE(63),
    [sym_automated_xact] = STATE(63),
    [sym__xact_date] = STATE(186),
    [sym_date] = STATE(185),
    [sym__4d] = STATE(355),
    [sym__single_date] = STATE(189),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [anon_sym_comment] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(11),
    [anon_sym_test] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [anon_sym_DASH_DASH] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_account] = ACTIONS(21),
    [anon_sym_commodity] = ACTIONS(23),
    [anon_sym_tag] = ACTIONS(25),
    [anon_sym_include] = ACTIONS(27),
    [anon_sym_alias] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_year] = ACTIONS(33),
    [aux_sym_word_directive_token2] = ACTIONS(35),
    [anon_sym_bucket] = ACTIONS(37),
    [anon_sym_A] = ACTIONS(39),
    [anon_sym_Y] = ACTIONS(41),
    [anon_sym_N] = ACTIONS(43),
    [anon_sym_D] = ACTIONS(45),
    [anon_sym_C] = ACTIONS(47),
    [anon_sym_P] = ACTIONS(49),
    [anon_sym_i] = ACTIONS(51),
    [anon_sym_I] = ACTIONS(53),
    [anon_sym_o] = ACTIONS(55),
    [anon_sym_O] = ACTIONS(55),
    [anon_sym_TILDE] = ACTIONS(57),
    [sym__2d] = ACTIONS(59),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 39,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      anon_sym_LF,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_comment,
    ACTIONS(72), 1,
      anon_sym_end,
    ACTIONS(75), 1,
      anon_sym_test,
    ACTIONS(78), 1,
      anon_sym_DASH,
    ACTIONS(81), 1,
      anon_sym_DASH_DASH,
    ACTIONS(84), 1,
      anon_sym_EQ,
    ACTIONS(87), 1,
      anon_sym_account,
    ACTIONS(90), 1,
      anon_sym_commodity,
    ACTIONS(93), 1,
      anon_sym_tag,
    ACTIONS(96), 1,
      anon_sym_include,
    ACTIONS(99), 1,
      anon_sym_alias,
    ACTIONS(102), 1,
      anon_sym_def,
    ACTIONS(105), 1,
      anon_sym_year,
    ACTIONS(108), 1,
      aux_sym_word_directive_token2,
    ACTIONS(111), 1,
      anon_sym_bucket,
    ACTIONS(114), 1,
      anon_sym_A,
    ACTIONS(117), 1,
      anon_sym_Y,
    ACTIONS(120), 1,
      anon_sym_N,
    ACTIONS(123), 1,
      anon_sym_D,
    ACTIONS(126), 1,
      anon_sym_C,
    ACTIONS(129), 1,
      anon_sym_P,
    ACTIONS(132), 1,
      anon_sym_i,
    ACTIONS(135), 1,
      anon_sym_I,
    ACTIONS(141), 1,
      anon_sym_TILDE,
    ACTIONS(144), 1,
      sym__2d,
    STATE(185), 1,
      sym_date,
    STATE(186), 1,
      sym__xact_date,
    STATE(189), 1,
      sym__single_date,
    STATE(355), 1,
      sym__4d,
    ACTIONS(138), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(311), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(323), 2,
      sym_check_in,
      sym_check_out,
    STATE(63), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(65), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
    STATE(77), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
  [130] = 39,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(9), 1,
      anon_sym_comment,
    ACTIONS(11), 1,
      anon_sym_end,
    ACTIONS(13), 1,
      anon_sym_test,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH,
    ACTIONS(19), 1,
      anon_sym_EQ,
    ACTIONS(21), 1,
      anon_sym_account,
    ACTIONS(23), 1,
      anon_sym_commodity,
    ACTIONS(25), 1,
      anon_sym_tag,
    ACTIONS(27), 1,
      anon_sym_include,
    ACTIONS(29), 1,
      anon_sym_alias,
    ACTIONS(31), 1,
      anon_sym_def,
    ACTIONS(33), 1,
      anon_sym_year,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(37), 1,
      anon_sym_bucket,
    ACTIONS(39), 1,
      anon_sym_A,
    ACTIONS(41), 1,
      anon_sym_Y,
    ACTIONS(43), 1,
      anon_sym_N,
    ACTIONS(45), 1,
      anon_sym_D,
    ACTIONS(47), 1,
      anon_sym_C,
    ACTIONS(49), 1,
      anon_sym_P,
    ACTIONS(51), 1,
      anon_sym_i,
    ACTIONS(53), 1,
      anon_sym_I,
    ACTIONS(57), 1,
      anon_sym_TILDE,
    ACTIONS(59), 1,
      sym__2d,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
    ACTIONS(149), 1,
      anon_sym_LF,
    STATE(185), 1,
      sym_date,
    STATE(186), 1,
      sym__xact_date,
    STATE(189), 1,
      sym__single_date,
    STATE(355), 1,
      sym__4d,
    ACTIONS(55), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(2), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(311), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(323), 2,
      sym_check_in,
      sym_check_out,
    STATE(63), 3,
      sym_plain_xact,
      sym_periodic_xact,
      sym_automated_xact,
    STATE(65), 4,
      sym_block_comment,
      sym_test,
      sym_directive,
      sym_xact,
    STATE(77), 4,
      sym_option,
      sym_account_directive,
      sym_commodity_directive,
      sym_tag_directive,
  [260] = 6,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(155), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(4), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(153), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(30), 7,
      sym_eval_subdirective,
      sym_payee_subdirective,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(151), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [315] = 6,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(162), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(160), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(30), 7,
      sym_eval_subdirective,
      sym_payee_subdirective,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(158), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [370] = 6,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(162), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(4), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    ACTIONS(166), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(30), 7,
      sym_eval_subdirective,
      sym_payee_subdirective,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_note_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
    ACTIONS(164), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [425] = 6,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(172), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(170), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(48), 5,
      sym_nomarket_subdirective,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(168), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [478] = 6,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(172), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(7), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(176), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(48), 5,
      sym_nomarket_subdirective,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(174), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [531] = 6,
    STATE(121), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(182), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    ACTIONS(180), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(48), 5,
      sym_nomarket_subdirective,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_note_subdirective,
    ACTIONS(178), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [584] = 7,
    ACTIONS(189), 1,
      aux_sym_commodity_token1,
    STATE(50), 1,
      sym_commodity,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(191), 2,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(193), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(185), 7,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
    ACTIONS(187), 23,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym__2d,
  [636] = 5,
    STATE(207), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(199), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(197), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(11), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(195), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [683] = 5,
    STATE(207), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(206), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(204), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(13), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(202), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [730] = 5,
    STATE(207), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(206), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(210), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    STATE(11), 3,
      sym_assert_subdirective,
      sym_check_subdirective,
      aux_sym_tag_directive_repeat1,
    ACTIONS(208), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [777] = 5,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(214), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(212), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [823] = 5,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(222), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(220), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(218), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [869] = 5,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(227), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(225), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [915] = 5,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(231), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(229), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [961] = 5,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(235), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(233), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1007] = 5,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(239), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(237), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1053] = 5,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(243), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(241), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [1099] = 2,
    ACTIONS(245), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(247), 24,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym__2d,
      aux_sym_commodity_token1,
  [1139] = 2,
    ACTIONS(249), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(251), 24,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym__2d,
      aux_sym_commodity_token1,
  [1179] = 2,
    ACTIONS(253), 11,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      anon_sym_TILDE,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(255), 24,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      sym__2d,
      aux_sym_commodity_token1,
  [1219] = 2,
    ACTIONS(259), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(257), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1256] = 2,
    ACTIONS(263), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(261), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1293] = 2,
    ACTIONS(267), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(265), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1330] = 2,
    ACTIONS(271), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(269), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1367] = 2,
    ACTIONS(275), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(273), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1404] = 2,
    ACTIONS(279), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(277), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1441] = 2,
    ACTIONS(283), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(281), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1478] = 2,
    ACTIONS(287), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(285), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1515] = 2,
    ACTIONS(255), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(253), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1552] = 2,
    ACTIONS(291), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(289), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1589] = 2,
    ACTIONS(295), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(293), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1626] = 2,
    ACTIONS(299), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(297), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1663] = 2,
    ACTIONS(303), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(301), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1700] = 2,
    ACTIONS(307), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(305), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1737] = 2,
    ACTIONS(311), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(309), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1774] = 2,
    ACTIONS(315), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(313), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1811] = 2,
    ACTIONS(319), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(317), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1848] = 2,
    ACTIONS(323), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(321), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1885] = 2,
    ACTIONS(327), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(325), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1922] = 2,
    ACTIONS(331), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(329), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1959] = 2,
    ACTIONS(335), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(333), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [1996] = 2,
    ACTIONS(339), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(337), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2033] = 2,
    ACTIONS(343), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(341), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2070] = 2,
    ACTIONS(347), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(345), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2107] = 2,
    ACTIONS(351), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(349), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2144] = 2,
    ACTIONS(355), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(353), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2181] = 2,
    ACTIONS(359), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(357), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2218] = 2,
    ACTIONS(363), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(361), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2255] = 2,
    ACTIONS(247), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(245), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2292] = 2,
    ACTIONS(251), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(249), 29,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      anon_sym_SPACE,
      anon_sym_TAB,
  [2329] = 3,
    ACTIONS(369), 1,
      aux_sym_block_comment_token1,
    ACTIONS(365), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(367), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2367] = 3,
    ACTIONS(375), 1,
      aux_sym_block_comment_token1,
    ACTIONS(371), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(373), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2405] = 3,
    ACTIONS(381), 1,
      aux_sym_block_comment_token1,
    ACTIONS(377), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(379), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2443] = 3,
    ACTIONS(387), 1,
      aux_sym_block_comment_token1,
    ACTIONS(383), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(385), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2481] = 3,
    ACTIONS(393), 1,
      aux_sym_block_comment_token1,
    ACTIONS(389), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(391), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2519] = 3,
    ACTIONS(399), 1,
      aux_sym_block_comment_token1,
    ACTIONS(395), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(397), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2557] = 3,
    ACTIONS(405), 1,
      aux_sym_block_comment_token1,
    ACTIONS(401), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(403), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2595] = 3,
    ACTIONS(411), 1,
      aux_sym_block_comment_token1,
    ACTIONS(407), 3,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
    ACTIONS(409), 27,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_i,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym__2d,
  [2633] = 2,
    ACTIONS(415), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(413), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [2668] = 2,
    ACTIONS(419), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(417), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [2703] = 2,
    ACTIONS(423), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(421), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [2738] = 2,
    ACTIONS(427), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(425), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [2773] = 2,
    ACTIONS(373), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(371), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [2808] = 2,
    ACTIONS(367), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(365), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [2843] = 2,
    ACTIONS(397), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(395), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [2878] = 2,
    ACTIONS(431), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(429), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [2913] = 2,
    ACTIONS(435), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(433), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [2948] = 2,
    ACTIONS(409), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(407), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [2983] = 2,
    ACTIONS(385), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(383), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3018] = 2,
    ACTIONS(439), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(437), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3053] = 2,
    ACTIONS(403), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(401), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3088] = 2,
    ACTIONS(379), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(377), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3123] = 2,
    ACTIONS(391), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(389), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3158] = 2,
    ACTIONS(443), 3,
      anon_sym_DASH,
      anon_sym_i,
      sym__2d,
    ACTIONS(441), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      sym_comment,
      anon_sym_comment,
      anon_sym_end,
      anon_sym_test,
      anon_sym_DASH_DASH,
      anon_sym_EQ,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_tag,
      anon_sym_include,
      anon_sym_alias,
      anon_sym_def,
      anon_sym_year,
      aux_sym_word_directive_token2,
      anon_sym_bucket,
      anon_sym_A,
      anon_sym_Y,
      anon_sym_N,
      anon_sym_D,
      anon_sym_C,
      anon_sym_P,
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
  [3193] = 3,
    STATE(78), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(447), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(445), 26,
      anon_sym_eval,
      anon_sym_payee,
      anon_sym_nomarket,
      anon_sym_alias,
      anon_sym_default,
      anon_sym_format,
      anon_sym_note,
      anon_sym_assert,
      anon_sym_check,
      aux_sym_interval_token1,
      aux_sym_interval_token2,
      aux_sym_interval_token3,
      aux_sym_interval_token4,
      aux_sym_interval_token5,
      aux_sym_interval_token6,
      aux_sym_interval_token7,
      aux_sym_interval_token8,
      aux_sym_interval_token9,
      aux_sym_interval_token10,
      aux_sym_interval_token11,
      aux_sym_interval_token12,
      aux_sym_interval_token13,
      aux_sym_interval_token14,
      aux_sym_interval_token15,
      aux_sym_interval_token16,
      aux_sym_interval_token17,
  [3229] = 17,
    ACTIONS(450), 1,
      anon_sym_LF,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    STATE(84), 1,
      aux_sym_whitespace_repeat1,
    STATE(104), 1,
      sym_amount,
    STATE(127), 1,
      sym_price,
    STATE(134), 1,
      sym_commodity,
    STATE(180), 1,
      sym_balance_assertion,
    STATE(337), 1,
      sym_note,
    ACTIONS(468), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3285] = 17,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    ACTIONS(470), 1,
      anon_sym_LF,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    STATE(102), 1,
      sym_amount,
    STATE(124), 1,
      sym_price,
    STATE(134), 1,
      sym_commodity,
    STATE(179), 1,
      sym_balance_assertion,
    STATE(336), 1,
      sym_note,
    ACTIONS(472), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3341] = 17,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    ACTIONS(474), 1,
      anon_sym_LF,
    STATE(85), 1,
      aux_sym_whitespace_repeat1,
    STATE(103), 1,
      sym_amount,
    STATE(134), 1,
      sym_commodity,
    STATE(139), 1,
      sym_price,
    STATE(188), 1,
      sym_balance_assertion,
    STATE(322), 1,
      sym_note,
    ACTIONS(476), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3397] = 4,
    STATE(78), 1,
      aux_sym_whitespace_repeat1,
    STATE(296), 1,
      sym_interval,
    ACTIONS(480), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(478), 17,
      aux_sym_interval_token1,
      aux_sym_interval_token2,
      aux_sym_interval_token3,
      aux_sym_interval_token4,
      aux_sym_interval_token5,
      aux_sym_interval_token6,
      aux_sym_interval_token7,
      aux_sym_interval_token8,
      aux_sym_interval_token9,
      aux_sym_interval_token10,
      aux_sym_interval_token11,
      aux_sym_interval_token12,
      aux_sym_interval_token13,
      aux_sym_interval_token14,
      aux_sym_interval_token15,
      aux_sym_interval_token16,
      aux_sym_interval_token17,
  [3427] = 16,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(104), 1,
      sym_amount,
    STATE(127), 1,
      sym_price,
    STATE(134), 1,
      sym_commodity,
    STATE(180), 1,
      sym_balance_assertion,
    STATE(337), 1,
      sym_note,
    ACTIONS(482), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3480] = 16,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(103), 1,
      sym_amount,
    STATE(134), 1,
      sym_commodity,
    STATE(139), 1,
      sym_price,
    STATE(188), 1,
      sym_balance_assertion,
    STATE(322), 1,
      sym_note,
    ACTIONS(482), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3533] = 16,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(101), 1,
      sym_amount,
    STATE(134), 1,
      sym_commodity,
    STATE(137), 1,
      sym_price,
    STATE(178), 1,
      sym_balance_assertion,
    STATE(359), 1,
      sym_note,
    ACTIONS(482), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3586] = 2,
    ACTIONS(343), 1,
      anon_sym_AT,
    ACTIONS(341), 12,
      anon_sym_LF,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym__quantity,
      anon_sym_PLUS,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [3604] = 9,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(134), 1,
      sym_commodity,
    STATE(202), 1,
      sym_amount,
    ACTIONS(482), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3636] = 9,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(87), 1,
      aux_sym_whitespace_repeat1,
    STATE(134), 1,
      sym_commodity,
    STATE(208), 1,
      sym_amount,
    ACTIONS(484), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3668] = 9,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(134), 1,
      sym_commodity,
    STATE(357), 1,
      sym_amount,
    ACTIONS(482), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3700] = 9,
    ACTIONS(486), 1,
      anon_sym_DASH,
    ACTIONS(488), 1,
      sym__quantity,
    ACTIONS(490), 1,
      anon_sym_PLUS,
    STATE(35), 1,
      sym_amount,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(130), 1,
      sym_commodity,
    ACTIONS(482), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(10), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3732] = 9,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(89), 1,
      aux_sym_whitespace_repeat1,
    STATE(134), 1,
      sym_commodity,
    STATE(331), 1,
      sym_amount,
    ACTIONS(492), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3764] = 9,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(134), 1,
      sym_commodity,
    STATE(335), 1,
      sym_amount,
    ACTIONS(482), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3796] = 9,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(134), 1,
      sym_commodity,
    STATE(319), 1,
      sym_amount,
    ACTIONS(482), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3828] = 4,
    ACTIONS(494), 1,
      anon_sym_AT,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(496), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(445), 9,
      anon_sym_DASH,
      anon_sym_EQ,
      anon_sym_SEMI,
      sym__quantity,
      anon_sym_PLUS,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [3850] = 9,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(134), 1,
      sym_commodity,
    STATE(357), 1,
      sym_amount,
    ACTIONS(499), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3882] = 9,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(134), 1,
      sym_commodity,
    STATE(249), 1,
      sym_amount,
    ACTIONS(482), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3914] = 9,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(134), 1,
      sym_commodity,
    STATE(236), 1,
      sym_amount,
    ACTIONS(501), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(100), 2,
      sym_quantity,
      sym_negative_quantity,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [3946] = 4,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(494), 2,
      sym__2d,
      anon_sym_AT,
    ACTIONS(503), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(445), 8,
      anon_sym_EQ,
      aux_sym_word_directive_token2,
      sym_time,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
  [3968] = 11,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      sym_account_name,
    ACTIONS(514), 1,
      anon_sym_SPACE,
    ACTIONS(516), 1,
      anon_sym_TAB,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    STATE(144), 1,
      sym_status,
    STATE(250), 1,
      sym_account,
    STATE(307), 1,
      sym_note,
    ACTIONS(506), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [4003] = 6,
    ACTIONS(187), 1,
      anon_sym_AT,
    STATE(150), 1,
      sym_commodity,
    STATE(152), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(518), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
    ACTIONS(185), 4,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
  [4028] = 10,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    ACTIONS(520), 1,
      anon_sym_LF,
    STATE(110), 1,
      aux_sym_whitespace_repeat1,
    STATE(120), 1,
      sym_price,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(308), 1,
      sym_note,
    ACTIONS(522), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4060] = 10,
    ACTIONS(450), 1,
      anon_sym_LF,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_price,
    STATE(180), 1,
      sym_balance_assertion,
    STATE(337), 1,
      sym_note,
    ACTIONS(524), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4092] = 10,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    ACTIONS(526), 1,
      anon_sym_LF,
    STATE(106), 1,
      aux_sym_whitespace_repeat1,
    STATE(137), 1,
      sym_price,
    STATE(178), 1,
      sym_balance_assertion,
    STATE(359), 1,
      sym_note,
    ACTIONS(528), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4124] = 10,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    ACTIONS(474), 1,
      anon_sym_LF,
    STATE(107), 1,
      aux_sym_whitespace_repeat1,
    STATE(139), 1,
      sym_price,
    STATE(188), 1,
      sym_balance_assertion,
    STATE(322), 1,
      sym_note,
    ACTIONS(530), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4156] = 9,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(139), 1,
      sym_price,
    STATE(188), 1,
      sym_balance_assertion,
    STATE(322), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4185] = 9,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(120), 1,
      sym_price,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(308), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4214] = 9,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(137), 1,
      sym_price,
    STATE(178), 1,
      sym_balance_assertion,
    STATE(359), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4243] = 2,
    ACTIONS(251), 1,
      anon_sym_AT,
    ACTIONS(249), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4258] = 9,
    ACTIONS(534), 1,
      anon_sym_eval,
    ACTIONS(536), 1,
      anon_sym_payee,
    ACTIONS(538), 1,
      anon_sym_alias,
    ACTIONS(540), 1,
      anon_sym_default,
    ACTIONS(542), 1,
      anon_sym_note,
    ACTIONS(544), 1,
      anon_sym_assert,
    ACTIONS(546), 1,
      anon_sym_check,
    STATE(78), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(480), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4287] = 9,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(464), 1,
      anon_sym_AT,
    ACTIONS(466), 1,
      anon_sym_AT_AT,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(123), 1,
      sym_price,
    STATE(182), 1,
      sym_balance_assertion,
    STATE(315), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4316] = 2,
    ACTIONS(255), 1,
      anon_sym_AT,
    ACTIONS(253), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4331] = 2,
    ACTIONS(247), 1,
      anon_sym_AT,
    ACTIONS(245), 9,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4346] = 7,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(552), 1,
      sym_payee,
    STATE(168), 1,
      aux_sym_whitespace_repeat1,
    STATE(172), 1,
      sym_status,
    STATE(173), 1,
      sym_code,
    ACTIONS(548), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(554), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4370] = 4,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(494), 2,
      anon_sym_assert,
      anon_sym_check,
    ACTIONS(556), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(445), 4,
      anon_sym_DASH,
      aux_sym_tag_directive_token1,
      sym__quantity,
      anon_sym_PLUS,
  [4388] = 5,
    ACTIONS(445), 1,
      anon_sym_SEMI,
    ACTIONS(559), 1,
      anon_sym_SPACE,
    ACTIONS(562), 1,
      anon_sym_TAB,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(494), 5,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [4408] = 7,
    ACTIONS(405), 1,
      anon_sym_endcomment,
    ACTIONS(565), 1,
      anon_sym_LF,
    ACTIONS(567), 1,
      aux_sym_block_comment_token1,
    ACTIONS(569), 1,
      anon_sym_end,
    STATE(125), 1,
      aux_sym_block_comment_repeat1,
    STATE(238), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(571), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4431] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(189), 1,
      sym__single_date,
    STATE(265), 1,
      sym_date,
    STATE(355), 1,
      sym__4d,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4454] = 7,
    ACTIONS(573), 1,
      anon_sym_LF,
    ACTIONS(575), 1,
      aux_sym_block_comment_token1,
    ACTIONS(577), 1,
      anon_sym_end,
    ACTIONS(579), 1,
      anon_sym_endtest,
    STATE(126), 1,
      aux_sym_block_comment_repeat1,
    STATE(242), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(581), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4477] = 7,
    ACTIONS(387), 1,
      anon_sym_endcomment,
    ACTIONS(565), 1,
      anon_sym_LF,
    ACTIONS(567), 1,
      aux_sym_block_comment_token1,
    ACTIONS(583), 1,
      anon_sym_end,
    STATE(125), 1,
      aux_sym_block_comment_repeat1,
    STATE(238), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(571), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4500] = 7,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(585), 1,
      anon_sym_LF,
    STATE(153), 1,
      aux_sym_whitespace_repeat1,
    STATE(182), 1,
      sym_balance_assertion,
    STATE(315), 1,
      sym_note,
    ACTIONS(587), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4523] = 7,
    ACTIONS(538), 1,
      anon_sym_alias,
    ACTIONS(540), 1,
      anon_sym_default,
    ACTIONS(542), 1,
      anon_sym_note,
    ACTIONS(589), 1,
      anon_sym_nomarket,
    ACTIONS(591), 1,
      anon_sym_format,
    STATE(78), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(480), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4546] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(189), 1,
      sym__single_date,
    STATE(263), 1,
      sym_date,
    STATE(355), 1,
      sym__4d,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4569] = 7,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(593), 1,
      anon_sym_LF,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    STATE(187), 1,
      sym_balance_assertion,
    STATE(321), 1,
      sym_note,
    ACTIONS(595), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4592] = 7,
    ACTIONS(450), 1,
      anon_sym_LF,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(167), 1,
      aux_sym_whitespace_repeat1,
    STATE(180), 1,
      sym_balance_assertion,
    STATE(337), 1,
      sym_note,
    ACTIONS(597), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4615] = 6,
    ACTIONS(599), 1,
      anon_sym_LF,
    ACTIONS(602), 1,
      aux_sym_block_comment_token1,
    STATE(125), 1,
      aux_sym_block_comment_repeat1,
    STATE(238), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(605), 2,
      anon_sym_end,
      anon_sym_endcomment,
    ACTIONS(607), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4636] = 7,
    ACTIONS(411), 1,
      anon_sym_endtest,
    ACTIONS(575), 1,
      aux_sym_block_comment_token1,
    ACTIONS(610), 1,
      anon_sym_LF,
    ACTIONS(612), 1,
      anon_sym_end,
    STATE(131), 1,
      aux_sym_block_comment_repeat1,
    STATE(242), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(581), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4659] = 7,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(474), 1,
      anon_sym_LF,
    STATE(146), 1,
      aux_sym_whitespace_repeat1,
    STATE(188), 1,
      sym_balance_assertion,
    STATE(322), 1,
      sym_note,
    ACTIONS(614), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4682] = 7,
    ACTIONS(393), 1,
      anon_sym_endtest,
    ACTIONS(575), 1,
      aux_sym_block_comment_token1,
    ACTIONS(610), 1,
      anon_sym_LF,
    ACTIONS(616), 1,
      anon_sym_end,
    STATE(131), 1,
      aux_sym_block_comment_repeat1,
    STATE(242), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(581), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4705] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(117), 1,
      aux_sym_whitespace_repeat1,
    STATE(189), 1,
      sym__single_date,
    STATE(220), 1,
      sym_date,
    STATE(355), 1,
      sym__4d,
    ACTIONS(618), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4728] = 6,
    ACTIONS(620), 1,
      anon_sym_DASH,
    ACTIONS(622), 1,
      sym__quantity,
    ACTIONS(624), 1,
      anon_sym_PLUS,
    STATE(135), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(626), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(50), 2,
      sym_quantity,
      sym_negative_quantity,
  [4749] = 6,
    ACTIONS(628), 1,
      anon_sym_LF,
    ACTIONS(631), 1,
      aux_sym_block_comment_token1,
    STATE(131), 1,
      aux_sym_block_comment_repeat1,
    STATE(242), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(605), 2,
      anon_sym_end,
      anon_sym_endtest,
    ACTIONS(634), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4770] = 7,
    ACTIONS(381), 1,
      anon_sym_endtest,
    ACTIONS(575), 1,
      aux_sym_block_comment_token1,
    ACTIONS(637), 1,
      anon_sym_LF,
    ACTIONS(639), 1,
      anon_sym_end,
    STATE(128), 1,
      aux_sym_block_comment_repeat1,
    STATE(242), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(581), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4793] = 6,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(641), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(160), 2,
      sym_quantity,
      sym_negative_quantity,
  [4814] = 6,
    ACTIONS(452), 1,
      anon_sym_DASH,
    ACTIONS(458), 1,
      sym__quantity,
    ACTIONS(460), 1,
      anon_sym_PLUS,
    STATE(133), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(643), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(150), 2,
      sym_quantity,
      sym_negative_quantity,
  [4835] = 6,
    ACTIONS(620), 1,
      anon_sym_DASH,
    ACTIONS(622), 1,
      sym__quantity,
    ACTIONS(624), 1,
      anon_sym_PLUS,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(641), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(51), 2,
      sym_quantity,
      sym_negative_quantity,
  [4856] = 2,
    ACTIONS(647), 1,
      sym__dsep,
    ACTIONS(645), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4869] = 7,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(520), 1,
      anon_sym_LF,
    STATE(151), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(308), 1,
      sym_note,
    ACTIONS(649), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4892] = 7,
    ACTIONS(375), 1,
      anon_sym_endcomment,
    ACTIONS(567), 1,
      aux_sym_block_comment_token1,
    ACTIONS(651), 1,
      anon_sym_LF,
    ACTIONS(653), 1,
      anon_sym_end,
    STATE(119), 1,
      aux_sym_block_comment_repeat1,
    STATE(238), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(571), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4915] = 7,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(526), 1,
      anon_sym_LF,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    STATE(178), 1,
      sym_balance_assertion,
    STATE(359), 1,
      sym_note,
    ACTIONS(655), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4938] = 7,
    ACTIONS(567), 1,
      aux_sym_block_comment_token1,
    ACTIONS(657), 1,
      anon_sym_LF,
    ACTIONS(659), 1,
      anon_sym_end,
    ACTIONS(661), 1,
      anon_sym_endcomment,
    STATE(116), 1,
      aux_sym_block_comment_repeat1,
    STATE(238), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(571), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4961] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(122), 1,
      aux_sym_whitespace_repeat1,
    STATE(189), 1,
      sym__single_date,
    STATE(269), 1,
      sym_date,
    STATE(355), 1,
      sym__4d,
    ACTIONS(663), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [4984] = 7,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(189), 1,
      sym__single_date,
    STATE(292), 1,
      sym_date,
    STATE(355), 1,
      sym__4d,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5007] = 4,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(260), 1,
      sym_commodity,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5023] = 7,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      sym_account_name,
    ACTIONS(665), 1,
      anon_sym_SPACE,
    ACTIONS(667), 1,
      anon_sym_TAB,
    STATE(169), 1,
      aux_sym_whitespace_repeat1,
    STATE(262), 1,
      sym_account,
  [5045] = 7,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      sym_account_name,
    ACTIONS(669), 1,
      anon_sym_SPACE,
    ACTIONS(671), 1,
      anon_sym_TAB,
    STATE(183), 1,
      aux_sym_whitespace_repeat1,
    STATE(354), 1,
      sym_account,
  [5067] = 6,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(178), 1,
      sym_balance_assertion,
    STATE(359), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5087] = 6,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_balance_assertion,
    STATE(308), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5107] = 7,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      sym_account_name,
    ACTIONS(669), 1,
      anon_sym_SPACE,
    ACTIONS(671), 1,
      anon_sym_TAB,
    STATE(183), 1,
      aux_sym_whitespace_repeat1,
    STATE(233), 1,
      sym_account,
  [5129] = 4,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(310), 1,
      sym_commodity,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5145] = 2,
    ACTIONS(359), 1,
      anon_sym_AT,
    ACTIONS(357), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5157] = 6,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(182), 1,
      sym_balance_assertion,
    STATE(315), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5177] = 4,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(160), 1,
      sym_commodity,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5193] = 6,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(187), 1,
      sym_balance_assertion,
    STATE(321), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5213] = 6,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(170), 1,
      sym_balance_assertion,
    STATE(326), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5233] = 7,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      sym_account_name,
    ACTIONS(669), 1,
      anon_sym_SPACE,
    ACTIONS(671), 1,
      anon_sym_TAB,
    STATE(183), 1,
      aux_sym_whitespace_repeat1,
    STATE(313), 1,
      sym_account,
  [5255] = 4,
    STATE(95), 1,
      sym_commodity,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5271] = 7,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      sym_account_name,
    ACTIONS(669), 1,
      anon_sym_SPACE,
    ACTIONS(671), 1,
      anon_sym_TAB,
    STATE(183), 1,
      aux_sym_whitespace_repeat1,
    STATE(319), 1,
      sym_account,
  [5293] = 4,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(319), 1,
      sym_commodity,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(462), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5309] = 7,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      sym_account_name,
    ACTIONS(669), 1,
      anon_sym_SPACE,
    ACTIONS(671), 1,
      anon_sym_TAB,
    STATE(183), 1,
      aux_sym_whitespace_repeat1,
    STATE(259), 1,
      sym_account,
  [5331] = 2,
    ACTIONS(363), 1,
      anon_sym_AT,
    ACTIONS(361), 6,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_AT_AT,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5343] = 7,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      sym_account_name,
    ACTIONS(673), 1,
      anon_sym_SPACE,
    ACTIONS(675), 1,
      anon_sym_TAB,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    STATE(259), 1,
      sym_account,
  [5365] = 4,
    STATE(51), 1,
      sym_commodity,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(191), 3,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      aux_sym_commodity_token3,
  [5381] = 7,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      sym_account_name,
    ACTIONS(677), 1,
      anon_sym_SPACE,
    ACTIONS(679), 1,
      anon_sym_TAB,
    STATE(159), 1,
      aux_sym_whitespace_repeat1,
    STATE(271), 1,
      sym_account,
  [5403] = 7,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      sym_account_name,
    ACTIONS(669), 1,
      anon_sym_SPACE,
    ACTIONS(671), 1,
      anon_sym_TAB,
    STATE(183), 1,
      aux_sym_whitespace_repeat1,
    STATE(219), 1,
      sym_account,
  [5425] = 7,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      sym_account_name,
    ACTIONS(681), 1,
      anon_sym_SPACE,
    ACTIONS(683), 1,
      anon_sym_TAB,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    STATE(219), 1,
      sym_account,
  [5447] = 1,
    ACTIONS(685), 7,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5457] = 6,
    ACTIONS(454), 1,
      anon_sym_EQ,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(188), 1,
      sym_balance_assertion,
    STATE(322), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5477] = 4,
    ACTIONS(494), 1,
      sym_payee,
    STATE(168), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(687), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    ACTIONS(445), 3,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
  [5493] = 7,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
    ACTIONS(510), 1,
      anon_sym_LBRACK,
    ACTIONS(512), 1,
      sym_account_name,
    ACTIONS(669), 1,
      anon_sym_SPACE,
    ACTIONS(671), 1,
      anon_sym_TAB,
    STATE(183), 1,
      aux_sym_whitespace_repeat1,
    STATE(221), 1,
      sym_account,
  [5515] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(690), 1,
      anon_sym_LF,
    STATE(210), 1,
      aux_sym_whitespace_repeat1,
    STATE(330), 1,
      sym_note,
    ACTIONS(692), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5532] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(694), 1,
      anon_sym_LF,
    STATE(190), 1,
      sym_note,
    STATE(223), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(696), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5549] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(698), 1,
      anon_sym_LF,
    STATE(184), 1,
      aux_sym_whitespace_repeat1,
    STATE(199), 1,
      sym_note,
    ACTIONS(700), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5566] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(698), 1,
      anon_sym_LF,
    STATE(199), 1,
      sym_note,
    STATE(252), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(702), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5583] = 2,
    ACTIONS(704), 1,
      anon_sym_LF,
    ACTIONS(605), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5594] = 2,
    ACTIONS(704), 1,
      anon_sym_LF,
    ACTIONS(605), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5605] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(585), 1,
      anon_sym_LF,
    STATE(196), 1,
      aux_sym_whitespace_repeat1,
    STATE(315), 1,
      sym_note,
    ACTIONS(706), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5622] = 2,
    ACTIONS(708), 1,
      anon_sym_LF,
    ACTIONS(710), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endcomment,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5633] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(520), 1,
      anon_sym_LF,
    STATE(204), 1,
      aux_sym_whitespace_repeat1,
    STATE(308), 1,
      sym_note,
    ACTIONS(712), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5650] = 5,
    ACTIONS(450), 1,
      anon_sym_LF,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(213), 1,
      aux_sym_whitespace_repeat1,
    STATE(337), 1,
      sym_note,
    ACTIONS(714), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5667] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(474), 1,
      anon_sym_LF,
    STATE(197), 1,
      aux_sym_whitespace_repeat1,
    STATE(322), 1,
      sym_note,
    ACTIONS(716), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5684] = 2,
    ACTIONS(708), 1,
      anon_sym_LF,
    ACTIONS(710), 5,
      aux_sym_block_comment_token1,
      anon_sym_end,
      anon_sym_endtest,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5695] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(593), 1,
      anon_sym_LF,
    STATE(201), 1,
      aux_sym_whitespace_repeat1,
    STATE(321), 1,
      sym_note,
    ACTIONS(718), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5712] = 4,
    ACTIONS(720), 1,
      anon_sym_SPACE,
    ACTIONS(723), 1,
      anon_sym_TAB,
    STATE(183), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(494), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [5727] = 5,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(726), 1,
      sym_payee,
    STATE(168), 1,
      aux_sym_whitespace_repeat1,
    STATE(171), 1,
      sym_code,
    ACTIONS(554), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5744] = 3,
    ACTIONS(730), 1,
      anon_sym_EQ,
    STATE(230), 1,
      sym_effective_date,
    ACTIONS(728), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5757] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(732), 1,
      anon_sym_LF,
    STATE(113), 1,
      aux_sym_whitespace_repeat1,
    STATE(192), 1,
      sym_note,
    ACTIONS(734), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5774] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(736), 1,
      anon_sym_LF,
    STATE(206), 1,
      aux_sym_whitespace_repeat1,
    STATE(326), 1,
      sym_note,
    ACTIONS(738), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5791] = 5,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(526), 1,
      anon_sym_LF,
    STATE(195), 1,
      aux_sym_whitespace_repeat1,
    STATE(359), 1,
      sym_note,
    ACTIONS(740), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5808] = 1,
    ACTIONS(742), 6,
      anon_sym_LF,
      anon_sym_EQ,
      sym_time,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5817] = 3,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(19), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5829] = 4,
    ACTIONS(445), 1,
      anon_sym_LBRACK,
    ACTIONS(494), 1,
      aux_sym_note_token1,
    STATE(191), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(744), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5843] = 3,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(14), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5855] = 1,
    ACTIONS(747), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5863] = 2,
    ACTIONS(751), 1,
      anon_sym_SPACE,
    ACTIONS(749), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
      anon_sym_TAB,
  [5873] = 4,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(308), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5887] = 4,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(321), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5901] = 4,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(359), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5915] = 4,
    ACTIONS(753), 1,
      anon_sym_LF,
    ACTIONS(755), 1,
      anon_sym_EQ,
    STATE(212), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(757), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5929] = 3,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(18), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5941] = 4,
    ACTIONS(759), 1,
      anon_sym_LBRACK,
    ACTIONS(761), 1,
      aux_sym_note_token1,
    STATE(191), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(763), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5955] = 4,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(326), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5969] = 1,
    ACTIONS(765), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [5977] = 3,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(20), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [5989] = 4,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(315), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6003] = 3,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(17), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6015] = 4,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(330), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6029] = 4,
    ACTIONS(544), 1,
      anon_sym_assert,
    ACTIONS(546), 1,
      anon_sym_check,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(641), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6043] = 1,
    ACTIONS(767), 5,
      anon_sym_LF,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6051] = 3,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(216), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [6063] = 4,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(333), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6077] = 4,
    ACTIONS(769), 1,
      aux_sym_option_value_token1,
    STATE(267), 1,
      aux_sym_whitespace_repeat1,
    STATE(313), 1,
      sym_filename,
    ACTIONS(771), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6091] = 4,
    ACTIONS(773), 1,
      aux_sym_option_value_token1,
    STATE(267), 1,
      aux_sym_whitespace_repeat1,
    STATE(342), 1,
      sym_option_value,
    ACTIONS(771), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6105] = 4,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    STATE(322), 1,
      sym_note,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6119] = 3,
    ACTIONS(775), 1,
      sym_payee,
    STATE(168), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(554), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6130] = 3,
    ACTIONS(777), 1,
      aux_sym_eval_subdirective_token1,
    STATE(270), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(779), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6141] = 3,
    ACTIONS(781), 1,
      aux_sym_eval_subdirective_token1,
    STATE(270), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(779), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6152] = 1,
    ACTIONS(751), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6159] = 3,
    ACTIONS(775), 1,
      sym_payee,
    STATE(231), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(783), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6170] = 2,
    ACTIONS(785), 1,
      anon_sym_LF,
    ACTIONS(787), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6179] = 3,
    ACTIONS(789), 1,
      sym_time,
    STATE(264), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(791), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6190] = 2,
    ACTIONS(450), 1,
      anon_sym_LF,
    ACTIONS(793), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6199] = 3,
    ACTIONS(795), 1,
      aux_sym_block_comment_token1,
    STATE(239), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(797), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6210] = 3,
    ACTIONS(799), 1,
      sym_payee,
    STATE(168), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(554), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6221] = 3,
    ACTIONS(801), 1,
      aux_sym_block_comment_token1,
    STATE(239), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(797), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6232] = 3,
    ACTIONS(803), 1,
      aux_sym_eval_subdirective_token1,
    STATE(270), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(779), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6243] = 3,
    ACTIONS(805), 1,
      aux_sym_eval_subdirective_token1,
    STATE(270), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(779), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6254] = 3,
    ACTIONS(807), 1,
      aux_sym_eval_subdirective_token1,
    STATE(270), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(779), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6265] = 4,
    ACTIONS(35), 1,
      aux_sym_word_directive_token2,
    ACTIONS(59), 1,
      sym__2d,
    STATE(193), 1,
      sym__single_date,
    STATE(355), 1,
      sym__4d,
  [6278] = 3,
    ACTIONS(809), 1,
      aux_sym_eval_subdirective_token1,
    STATE(270), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(779), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6289] = 1,
    ACTIONS(811), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6296] = 3,
    ACTIONS(813), 1,
      sym_payee,
    STATE(168), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(554), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6307] = 3,
    ACTIONS(813), 1,
      sym_payee,
    STATE(243), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(815), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6318] = 2,
    ACTIONS(817), 1,
      anon_sym_LF,
    ACTIONS(819), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6327] = 3,
    ACTIONS(821), 1,
      anon_sym_LF,
    STATE(222), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(823), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6338] = 3,
    ACTIONS(825), 1,
      anon_sym_LF,
    STATE(224), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(827), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6349] = 1,
    ACTIONS(829), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6356] = 3,
    ACTIONS(831), 1,
      sym_query,
    STATE(257), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(833), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6367] = 3,
    ACTIONS(835), 1,
      aux_sym_block_comment_token1,
    STATE(239), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(797), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6378] = 3,
    ACTIONS(494), 1,
      aux_sym_block_comment_token1,
    STATE(239), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(837), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6389] = 3,
    ACTIONS(840), 1,
      anon_sym_EQ,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6400] = 3,
    ACTIONS(842), 1,
      aux_sym_tag_directive_token1,
    STATE(114), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(641), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6411] = 3,
    ACTIONS(844), 1,
      aux_sym_block_comment_token1,
    STATE(239), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(797), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6422] = 3,
    ACTIONS(846), 1,
      sym_payee,
    STATE(168), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(554), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6433] = 3,
    ACTIONS(846), 1,
      sym_payee,
    STATE(251), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(848), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6444] = 3,
    ACTIONS(850), 1,
      sym_time,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6455] = 3,
    ACTIONS(852), 1,
      sym_time,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6466] = 3,
    ACTIONS(854), 1,
      aux_sym_word_directive_token1,
    STATE(268), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(856), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6477] = 3,
    ACTIONS(858), 1,
      aux_sym_option_value_token1,
    STATE(267), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(771), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6488] = 1,
    ACTIONS(860), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6495] = 2,
    ACTIONS(862), 1,
      anon_sym_LF,
    ACTIONS(864), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6504] = 3,
    ACTIONS(866), 1,
      sym_payee,
    STATE(168), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(554), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6515] = 3,
    ACTIONS(726), 1,
      sym_payee,
    STATE(168), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(554), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6526] = 1,
    ACTIONS(868), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6533] = 3,
    ACTIONS(870), 1,
      aux_sym_word_directive_token2,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6544] = 1,
    ACTIONS(872), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6551] = 3,
    ACTIONS(874), 1,
      aux_sym_word_directive_token2,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6562] = 3,
    ACTIONS(494), 1,
      sym_query,
    STATE(257), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(876), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6573] = 3,
    ACTIONS(879), 1,
      sym_payee,
    STATE(214), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(881), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6584] = 2,
    ACTIONS(883), 1,
      anon_sym_LF,
    ACTIONS(885), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6593] = 3,
    ACTIONS(887), 1,
      anon_sym_EQ,
    STATE(240), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(889), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6604] = 3,
    ACTIONS(891), 1,
      sym_time,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6615] = 2,
    ACTIONS(470), 1,
      anon_sym_LF,
    ACTIONS(893), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6624] = 3,
    ACTIONS(891), 1,
      sym_time,
    STATE(245), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(895), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6635] = 3,
    ACTIONS(897), 1,
      sym_time,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(532), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6646] = 3,
    ACTIONS(897), 1,
      sym_time,
    STATE(246), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(899), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6657] = 1,
    ACTIONS(901), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6664] = 3,
    ACTIONS(494), 1,
      aux_sym_option_value_token1,
    STATE(267), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(903), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6675] = 3,
    ACTIONS(494), 1,
      aux_sym_word_directive_token1,
    STATE(268), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(906), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6686] = 3,
    ACTIONS(909), 1,
      sym_time,
    STATE(261), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(911), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6697] = 3,
    ACTIONS(445), 1,
      aux_sym_eval_subdirective_token1,
    STATE(270), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(913), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6708] = 2,
    ACTIONS(916), 1,
      anon_sym_LF,
    ACTIONS(918), 3,
      anon_sym_TAB,
      anon_sym_,
      anon_sym_TAB2,
  [6717] = 2,
    STATE(225), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(920), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6725] = 1,
    ACTIONS(922), 3,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6731] = 3,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(924), 1,
      anon_sym_LF,
    STATE(203), 1,
      sym_note,
  [6741] = 2,
    STATE(200), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(926), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6749] = 2,
    STATE(241), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(928), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6757] = 2,
    STATE(157), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(930), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6765] = 2,
    STATE(247), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(932), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6773] = 2,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(934), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6781] = 3,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(698), 1,
      anon_sym_LF,
    STATE(199), 1,
      sym_note,
  [6791] = 1,
    ACTIONS(936), 3,
      anon_sym_LF,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6797] = 3,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(938), 1,
      anon_sym_LF,
    STATE(209), 1,
      sym_note,
  [6807] = 2,
    STATE(229), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(940), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6815] = 2,
    STATE(237), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(942), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6823] = 2,
    STATE(227), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(944), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6831] = 2,
    STATE(215), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(946), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6839] = 2,
    STATE(216), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(948), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6847] = 2,
    STATE(142), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(950), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6855] = 2,
    STATE(256), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(952), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6863] = 2,
    STATE(254), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(954), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6871] = 2,
    STATE(211), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(956), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6879] = 2,
    STATE(156), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(958), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6887] = 2,
    STATE(158), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(960), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6895] = 2,
    STATE(82), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(962), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6903] = 3,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(694), 1,
      anon_sym_LF,
    STATE(190), 1,
      sym_note,
  [6913] = 3,
    ACTIONS(456), 1,
      anon_sym_SEMI,
    ACTIONS(964), 1,
      anon_sym_LF,
    STATE(205), 1,
      sym_note,
  [6923] = 2,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(966), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6931] = 2,
    STATE(143), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(968), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6939] = 2,
    STATE(149), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(970), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6947] = 2,
    STATE(248), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(972), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6955] = 2,
    STATE(226), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(974), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6963] = 2,
    STATE(155), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(976), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6971] = 2,
    STATE(145), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(978), 2,
      anon_sym_SPACE,
      anon_sym_TAB,
  [6979] = 2,
    ACTIONS(730), 1,
      anon_sym_EQ,
    STATE(349), 1,
      sym_effective_date,
  [6986] = 2,
    ACTIONS(980), 1,
      aux_sym_option_value_token1,
    STATE(342), 1,
      sym_option_value,
  [6993] = 1,
    ACTIONS(982), 2,
      anon_sym_LF,
      anon_sym_SEMI,
  [6998] = 1,
    ACTIONS(984), 1,
      anon_sym_LF,
  [7002] = 1,
    ACTIONS(585), 1,
      anon_sym_LF,
  [7006] = 1,
    ACTIONS(817), 1,
      anon_sym_LF,
  [7010] = 1,
    ACTIONS(986), 1,
      anon_sym_LF,
  [7014] = 1,
    ACTIONS(988), 1,
      anon_sym_LF,
  [7018] = 1,
    ACTIONS(990), 1,
      anon_sym_LF,
  [7022] = 1,
    ACTIONS(992), 1,
      anon_sym_LF,
  [7026] = 1,
    ACTIONS(994), 1,
      anon_sym_EQ,
  [7030] = 1,
    ACTIONS(593), 1,
      anon_sym_LF,
  [7034] = 1,
    ACTIONS(996), 1,
      anon_sym_LF,
  [7038] = 1,
    ACTIONS(998), 1,
      anon_sym_LF,
  [7042] = 1,
    ACTIONS(1000), 1,
      aux_sym_option_token1,
  [7046] = 1,
    ACTIONS(1002), 1,
      anon_sym_LF,
  [7050] = 1,
    ACTIONS(1004), 1,
      sym__quantity,
  [7054] = 1,
    ACTIONS(736), 1,
      anon_sym_LF,
  [7058] = 1,
    ACTIONS(526), 1,
      anon_sym_LF,
  [7062] = 1,
    ACTIONS(1006), 1,
      anon_sym_LF,
  [7066] = 1,
    ACTIONS(1008), 1,
      anon_sym_LF,
  [7070] = 1,
    ACTIONS(1010), 1,
      anon_sym_LF,
  [7074] = 1,
    ACTIONS(690), 1,
      anon_sym_LF,
  [7078] = 1,
    ACTIONS(1012), 1,
      ts_builtin_sym_end,
  [7082] = 1,
    ACTIONS(1014), 1,
      anon_sym_LF,
  [7086] = 1,
    ACTIONS(1016), 1,
      sym__quantity,
  [7090] = 1,
    ACTIONS(1018), 1,
      anon_sym_LF,
  [7094] = 1,
    ACTIONS(1020), 1,
      anon_sym_LF,
  [7098] = 1,
    ACTIONS(1022), 1,
      aux_sym_code_token1,
  [7102] = 1,
    ACTIONS(1024), 1,
      anon_sym_LF,
  [7106] = 1,
    ACTIONS(1026), 1,
      sym__2d,
  [7110] = 1,
    ACTIONS(1028), 1,
      anon_sym_LF,
  [7114] = 1,
    ACTIONS(450), 1,
      anon_sym_LF,
  [7118] = 1,
    ACTIONS(474), 1,
      anon_sym_LF,
  [7122] = 1,
    ACTIONS(1030), 1,
      anon_sym_LF,
  [7126] = 1,
    ACTIONS(1032), 1,
      anon_sym_RPAREN,
  [7130] = 1,
    ACTIONS(1034), 1,
      anon_sym_LF,
  [7134] = 1,
    ACTIONS(1036), 1,
      anon_sym_LF,
  [7138] = 1,
    ACTIONS(1038), 1,
      anon_sym_LF,
  [7142] = 1,
    ACTIONS(1040), 1,
      sym_account_name,
  [7146] = 1,
    ACTIONS(1042), 1,
      anon_sym_LF,
  [7150] = 1,
    ACTIONS(647), 1,
      sym__dsep,
  [7154] = 1,
    ACTIONS(1044), 1,
      anon_sym_LF,
  [7158] = 1,
    ACTIONS(1046), 1,
      anon_sym_LF,
  [7162] = 1,
    ACTIONS(1048), 1,
      sym__2d,
  [7166] = 1,
    ACTIONS(1050), 1,
      anon_sym_RBRACK,
  [7170] = 1,
    ACTIONS(1052), 1,
      sym__2d,
  [7174] = 1,
    ACTIONS(1054), 1,
      anon_sym_LF,
  [7178] = 1,
    ACTIONS(1056), 1,
      anon_sym_LF,
  [7182] = 1,
    ACTIONS(1058), 1,
      anon_sym_LF,
  [7186] = 1,
    ACTIONS(1060), 1,
      anon_sym_LF,
  [7190] = 1,
    ACTIONS(1062), 1,
      sym__dsep,
  [7194] = 1,
    ACTIONS(1064), 1,
      aux_sym_option_value_token1,
  [7198] = 1,
    ACTIONS(1066), 1,
      anon_sym_LF,
  [7202] = 1,
    ACTIONS(1068), 1,
      sym__dsep,
  [7206] = 1,
    ACTIONS(520), 1,
      anon_sym_LF,
  [7210] = 1,
    ACTIONS(785), 1,
      anon_sym_LF,
  [7214] = 1,
    ACTIONS(1070), 1,
      anon_sym_RPAREN,
  [7218] = 1,
    ACTIONS(1072), 1,
      anon_sym_LF,
  [7222] = 1,
    ACTIONS(1074), 1,
      sym_account_name,
  [7226] = 1,
    ACTIONS(1076), 1,
      anon_sym_LF,
  [7230] = 1,
    ACTIONS(1078), 1,
      sym__quantity,
  [7234] = 1,
    ACTIONS(1080), 1,
      sym__quantity,
  [7238] = 1,
    ACTIONS(1082), 1,
      anon_sym_LF,
  [7242] = 1,
    ACTIONS(1084), 1,
      sym__quantity,
  [7246] = 1,
    ACTIONS(1086), 1,
      sym__quantity,
  [7250] = 1,
    ACTIONS(1088), 1,
      anon_sym_LF,
  [7254] = 1,
    ACTIONS(1032), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 130,
  [SMALL_STATE(4)] = 260,
  [SMALL_STATE(5)] = 315,
  [SMALL_STATE(6)] = 370,
  [SMALL_STATE(7)] = 425,
  [SMALL_STATE(8)] = 478,
  [SMALL_STATE(9)] = 531,
  [SMALL_STATE(10)] = 584,
  [SMALL_STATE(11)] = 636,
  [SMALL_STATE(12)] = 683,
  [SMALL_STATE(13)] = 730,
  [SMALL_STATE(14)] = 777,
  [SMALL_STATE(15)] = 823,
  [SMALL_STATE(16)] = 869,
  [SMALL_STATE(17)] = 915,
  [SMALL_STATE(18)] = 961,
  [SMALL_STATE(19)] = 1007,
  [SMALL_STATE(20)] = 1053,
  [SMALL_STATE(21)] = 1099,
  [SMALL_STATE(22)] = 1139,
  [SMALL_STATE(23)] = 1179,
  [SMALL_STATE(24)] = 1219,
  [SMALL_STATE(25)] = 1256,
  [SMALL_STATE(26)] = 1293,
  [SMALL_STATE(27)] = 1330,
  [SMALL_STATE(28)] = 1367,
  [SMALL_STATE(29)] = 1404,
  [SMALL_STATE(30)] = 1441,
  [SMALL_STATE(31)] = 1478,
  [SMALL_STATE(32)] = 1515,
  [SMALL_STATE(33)] = 1552,
  [SMALL_STATE(34)] = 1589,
  [SMALL_STATE(35)] = 1626,
  [SMALL_STATE(36)] = 1663,
  [SMALL_STATE(37)] = 1700,
  [SMALL_STATE(38)] = 1737,
  [SMALL_STATE(39)] = 1774,
  [SMALL_STATE(40)] = 1811,
  [SMALL_STATE(41)] = 1848,
  [SMALL_STATE(42)] = 1885,
  [SMALL_STATE(43)] = 1922,
  [SMALL_STATE(44)] = 1959,
  [SMALL_STATE(45)] = 1996,
  [SMALL_STATE(46)] = 2033,
  [SMALL_STATE(47)] = 2070,
  [SMALL_STATE(48)] = 2107,
  [SMALL_STATE(49)] = 2144,
  [SMALL_STATE(50)] = 2181,
  [SMALL_STATE(51)] = 2218,
  [SMALL_STATE(52)] = 2255,
  [SMALL_STATE(53)] = 2292,
  [SMALL_STATE(54)] = 2329,
  [SMALL_STATE(55)] = 2367,
  [SMALL_STATE(56)] = 2405,
  [SMALL_STATE(57)] = 2443,
  [SMALL_STATE(58)] = 2481,
  [SMALL_STATE(59)] = 2519,
  [SMALL_STATE(60)] = 2557,
  [SMALL_STATE(61)] = 2595,
  [SMALL_STATE(62)] = 2633,
  [SMALL_STATE(63)] = 2668,
  [SMALL_STATE(64)] = 2703,
  [SMALL_STATE(65)] = 2738,
  [SMALL_STATE(66)] = 2773,
  [SMALL_STATE(67)] = 2808,
  [SMALL_STATE(68)] = 2843,
  [SMALL_STATE(69)] = 2878,
  [SMALL_STATE(70)] = 2913,
  [SMALL_STATE(71)] = 2948,
  [SMALL_STATE(72)] = 2983,
  [SMALL_STATE(73)] = 3018,
  [SMALL_STATE(74)] = 3053,
  [SMALL_STATE(75)] = 3088,
  [SMALL_STATE(76)] = 3123,
  [SMALL_STATE(77)] = 3158,
  [SMALL_STATE(78)] = 3193,
  [SMALL_STATE(79)] = 3229,
  [SMALL_STATE(80)] = 3285,
  [SMALL_STATE(81)] = 3341,
  [SMALL_STATE(82)] = 3397,
  [SMALL_STATE(83)] = 3427,
  [SMALL_STATE(84)] = 3480,
  [SMALL_STATE(85)] = 3533,
  [SMALL_STATE(86)] = 3586,
  [SMALL_STATE(87)] = 3604,
  [SMALL_STATE(88)] = 3636,
  [SMALL_STATE(89)] = 3668,
  [SMALL_STATE(90)] = 3700,
  [SMALL_STATE(91)] = 3732,
  [SMALL_STATE(92)] = 3764,
  [SMALL_STATE(93)] = 3796,
  [SMALL_STATE(94)] = 3828,
  [SMALL_STATE(95)] = 3850,
  [SMALL_STATE(96)] = 3882,
  [SMALL_STATE(97)] = 3914,
  [SMALL_STATE(98)] = 3946,
  [SMALL_STATE(99)] = 3968,
  [SMALL_STATE(100)] = 4003,
  [SMALL_STATE(101)] = 4028,
  [SMALL_STATE(102)] = 4060,
  [SMALL_STATE(103)] = 4092,
  [SMALL_STATE(104)] = 4124,
  [SMALL_STATE(105)] = 4156,
  [SMALL_STATE(106)] = 4185,
  [SMALL_STATE(107)] = 4214,
  [SMALL_STATE(108)] = 4243,
  [SMALL_STATE(109)] = 4258,
  [SMALL_STATE(110)] = 4287,
  [SMALL_STATE(111)] = 4316,
  [SMALL_STATE(112)] = 4331,
  [SMALL_STATE(113)] = 4346,
  [SMALL_STATE(114)] = 4370,
  [SMALL_STATE(115)] = 4388,
  [SMALL_STATE(116)] = 4408,
  [SMALL_STATE(117)] = 4431,
  [SMALL_STATE(118)] = 4454,
  [SMALL_STATE(119)] = 4477,
  [SMALL_STATE(120)] = 4500,
  [SMALL_STATE(121)] = 4523,
  [SMALL_STATE(122)] = 4546,
  [SMALL_STATE(123)] = 4569,
  [SMALL_STATE(124)] = 4592,
  [SMALL_STATE(125)] = 4615,
  [SMALL_STATE(126)] = 4636,
  [SMALL_STATE(127)] = 4659,
  [SMALL_STATE(128)] = 4682,
  [SMALL_STATE(129)] = 4705,
  [SMALL_STATE(130)] = 4728,
  [SMALL_STATE(131)] = 4749,
  [SMALL_STATE(132)] = 4770,
  [SMALL_STATE(133)] = 4793,
  [SMALL_STATE(134)] = 4814,
  [SMALL_STATE(135)] = 4835,
  [SMALL_STATE(136)] = 4856,
  [SMALL_STATE(137)] = 4869,
  [SMALL_STATE(138)] = 4892,
  [SMALL_STATE(139)] = 4915,
  [SMALL_STATE(140)] = 4938,
  [SMALL_STATE(141)] = 4961,
  [SMALL_STATE(142)] = 4984,
  [SMALL_STATE(143)] = 5007,
  [SMALL_STATE(144)] = 5023,
  [SMALL_STATE(145)] = 5045,
  [SMALL_STATE(146)] = 5067,
  [SMALL_STATE(147)] = 5087,
  [SMALL_STATE(148)] = 5107,
  [SMALL_STATE(149)] = 5129,
  [SMALL_STATE(150)] = 5145,
  [SMALL_STATE(151)] = 5157,
  [SMALL_STATE(152)] = 5177,
  [SMALL_STATE(153)] = 5193,
  [SMALL_STATE(154)] = 5213,
  [SMALL_STATE(155)] = 5233,
  [SMALL_STATE(156)] = 5255,
  [SMALL_STATE(157)] = 5271,
  [SMALL_STATE(158)] = 5293,
  [SMALL_STATE(159)] = 5309,
  [SMALL_STATE(160)] = 5331,
  [SMALL_STATE(161)] = 5343,
  [SMALL_STATE(162)] = 5365,
  [SMALL_STATE(163)] = 5381,
  [SMALL_STATE(164)] = 5403,
  [SMALL_STATE(165)] = 5425,
  [SMALL_STATE(166)] = 5447,
  [SMALL_STATE(167)] = 5457,
  [SMALL_STATE(168)] = 5477,
  [SMALL_STATE(169)] = 5493,
  [SMALL_STATE(170)] = 5515,
  [SMALL_STATE(171)] = 5532,
  [SMALL_STATE(172)] = 5549,
  [SMALL_STATE(173)] = 5566,
  [SMALL_STATE(174)] = 5583,
  [SMALL_STATE(175)] = 5594,
  [SMALL_STATE(176)] = 5605,
  [SMALL_STATE(177)] = 5622,
  [SMALL_STATE(178)] = 5633,
  [SMALL_STATE(179)] = 5650,
  [SMALL_STATE(180)] = 5667,
  [SMALL_STATE(181)] = 5684,
  [SMALL_STATE(182)] = 5695,
  [SMALL_STATE(183)] = 5712,
  [SMALL_STATE(184)] = 5727,
  [SMALL_STATE(185)] = 5744,
  [SMALL_STATE(186)] = 5757,
  [SMALL_STATE(187)] = 5774,
  [SMALL_STATE(188)] = 5791,
  [SMALL_STATE(189)] = 5808,
  [SMALL_STATE(190)] = 5817,
  [SMALL_STATE(191)] = 5829,
  [SMALL_STATE(192)] = 5843,
  [SMALL_STATE(193)] = 5855,
  [SMALL_STATE(194)] = 5863,
  [SMALL_STATE(195)] = 5873,
  [SMALL_STATE(196)] = 5887,
  [SMALL_STATE(197)] = 5901,
  [SMALL_STATE(198)] = 5915,
  [SMALL_STATE(199)] = 5929,
  [SMALL_STATE(200)] = 5941,
  [SMALL_STATE(201)] = 5955,
  [SMALL_STATE(202)] = 5969,
  [SMALL_STATE(203)] = 5977,
  [SMALL_STATE(204)] = 5989,
  [SMALL_STATE(205)] = 6003,
  [SMALL_STATE(206)] = 6015,
  [SMALL_STATE(207)] = 6029,
  [SMALL_STATE(208)] = 6043,
  [SMALL_STATE(209)] = 6051,
  [SMALL_STATE(210)] = 6063,
  [SMALL_STATE(211)] = 6077,
  [SMALL_STATE(212)] = 6091,
  [SMALL_STATE(213)] = 6105,
  [SMALL_STATE(214)] = 6119,
  [SMALL_STATE(215)] = 6130,
  [SMALL_STATE(216)] = 6141,
  [SMALL_STATE(217)] = 6152,
  [SMALL_STATE(218)] = 6159,
  [SMALL_STATE(219)] = 6170,
  [SMALL_STATE(220)] = 6179,
  [SMALL_STATE(221)] = 6190,
  [SMALL_STATE(222)] = 6199,
  [SMALL_STATE(223)] = 6210,
  [SMALL_STATE(224)] = 6221,
  [SMALL_STATE(225)] = 6232,
  [SMALL_STATE(226)] = 6243,
  [SMALL_STATE(227)] = 6254,
  [SMALL_STATE(228)] = 6265,
  [SMALL_STATE(229)] = 6278,
  [SMALL_STATE(230)] = 6289,
  [SMALL_STATE(231)] = 6296,
  [SMALL_STATE(232)] = 6307,
  [SMALL_STATE(233)] = 6318,
  [SMALL_STATE(234)] = 6327,
  [SMALL_STATE(235)] = 6338,
  [SMALL_STATE(236)] = 6349,
  [SMALL_STATE(237)] = 6356,
  [SMALL_STATE(238)] = 6367,
  [SMALL_STATE(239)] = 6378,
  [SMALL_STATE(240)] = 6389,
  [SMALL_STATE(241)] = 6400,
  [SMALL_STATE(242)] = 6411,
  [SMALL_STATE(243)] = 6422,
  [SMALL_STATE(244)] = 6433,
  [SMALL_STATE(245)] = 6444,
  [SMALL_STATE(246)] = 6455,
  [SMALL_STATE(247)] = 6466,
  [SMALL_STATE(248)] = 6477,
  [SMALL_STATE(249)] = 6488,
  [SMALL_STATE(250)] = 6495,
  [SMALL_STATE(251)] = 6504,
  [SMALL_STATE(252)] = 6515,
  [SMALL_STATE(253)] = 6526,
  [SMALL_STATE(254)] = 6533,
  [SMALL_STATE(255)] = 6544,
  [SMALL_STATE(256)] = 6551,
  [SMALL_STATE(257)] = 6562,
  [SMALL_STATE(258)] = 6573,
  [SMALL_STATE(259)] = 6584,
  [SMALL_STATE(260)] = 6593,
  [SMALL_STATE(261)] = 6604,
  [SMALL_STATE(262)] = 6615,
  [SMALL_STATE(263)] = 6624,
  [SMALL_STATE(264)] = 6635,
  [SMALL_STATE(265)] = 6646,
  [SMALL_STATE(266)] = 6657,
  [SMALL_STATE(267)] = 6664,
  [SMALL_STATE(268)] = 6675,
  [SMALL_STATE(269)] = 6686,
  [SMALL_STATE(270)] = 6697,
  [SMALL_STATE(271)] = 6708,
  [SMALL_STATE(272)] = 6717,
  [SMALL_STATE(273)] = 6725,
  [SMALL_STATE(274)] = 6731,
  [SMALL_STATE(275)] = 6741,
  [SMALL_STATE(276)] = 6749,
  [SMALL_STATE(277)] = 6757,
  [SMALL_STATE(278)] = 6765,
  [SMALL_STATE(279)] = 6773,
  [SMALL_STATE(280)] = 6781,
  [SMALL_STATE(281)] = 6791,
  [SMALL_STATE(282)] = 6797,
  [SMALL_STATE(283)] = 6807,
  [SMALL_STATE(284)] = 6815,
  [SMALL_STATE(285)] = 6823,
  [SMALL_STATE(286)] = 6831,
  [SMALL_STATE(287)] = 6839,
  [SMALL_STATE(288)] = 6847,
  [SMALL_STATE(289)] = 6855,
  [SMALL_STATE(290)] = 6863,
  [SMALL_STATE(291)] = 6871,
  [SMALL_STATE(292)] = 6879,
  [SMALL_STATE(293)] = 6887,
  [SMALL_STATE(294)] = 6895,
  [SMALL_STATE(295)] = 6903,
  [SMALL_STATE(296)] = 6913,
  [SMALL_STATE(297)] = 6923,
  [SMALL_STATE(298)] = 6931,
  [SMALL_STATE(299)] = 6939,
  [SMALL_STATE(300)] = 6947,
  [SMALL_STATE(301)] = 6955,
  [SMALL_STATE(302)] = 6963,
  [SMALL_STATE(303)] = 6971,
  [SMALL_STATE(304)] = 6979,
  [SMALL_STATE(305)] = 6986,
  [SMALL_STATE(306)] = 6993,
  [SMALL_STATE(307)] = 6998,
  [SMALL_STATE(308)] = 7002,
  [SMALL_STATE(309)] = 7006,
  [SMALL_STATE(310)] = 7010,
  [SMALL_STATE(311)] = 7014,
  [SMALL_STATE(312)] = 7018,
  [SMALL_STATE(313)] = 7022,
  [SMALL_STATE(314)] = 7026,
  [SMALL_STATE(315)] = 7030,
  [SMALL_STATE(316)] = 7034,
  [SMALL_STATE(317)] = 7038,
  [SMALL_STATE(318)] = 7042,
  [SMALL_STATE(319)] = 7046,
  [SMALL_STATE(320)] = 7050,
  [SMALL_STATE(321)] = 7054,
  [SMALL_STATE(322)] = 7058,
  [SMALL_STATE(323)] = 7062,
  [SMALL_STATE(324)] = 7066,
  [SMALL_STATE(325)] = 7070,
  [SMALL_STATE(326)] = 7074,
  [SMALL_STATE(327)] = 7078,
  [SMALL_STATE(328)] = 7082,
  [SMALL_STATE(329)] = 7086,
  [SMALL_STATE(330)] = 7090,
  [SMALL_STATE(331)] = 7094,
  [SMALL_STATE(332)] = 7098,
  [SMALL_STATE(333)] = 7102,
  [SMALL_STATE(334)] = 7106,
  [SMALL_STATE(335)] = 7110,
  [SMALL_STATE(336)] = 7114,
  [SMALL_STATE(337)] = 7118,
  [SMALL_STATE(338)] = 7122,
  [SMALL_STATE(339)] = 7126,
  [SMALL_STATE(340)] = 7130,
  [SMALL_STATE(341)] = 7134,
  [SMALL_STATE(342)] = 7138,
  [SMALL_STATE(343)] = 7142,
  [SMALL_STATE(344)] = 7146,
  [SMALL_STATE(345)] = 7150,
  [SMALL_STATE(346)] = 7154,
  [SMALL_STATE(347)] = 7158,
  [SMALL_STATE(348)] = 7162,
  [SMALL_STATE(349)] = 7166,
  [SMALL_STATE(350)] = 7170,
  [SMALL_STATE(351)] = 7174,
  [SMALL_STATE(352)] = 7178,
  [SMALL_STATE(353)] = 7182,
  [SMALL_STATE(354)] = 7186,
  [SMALL_STATE(355)] = 7190,
  [SMALL_STATE(356)] = 7194,
  [SMALL_STATE(357)] = 7198,
  [SMALL_STATE(358)] = 7202,
  [SMALL_STATE(359)] = 7206,
  [SMALL_STATE(360)] = 7210,
  [SMALL_STATE(361)] = 7214,
  [SMALL_STATE(362)] = 7218,
  [SMALL_STATE(363)] = 7222,
  [SMALL_STATE(364)] = 7226,
  [SMALL_STATE(365)] = 7230,
  [SMALL_STATE(366)] = 7234,
  [SMALL_STATE(367)] = 7238,
  [SMALL_STATE(368)] = 7242,
  [SMALL_STATE(369)] = 7246,
  [SMALL_STATE(370)] = 7250,
  [SMALL_STATE(371)] = 7254,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(65),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(344),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(235),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(318),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(318),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(303),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(299),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(276),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(291),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(278),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(300),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(290),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(355),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(302),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(277),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(289),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(293),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(297),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(298),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(288),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(129),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(294),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(358),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2, 0, 0),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(109),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_directive_repeat1, 2, 0, 0),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_directive_repeat1, 2, 0, 0), SHIFT_REPEAT(207),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 3, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_directive, 4, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_directive, 4, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_automated_xact, 5, 0, 0),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_automated_xact, 5, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 5, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 5, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 9, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 9, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_quantity, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_quantity, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee_subdirective, 4, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_payee_subdirective, 4, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3, 0, 0),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nomarket_subdirective, 3, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nomarket_subdirective, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4, 0, 0),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eval_subdirective, 4, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eval_subdirective, 4, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 10, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 10, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 11, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 11, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 12, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 12, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 13, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 13, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 14, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 14, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 6, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 6, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 4, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 4, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 4, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 4, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 5, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 5, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 5, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 5, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 6, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 6, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 3, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 7, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 7, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_test, 7, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_test, 7, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 3, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 3, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0),
  [447] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [552] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [559] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [579] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [581] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [583] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(125),
  [602] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(347),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [607] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(238),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [612] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [616] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(131),
  [631] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(364),
  [634] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(242),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 3, 0, 0),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [659] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [661] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__single_date, 5, 0, 0),
  [687] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(168),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 2, 0, 0),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_comment_repeat1, 3, 0, 0),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 3, 0, 0),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [723] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(183),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 1, 0, 0),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1, 0, 0),
  [744] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(191),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_effective_date, 2, 0, 0),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1, 0, 0),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1, 0, 0),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3, 0, 0),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [773] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6, 0, 0),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xact_date, 2, 0, 0),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [815] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7, 0, 0),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2, 0, 0),
  [831] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [835] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [837] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(239),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [844] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [854] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [858] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3, 0, 0),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1, 0, 1),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3, 0, 3),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [876] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(257),
  [879] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [881] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5, 0, 0),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, 0, 0),
  [903] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(267),
  [906] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [913] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2, 0, 0), SHIFT_REPEAT(270),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4, 0, 0),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, 0, 0),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [936] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 3, 0, 0),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [982] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 1, 0, 0),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1, 0, 0),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3, 0, 0),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3, 0, 2),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1002] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3, 0, 0),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1, 0, 0),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4, 0, 0),
  [1012] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1014] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5, 0, 4),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1020] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5, 0, 0),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7, 0, 0),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8, 0, 0),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5, 0, 0),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1042] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1, 0, 0),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3, 0, 0),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10, 0, 0),
  [1056] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9, 0, 0),
  [1058] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_value, 1, 0, 0),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1066] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6, 0, 0),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ledger(void) {
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
