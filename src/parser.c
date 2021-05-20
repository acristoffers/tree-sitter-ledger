#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 268
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 0
#define TOKEN_COUNT 70
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_SEMI = 2,
  anon_sym_STAR = 3,
  aux_sym_comment_token1 = 4,
  anon_sym_account = 5,
  anon_sym_commodity = 6,
  anon_sym_include = 7,
  aux_sym_word_directive_token1 = 8,
  anon_sym_end = 9,
  anon_sym_alias = 10,
  aux_sym_word_directive_token2 = 11,
  anon_sym_EQ = 12,
  anon_sym_def = 13,
  anon_sym_year = 14,
  aux_sym_word_directive_token3 = 15,
  anon_sym_bucket = 16,
  anon_sym_A = 17,
  anon_sym_Y = 18,
  anon_sym_N = 19,
  anon_sym_D = 20,
  anon_sym_C = 21,
  anon_sym_P = 22,
  aux_sym_alias_subdirective_token1 = 23,
  anon_sym_assert = 24,
  anon_sym_check = 25,
  anon_sym_default = 26,
  aux_sym_default_subdirective_token1 = 27,
  anon_sym_eval = 28,
  anon_sym_format = 29,
  anon_sym_nomarket = 30,
  anon_sym_note = 31,
  anon_sym_payee = 32,
  anon_sym_i = 33,
  anon_sym_I = 34,
  anon_sym_o = 35,
  anon_sym_O = 36,
  anon_sym_TILDE = 37,
  aux_sym_interval_token1 = 38,
  aux_sym_interval_token2 = 39,
  aux_sym_interval_token3 = 40,
  aux_sym_interval_token4 = 41,
  aux_sym_interval_token5 = 42,
  aux_sym_interval_token6 = 43,
  aux_sym_interval_token7 = 44,
  aux_sym_interval_token8 = 45,
  aux_sym_interval_token9 = 46,
  aux_sym_interval_token10 = 47,
  aux_sym_interval_token11 = 48,
  aux_sym_interval_token12 = 49,
  sym_single_date = 50,
  sym_time = 51,
  anon_sym_BANG = 52,
  sym_payee = 53,
  aux_sym_note_token1 = 54,
  anon_sym_LPAREN = 55,
  anon_sym_RPAREN = 56,
  anon_sym_LBRACK = 57,
  anon_sym_RBRACK = 58,
  sym_account_name = 59,
  anon_sym_DASH = 60,
  aux_sym_quantity_token1 = 61,
  aux_sym_commodity_token1 = 62,
  aux_sym_commodity_token2 = 63,
  anon_sym_AT = 64,
  anon_sym_AT_AT = 65,
  anon_sym_ = 66,
  anon_sym_TAB = 67,
  anon_sym_2 = 68,
  anon_sym_TAB2 = 69,
  sym_source_file = 70,
  sym_journal_item = 71,
  sym_comment = 72,
  sym_directive = 73,
  sym_account_directive = 74,
  sym_account_subdirective = 75,
  sym_commodity_directive = 76,
  sym_commodity_subdirective = 77,
  sym_word_directive = 78,
  sym_char_directive = 79,
  sym_alias_subdirective = 80,
  sym_assert_subdirective = 81,
  sym_check_subdirective = 82,
  sym_default_subdirective = 83,
  sym_eval_subdirective = 84,
  sym_format_subdirective = 85,
  sym_nomarket_subdirective = 86,
  sym_note_subdirective = 87,
  sym_payee_subdirective = 88,
  sym_check_in = 89,
  sym_check_out = 90,
  sym_xact = 91,
  sym_plain_xact = 92,
  sym_periodic_xact = 93,
  sym_interval = 94,
  sym_date = 95,
  sym_status = 96,
  sym_note = 97,
  sym_posting = 98,
  sym_account = 99,
  sym_amount = 100,
  sym_quantity = 101,
  sym_commodity = 102,
  sym_price = 103,
  sym_balance_assertion = 104,
  aux_sym_source_file_repeat1 = 105,
  aux_sym_account_directive_repeat1 = 106,
  aux_sym_commodity_directive_repeat1 = 107,
  aux_sym_plain_xact_repeat1 = 108,
  aux_sym_whitespace_repeat1 = 109,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_STAR] = "*",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_account] = "account",
  [anon_sym_commodity] = "commodity",
  [anon_sym_include] = "include",
  [aux_sym_word_directive_token1] = "word_directive_token1",
  [anon_sym_end] = "end",
  [anon_sym_alias] = "alias",
  [aux_sym_word_directive_token2] = "word_directive_token2",
  [anon_sym_EQ] = "=",
  [anon_sym_def] = "def",
  [anon_sym_year] = "year",
  [aux_sym_word_directive_token3] = "word_directive_token3",
  [anon_sym_bucket] = "bucket",
  [anon_sym_A] = "A",
  [anon_sym_Y] = "Y",
  [anon_sym_N] = "N",
  [anon_sym_D] = "D",
  [anon_sym_C] = "C",
  [anon_sym_P] = "P",
  [aux_sym_alias_subdirective_token1] = "alias_subdirective_token1",
  [anon_sym_assert] = "assert",
  [anon_sym_check] = "check",
  [anon_sym_default] = "default",
  [aux_sym_default_subdirective_token1] = "default_subdirective_token1",
  [anon_sym_eval] = "eval",
  [anon_sym_format] = "format",
  [anon_sym_nomarket] = "nomarket",
  [anon_sym_note] = "note",
  [anon_sym_payee] = "payee",
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
  [sym_single_date] = "single_date",
  [sym_time] = "time",
  [anon_sym_BANG] = "!",
  [sym_payee] = "payee",
  [aux_sym_note_token1] = "note_token1",
  [anon_sym_LPAREN] = "",
  [anon_sym_RPAREN] = "",
  [anon_sym_LBRACK] = "",
  [anon_sym_RBRACK] = "",
  [sym_account_name] = "",
  [anon_sym_DASH] = "-",
  [aux_sym_quantity_token1] = "quantity_token1",
  [aux_sym_commodity_token1] = "commodity_token1",
  [aux_sym_commodity_token2] = "commodity_token2",
  [anon_sym_AT] = "@",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_] = " ",
  [anon_sym_TAB] = "\t",
  [anon_sym_2] = "  ",
  [anon_sym_TAB2] = " \t",
  [sym_source_file] = "source_file",
  [sym_journal_item] = "journal_item",
  [sym_comment] = "comment",
  [sym_directive] = "directive",
  [sym_account_directive] = "account_directive",
  [sym_account_subdirective] = "account_subdirective",
  [sym_commodity_directive] = "commodity_directive",
  [sym_commodity_subdirective] = "commodity_subdirective",
  [sym_word_directive] = "word_directive",
  [sym_char_directive] = "char_directive",
  [sym_alias_subdirective] = "alias_subdirective",
  [sym_assert_subdirective] = "assert_subdirective",
  [sym_check_subdirective] = "check_subdirective",
  [sym_default_subdirective] = "default_subdirective",
  [sym_eval_subdirective] = "eval_subdirective",
  [sym_format_subdirective] = "format_subdirective",
  [sym_nomarket_subdirective] = "nomarket_subdirective",
  [sym_note_subdirective] = "note_subdirective",
  [sym_payee_subdirective] = "payee_subdirective",
  [sym_check_in] = "check_in",
  [sym_check_out] = "check_out",
  [sym_xact] = "xact",
  [sym_plain_xact] = "plain_xact",
  [sym_periodic_xact] = "periodic_xact",
  [sym_interval] = "interval",
  [sym_date] = "date",
  [sym_status] = "status",
  [sym_note] = "note",
  [sym_posting] = "posting",
  [sym_account] = "account",
  [sym_amount] = "amount",
  [sym_quantity] = "quantity",
  [sym_commodity] = "commodity",
  [sym_price] = "price",
  [sym_balance_assertion] = "balance_assertion",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_account_directive_repeat1] = "account_directive_repeat1",
  [aux_sym_commodity_directive_repeat1] = "commodity_directive_repeat1",
  [aux_sym_plain_xact_repeat1] = "plain_xact_repeat1",
  [aux_sym_whitespace_repeat1] = "whitespace_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_account] = anon_sym_account,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_include] = anon_sym_include,
  [aux_sym_word_directive_token1] = aux_sym_word_directive_token1,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_alias] = anon_sym_alias,
  [aux_sym_word_directive_token2] = aux_sym_word_directive_token2,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_year] = anon_sym_year,
  [aux_sym_word_directive_token3] = aux_sym_word_directive_token3,
  [anon_sym_bucket] = anon_sym_bucket,
  [anon_sym_A] = anon_sym_A,
  [anon_sym_Y] = anon_sym_Y,
  [anon_sym_N] = anon_sym_N,
  [anon_sym_D] = anon_sym_D,
  [anon_sym_C] = anon_sym_C,
  [anon_sym_P] = anon_sym_P,
  [aux_sym_alias_subdirective_token1] = aux_sym_alias_subdirective_token1,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_check] = anon_sym_check,
  [anon_sym_default] = anon_sym_default,
  [aux_sym_default_subdirective_token1] = aux_sym_default_subdirective_token1,
  [anon_sym_eval] = anon_sym_eval,
  [anon_sym_format] = anon_sym_format,
  [anon_sym_nomarket] = anon_sym_nomarket,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_payee] = anon_sym_payee,
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
  [sym_single_date] = sym_single_date,
  [sym_time] = sym_time,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_payee] = sym_payee,
  [aux_sym_note_token1] = aux_sym_note_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_LPAREN,
  [anon_sym_LBRACK] = anon_sym_LPAREN,
  [anon_sym_RBRACK] = anon_sym_LPAREN,
  [sym_account_name] = anon_sym_LPAREN,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_quantity_token1] = aux_sym_quantity_token1,
  [aux_sym_commodity_token1] = aux_sym_commodity_token1,
  [aux_sym_commodity_token2] = aux_sym_commodity_token2,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_] = anon_sym_,
  [anon_sym_TAB] = anon_sym_TAB,
  [anon_sym_2] = anon_sym_2,
  [anon_sym_TAB2] = anon_sym_TAB2,
  [sym_source_file] = sym_source_file,
  [sym_journal_item] = sym_journal_item,
  [sym_comment] = sym_comment,
  [sym_directive] = sym_directive,
  [sym_account_directive] = sym_account_directive,
  [sym_account_subdirective] = sym_account_subdirective,
  [sym_commodity_directive] = sym_commodity_directive,
  [sym_commodity_subdirective] = sym_commodity_subdirective,
  [sym_word_directive] = sym_word_directive,
  [sym_char_directive] = sym_char_directive,
  [sym_alias_subdirective] = sym_alias_subdirective,
  [sym_assert_subdirective] = sym_assert_subdirective,
  [sym_check_subdirective] = sym_check_subdirective,
  [sym_default_subdirective] = sym_default_subdirective,
  [sym_eval_subdirective] = sym_eval_subdirective,
  [sym_format_subdirective] = sym_format_subdirective,
  [sym_nomarket_subdirective] = sym_nomarket_subdirective,
  [sym_note_subdirective] = sym_note_subdirective,
  [sym_payee_subdirective] = sym_payee_subdirective,
  [sym_check_in] = sym_check_in,
  [sym_check_out] = sym_check_out,
  [sym_xact] = sym_xact,
  [sym_plain_xact] = sym_plain_xact,
  [sym_periodic_xact] = sym_periodic_xact,
  [sym_interval] = sym_interval,
  [sym_date] = sym_date,
  [sym_status] = sym_status,
  [sym_note] = sym_note,
  [sym_posting] = sym_posting,
  [sym_account] = sym_account,
  [sym_amount] = sym_amount,
  [sym_quantity] = sym_quantity,
  [sym_commodity] = sym_commodity,
  [sym_price] = sym_price,
  [sym_balance_assertion] = sym_balance_assertion,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_account_directive_repeat1] = aux_sym_account_directive_repeat1,
  [aux_sym_commodity_directive_repeat1] = aux_sym_commodity_directive_repeat1,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_account] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commodity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alias] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_year] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_word_directive_token3] = {
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
  [aux_sym_alias_subdirective_token1] = {
    .visible = false,
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
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_default_subdirective_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_eval] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nomarket] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_payee] = {
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
  [sym_single_date] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_payee] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_note_token1] = {
    .visible = false,
    .named = false,
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
  [sym_account_name] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quantity_token1] = {
    .visible = false,
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TAB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_2] = {
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
  [sym_comment] = {
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
  [sym_commodity_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_word_directive] = {
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
  [sym_assert_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_check_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_default_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_eval_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_format_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_nomarket_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_note_subdirective] = {
    .visible = true,
    .named = true,
  },
  [sym_payee_subdirective] = {
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
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_status] = {
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
  [aux_sym_account_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_commodity_directive_repeat1] = {
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

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool aux_sym_commodity_token1_character_set_1(int32_t c) {
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'g'
                  ? (c >= 'E' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2230
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4193
        ? (c < 3461
          ? (c < 3253
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))
              : (c <= 3386 || (c < 3412
                ? (c < 3406
                  ? c == 3389
                  : c <= 3406)
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3762
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))
              : (c <= 3654 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3913
              ? (c < 3804
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))
              : (c <= 3948 || (c < 4159
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5112
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4808
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6103
            ? (c < 5902
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5900)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5920 && c <= 5937)
                  : c <= 5969)
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

static inline bool aux_sym_commodity_token1_character_set_2(int32_t c) {
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'a'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2230
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4193
        ? (c < 3461
          ? (c < 3253
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))
              : (c <= 3386 || (c < 3412
                ? (c < 3406
                  ? c == 3389
                  : c <= 3406)
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3762
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))
              : (c <= 3654 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3913
              ? (c < 3804
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))
              : (c <= 3948 || (c < 4159
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5112
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4808
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6103
            ? (c < 5902
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5900)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5920 && c <= 5937)
                  : c <= 5969)
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

static inline bool aux_sym_commodity_token1_character_set_3(int32_t c) {
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'b'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2230
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4193
        ? (c < 3461
          ? (c < 3253
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))
              : (c <= 3386 || (c < 3412
                ? (c < 3406
                  ? c == 3389
                  : c <= 3406)
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3762
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))
              : (c <= 3654 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3913
              ? (c < 3804
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))
              : (c <= 3948 || (c < 4159
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5112
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4808
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6103
            ? (c < 5902
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5900)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5920 && c <= 5937)
                  : c <= 5969)
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

static inline bool aux_sym_commodity_token1_character_set_4(int32_t c) {
  return (c < 6688
    ? (c < 2990
      ? (c < 2384
        ? (c < 1488
          ? (c < 886
            ? (c < 216
              ? (c < 181
                ? (c < 'b'
                  ? (c >= 'B' && c <= 'Z')
                  : (c <= 'z' || c == 170))
                : (c <= 181 || (c < 192
                  ? c == 186
                  : c <= 214)))
              : (c <= 246 || (c < 748
                ? (c < 710
                  ? (c >= 248 && c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))
                : (c <= 748 || (c < 880
                  ? c == 750
                  : c <= 884)))))
            : (c <= 887 || (c < 931
              ? (c < 904
                ? (c < 895
                  ? (c >= 890 && c <= 893)
                  : (c <= 895 || c == 902))
                : (c <= 906 || (c < 910
                  ? c == 908
                  : c <= 929)))
              : (c <= 1013 || (c < 1329
                ? (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))))))
          : (c <= 1514 || (c < 1994
            ? (c < 1774
              ? (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))
              : (c <= 1775 || (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2112
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : c <= 2088)))
              : (c <= 2136 || (c < 2230
                ? (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))))))))
        : (c <= 2384 || (c < 2707
          ? (c < 2556
            ? (c < 2482
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))
              : (c <= 2482 || (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))))
            : (c <= 2556 || (c < 2616
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))
              : (c <= 2617 || (c < 2674
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))))))
          : (c <= 2728 || (c < 2877
            ? (c < 2809
              ? (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))
              : (c <= 2809 || (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))))
            : (c <= 2877 || (c < 2962
              ? (c < 2947
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : (c <= 2913 || c == 2929))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))
              : (c <= 2965 || (c < 2974
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))))))))))
      : (c <= 3001 || (c < 4193
        ? (c < 3461
          ? (c < 3253
            ? (c < 3160
              ? (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))
              : (c <= 3162 || (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))))
            : (c <= 3257 || (c < 3346
              ? (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))
              : (c <= 3386 || (c < 3412
                ? (c < 3406
                  ? c == 3389
                  : c <= 3406)
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))))))
          : (c <= 3478 || (c < 3762
            ? (c < 3648
              ? (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))
              : (c <= 3654 || (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))))
            : (c <= 3763 || (c < 3913
              ? (c < 3804
                ? (c < 3776
                  ? c == 3773
                  : (c <= 3780 || c == 3782))
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))
              : (c <= 3948 || (c < 4159
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))))))))
        : (c <= 4193 || (c < 5112
          ? (c < 4704
            ? (c < 4301
              ? (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))
              : (c <= 4301 || (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))))
            : (c <= 4744 || (c < 4808
              ? (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))
              : (c <= 4822 || (c < 4888
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))))))
          : (c <= 5117 || (c < 6103
            ? (c < 5902
              ? (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5900)))
              : (c <= 5905 || (c < 5984
                ? (c < 5952
                  ? (c >= 5920 && c <= 5937)
                  : c <= 5969)
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(175);
      if (lookahead == '\t') ADVANCE(387);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '!') ADVANCE(262);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '(') ADVANCE(266);
      if (lookahead == ')') ADVANCE(268);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '-') ADVANCE(274);
      if (lookahead == ';') ADVANCE(177);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '@') ADVANCE(380);
      if (lookahead == 'A') ADVANCE(203);
      if (lookahead == 'B') ADVANCE(348);
      if (lookahead == 'C') ADVANCE(211);
      if (lookahead == 'D') ADVANCE(209);
      if (lookahead == 'I') ADVANCE(235);
      if (lookahead == 'N') ADVANCE(207);
      if (lookahead == 'O') ADVANCE(239);
      if (lookahead == 'P') ADVANCE(213);
      if (lookahead == 'Y') ADVANCE(205);
      if (lookahead == '[') ADVANCE(269);
      if (lookahead == ']') ADVANCE(271);
      if (lookahead == 'a') ADVANCE(284);
      if (lookahead == 'b') ADVANCE(334);
      if (lookahead == 'c') ADVANCE(302);
      if (lookahead == 'd') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == 'f') ADVANCE(317);
      if (lookahead == 'i') ADVANCE(232);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == 'o') ADVANCE(237);
      if (lookahead == 'p') ADVANCE(279);
      if (lookahead == 'y') ADVANCE(277);
      if (lookahead == '~') ADVANCE(240);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(362);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(370);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (aux_sym_commodity_token1_character_set_1(lookahead)) ADVANCE(378);
      END_STATE();
    case 1:
      if (lookahead == '\t') ADVANCE(387);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '-') ADVANCE(274);
      if (lookahead == ';') ADVANCE(177);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '@') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 2:
      if (lookahead == '\t') ADVANCE(387);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == '\t') ADVANCE(387);
      if (lookahead == '\n') ADVANCE(221);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '-') ADVANCE(274);
      if (lookahead == 'D') ADVANCE(89);
      if (lookahead == 'E') ADVANCE(143);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'c') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(110);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(126);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(141);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(99);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 4:
      if (lookahead == '\t') ADVANCE(387);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == ';') ADVANCE(177);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '@') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 5:
      if (lookahead == '\t') ADVANCE(387);
      if (lookahead == ' ') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 6:
      if (lookahead == '\t') ADVANCE(389);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '!') ADVANCE(263);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == '*') ADVANCE(179);
      if (lookahead == ';') ADVANCE(177);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 7:
      if (lookahead == '\t') ADVANCE(389);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '(') ADVANCE(267);
      if (lookahead == '[') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != ';') ADVANCE(273);
      END_STATE();
    case 8:
      if (lookahead == '\t') ADVANCE(390);
      if (lookahead == ' ') ADVANCE(384);
      if (lookahead == '!') ADVANCE(262);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(264);
      END_STATE();
    case 9:
      if (lookahead == '\t') ADVANCE(394);
      if (lookahead == ' ') ADVANCE(393);
      END_STATE();
    case 10:
      if (lookahead == '\t') ADVANCE(388);
      if (lookahead == ' ') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == '\t') ADVANCE(392);
      if (lookahead == ' ') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(192);
      END_STATE();
    case 12:
      if (lookahead == '\t') ADVANCE(391);
      if (lookahead == ' ') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 13:
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(165);
      END_STATE();
    case 20:
      if (lookahead == 'V') ADVANCE(96);
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(31);
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(194);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 'k') ADVANCE(217);
      END_STATE();
    case 53:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 'k') ADVANCE(45);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(85);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(26);
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 72:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(190);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(200);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 87:
      if (lookahead == 'y') ADVANCE(183);
      END_STATE();
    case 88:
      if (lookahead == 'y') ADVANCE(46);
      END_STATE();
    case 89:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 90:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 91:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 92:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 93:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 94:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(133);
      END_STATE();
    case 95:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(127);
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(142);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(101);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(103);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 100:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 101:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 102:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 103:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 104:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 105:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 106:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 107:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(243);
      END_STATE();
    case 108:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(118);
      END_STATE();
    case 109:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(120);
      END_STATE();
    case 110:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 111:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 112:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(242);
      END_STATE();
    case 113:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(116);
      END_STATE();
    case 114:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(119);
      END_STATE();
    case 115:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 116:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 117:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 118:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 119:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 120:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 121:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 122:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(128);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(106);
      END_STATE();
    case 123:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 124:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 125:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 129:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 130:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 131:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 132:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 133:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 134:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 135:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 136:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 137:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(107);
      END_STATE();
    case 138:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(105);
      END_STATE();
    case 139:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(100);
      END_STATE();
    case 140:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 141:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 142:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 143:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(96);
      END_STATE();
    case 144:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(246);
      END_STATE();
    case 145:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(15);
      END_STATE();
    case 146:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(248);
      END_STATE();
    case 147:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(258);
      END_STATE();
    case 148:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(252);
      END_STATE();
    case 149:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(250);
      END_STATE();
    case 150:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(241);
      END_STATE();
    case 151:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(254);
      END_STATE();
    case 152:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(256);
      END_STATE();
    case 153:
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 154:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(164);
      END_STATE();
    case 155:
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(166);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 171:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(273);
      END_STATE();
    case 172:
      if (lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ';') ADVANCE(273);
      END_STATE();
    case 173:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 174:
      if (eof) ADVANCE(175);
      if (lookahead == '\t') ADVANCE(387);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == ' ') ADVANCE(382);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == ';') ADVANCE(177);
      if (lookahead == '=') ADVANCE(193);
      if (lookahead == '@') ADVANCE(380);
      if (lookahead == 'A') ADVANCE(202);
      if (lookahead == 'C') ADVANCE(210);
      if (lookahead == 'D') ADVANCE(208);
      if (lookahead == 'I') ADVANCE(234);
      if (lookahead == 'N') ADVANCE(206);
      if (lookahead == 'O') ADVANCE(238);
      if (lookahead == 'P') ADVANCE(212);
      if (lookahead == 'Y') ADVANCE(204);
      if (lookahead == 'a') ADVANCE(28);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'i') ADVANCE(233);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == 'y') ADVANCE(37);
      if (lookahead == '~') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(272);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_account);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_account);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_commodity);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_include);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_word_directive_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_end);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_alias);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_alias);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_word_directive_token2);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_def);
      if (lookahead == 'a') ADVANCE(336);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(378);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_year);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_year);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(372);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_word_directive_token3);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(164);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_bucket);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_bucket);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_A);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_A);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_Y);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_Y);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(339);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_N);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_N);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_D);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_D);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(349);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(378);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_C);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_P);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_alias_subdirective_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_assert);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_check);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_check);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_default);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_default_subdirective_token1);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_eval);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_eval);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_format);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_nomarket);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_nomarket);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_note);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_payee);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_payee);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(287);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_i);
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_I);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_I);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_o);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_O);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_interval_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_interval_token2);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_interval_token3);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_interval_token4);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_interval_token5);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_interval_token6);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_interval_token6);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_interval_token7);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_interval_token7);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_interval_token8);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_interval_token8);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_interval_token9);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_interval_token9);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_interval_token10);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_interval_token10);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_interval_token11);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_interval_token12);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_single_date);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(272);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_payee);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_note_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(272);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(272);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead == ' ') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_account_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_quantity_token1);
      if (lookahead == ' ' ||
          lookahead == ',' ||
          lookahead == '.') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'A') ADVANCE(365);
      if (lookahead == 'a') ADVANCE(278);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(378);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E') ADVANCE(339);
      if (lookahead == 'e') ADVANCE(276);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R') ADVANCE(353);
      if (lookahead == 'r') ADVANCE(197);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(338);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(378);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(308);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(378);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(324);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(378);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(323);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(378);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'a') ADVANCE(328);
      if (aux_sym_commodity_token1_character_set_3(lookahead)) ADVANCE(378);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(288);
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead == 's') ADVANCE(325);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(306);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(305);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(309);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'c') ADVANCE(319);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(189);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(304);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'd') ADVANCE(295);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(301);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(349);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(378);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(229);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(231);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(186);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(321);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(327);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(286);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(294);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'e') ADVANCE(331);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'f') ADVANCE(195);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'h') ADVANCE(298);
      if (lookahead == 'o') ADVANCE(311);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(281);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'i') ADVANCE(332);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(218);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(297);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'k') ADVANCE(300);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(223);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(335);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'l') ADVANCE(330);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(312);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(320);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(282);
      if (lookahead == 't') ADVANCE(293);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'm') ADVANCE(283);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(289);
      if (lookahead == 'v') ADVANCE(280);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'n') ADVANCE(329);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(322);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(313);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(333);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'o') ADVANCE(290);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(326);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(314);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'r') ADVANCE(307);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(191);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 's') ADVANCE(296);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(216);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(201);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(225);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(182);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(220);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(227);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 't') ADVANCE(337);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(316);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(285);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(359);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(291);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'u') ADVANCE(310);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(184);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'y') ADVANCE(299);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(365);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(378);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(364);
      if (aux_sym_commodity_token1_character_set_4(lookahead)) ADVANCE(378);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(350);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(341);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(366);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(351);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(355);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(357);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(359);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(352);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(354);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(356);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(371);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(372);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(373);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(374);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(375);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(376);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(377);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(363);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(345);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(367);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(369);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(360);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(361);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(368);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(353);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(358);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(346);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(347);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(340);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(247);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(259);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(249);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(253);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(251);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(255);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(257);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_commodity_token1);
      if (aux_sym_commodity_token1_character_set_2(lookahead)) ADVANCE(378);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(aux_sym_commodity_token2);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '@') ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(264);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(192);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_TAB);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(272);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '!' &&
          lookahead != '*') ADVANCE(264);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(187);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_TAB);
      if (lookahead != 0 &&
          lookahead != '=') ADVANCE(192);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_2);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_TAB2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 174},
  [2] = {.lex_state = 174},
  [3] = {.lex_state = 174},
  [4] = {.lex_state = 174},
  [5] = {.lex_state = 174},
  [6] = {.lex_state = 174},
  [7] = {.lex_state = 174},
  [8] = {.lex_state = 174},
  [9] = {.lex_state = 174},
  [10] = {.lex_state = 174},
  [11] = {.lex_state = 174},
  [12] = {.lex_state = 174},
  [13] = {.lex_state = 174},
  [14] = {.lex_state = 174},
  [15] = {.lex_state = 174},
  [16] = {.lex_state = 174},
  [17] = {.lex_state = 174},
  [18] = {.lex_state = 174},
  [19] = {.lex_state = 174},
  [20] = {.lex_state = 174},
  [21] = {.lex_state = 174},
  [22] = {.lex_state = 174},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 174},
  [25] = {.lex_state = 174},
  [26] = {.lex_state = 174},
  [27] = {.lex_state = 174},
  [28] = {.lex_state = 174},
  [29] = {.lex_state = 174},
  [30] = {.lex_state = 174},
  [31] = {.lex_state = 174},
  [32] = {.lex_state = 174},
  [33] = {.lex_state = 174},
  [34] = {.lex_state = 174},
  [35] = {.lex_state = 174},
  [36] = {.lex_state = 174},
  [37] = {.lex_state = 174},
  [38] = {.lex_state = 174},
  [39] = {.lex_state = 174},
  [40] = {.lex_state = 174},
  [41] = {.lex_state = 174},
  [42] = {.lex_state = 174},
  [43] = {.lex_state = 174},
  [44] = {.lex_state = 174},
  [45] = {.lex_state = 174},
  [46] = {.lex_state = 174},
  [47] = {.lex_state = 174},
  [48] = {.lex_state = 174},
  [49] = {.lex_state = 174},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 174},
  [60] = {.lex_state = 174},
  [61] = {.lex_state = 174},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 174},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 174},
  [85] = {.lex_state = 174},
  [86] = {.lex_state = 174},
  [87] = {.lex_state = 174},
  [88] = {.lex_state = 174},
  [89] = {.lex_state = 174},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 174},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 174},
  [113] = {.lex_state = 174},
  [114] = {.lex_state = 174},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 3},
  [118] = {.lex_state = 174},
  [119] = {.lex_state = 174},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 3},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 174},
  [128] = {.lex_state = 174},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 174},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 174},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 174},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 7},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 174},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 174},
  [143] = {.lex_state = 174},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 174},
  [147] = {.lex_state = 174},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 10},
  [155] = {.lex_state = 11},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 174},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 8},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 10},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 11},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 5},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 8},
  [174] = {.lex_state = 8},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 174},
  [184] = {.lex_state = 174},
  [185] = {.lex_state = 174},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 8},
  [188] = {.lex_state = 174},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 174},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 174},
  [220] = {.lex_state = 174},
  [221] = {.lex_state = 174},
  [222] = {.lex_state = 174},
  [223] = {.lex_state = 174},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 174},
  [226] = {.lex_state = 3},
  [227] = {.lex_state = 174},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 174},
  [230] = {.lex_state = 174},
  [231] = {.lex_state = 174},
  [232] = {.lex_state = 174},
  [233] = {.lex_state = 172},
  [234] = {.lex_state = 172},
  [235] = {.lex_state = 174},
  [236] = {.lex_state = 174},
  [237] = {.lex_state = 174},
  [238] = {.lex_state = 174},
  [239] = {.lex_state = 174},
  [240] = {.lex_state = 174},
  [241] = {.lex_state = 14},
  [242] = {.lex_state = 174},
  [243] = {.lex_state = 174},
  [244] = {.lex_state = 174},
  [245] = {.lex_state = 174},
  [246] = {.lex_state = 174},
  [247] = {.lex_state = 174},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 174},
  [250] = {.lex_state = 174},
  [251] = {.lex_state = 174},
  [252] = {.lex_state = 174},
  [253] = {.lex_state = 174},
  [254] = {.lex_state = 174},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 173},
  [258] = {.lex_state = 174},
  [259] = {.lex_state = 174},
  [260] = {.lex_state = 174},
  [261] = {.lex_state = 174},
  [262] = {.lex_state = 174},
  [263] = {.lex_state = 174},
  [264] = {.lex_state = 265},
  [265] = {.lex_state = 174},
  [266] = {.lex_state = 3},
  [267] = {.lex_state = 3},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_account] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_alias] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_year] = ACTIONS(1),
    [aux_sym_word_directive_token3] = ACTIONS(1),
    [anon_sym_bucket] = ACTIONS(1),
    [anon_sym_A] = ACTIONS(1),
    [anon_sym_Y] = ACTIONS(1),
    [anon_sym_N] = ACTIONS(1),
    [anon_sym_D] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_check] = ACTIONS(1),
    [anon_sym_default] = ACTIONS(1),
    [aux_sym_default_subdirective_token1] = ACTIONS(1),
    [anon_sym_eval] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_nomarket] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_payee] = ACTIONS(1),
    [anon_sym_i] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [anon_sym_o] = ACTIONS(1),
    [anon_sym_O] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [aux_sym_interval_token6] = ACTIONS(1),
    [aux_sym_interval_token7] = ACTIONS(1),
    [aux_sym_interval_token8] = ACTIONS(1),
    [aux_sym_interval_token9] = ACTIONS(1),
    [aux_sym_interval_token10] = ACTIONS(1),
    [aux_sym_interval_token11] = ACTIONS(1),
    [aux_sym_interval_token12] = ACTIONS(1),
    [sym_single_date] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_commodity_token1] = ACTIONS(1),
    [aux_sym_commodity_token2] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_TAB] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(248),
    [sym_journal_item] = STATE(2),
    [sym_comment] = STATE(49),
    [sym_directive] = STATE(49),
    [sym_account_directive] = STATE(48),
    [sym_commodity_directive] = STATE(48),
    [sym_word_directive] = STATE(247),
    [sym_char_directive] = STATE(247),
    [sym_check_in] = STATE(245),
    [sym_check_out] = STATE(245),
    [sym_xact] = STATE(49),
    [sym_plain_xact] = STATE(47),
    [sym_periodic_xact] = STATE(47),
    [sym_date] = STATE(157),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_account] = ACTIONS(9),
    [anon_sym_commodity] = ACTIONS(11),
    [anon_sym_include] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(15),
    [anon_sym_alias] = ACTIONS(17),
    [anon_sym_def] = ACTIONS(13),
    [anon_sym_year] = ACTIONS(19),
    [anon_sym_bucket] = ACTIONS(21),
    [anon_sym_A] = ACTIONS(23),
    [anon_sym_Y] = ACTIONS(25),
    [anon_sym_N] = ACTIONS(27),
    [anon_sym_D] = ACTIONS(29),
    [anon_sym_C] = ACTIONS(31),
    [anon_sym_P] = ACTIONS(33),
    [anon_sym_i] = ACTIONS(35),
    [anon_sym_I] = ACTIONS(37),
    [anon_sym_o] = ACTIONS(39),
    [anon_sym_O] = ACTIONS(39),
    [anon_sym_TILDE] = ACTIONS(41),
    [sym_single_date] = ACTIONS(43),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 28,
    ACTIONS(9), 1,
      anon_sym_account,
    ACTIONS(11), 1,
      anon_sym_commodity,
    ACTIONS(15), 1,
      anon_sym_end,
    ACTIONS(17), 1,
      anon_sym_alias,
    ACTIONS(19), 1,
      anon_sym_year,
    ACTIONS(21), 1,
      anon_sym_bucket,
    ACTIONS(23), 1,
      anon_sym_A,
    ACTIONS(25), 1,
      anon_sym_Y,
    ACTIONS(27), 1,
      anon_sym_N,
    ACTIONS(29), 1,
      anon_sym_D,
    ACTIONS(31), 1,
      anon_sym_C,
    ACTIONS(33), 1,
      anon_sym_P,
    ACTIONS(35), 1,
      anon_sym_i,
    ACTIONS(37), 1,
      anon_sym_I,
    ACTIONS(41), 1,
      anon_sym_TILDE,
    ACTIONS(43), 1,
      sym_single_date,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_LF,
    STATE(157), 1,
      sym_date,
    ACTIONS(7), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(13), 2,
      anon_sym_include,
      anon_sym_def,
    ACTIONS(39), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(47), 2,
      sym_plain_xact,
      sym_periodic_xact,
    STATE(48), 2,
      sym_account_directive,
      sym_commodity_directive,
    STATE(245), 2,
      sym_check_in,
      sym_check_out,
    STATE(247), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(49), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [95] = 28,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(57), 1,
      anon_sym_account,
    ACTIONS(60), 1,
      anon_sym_commodity,
    ACTIONS(66), 1,
      anon_sym_end,
    ACTIONS(69), 1,
      anon_sym_alias,
    ACTIONS(72), 1,
      anon_sym_year,
    ACTIONS(75), 1,
      anon_sym_bucket,
    ACTIONS(78), 1,
      anon_sym_A,
    ACTIONS(81), 1,
      anon_sym_Y,
    ACTIONS(84), 1,
      anon_sym_N,
    ACTIONS(87), 1,
      anon_sym_D,
    ACTIONS(90), 1,
      anon_sym_C,
    ACTIONS(93), 1,
      anon_sym_P,
    ACTIONS(96), 1,
      anon_sym_i,
    ACTIONS(99), 1,
      anon_sym_I,
    ACTIONS(105), 1,
      anon_sym_TILDE,
    ACTIONS(108), 1,
      sym_single_date,
    STATE(157), 1,
      sym_date,
    ACTIONS(54), 2,
      anon_sym_SEMI,
      anon_sym_STAR,
    ACTIONS(63), 2,
      anon_sym_include,
      anon_sym_def,
    ACTIONS(102), 2,
      anon_sym_o,
      anon_sym_O,
    STATE(3), 2,
      sym_journal_item,
      aux_sym_source_file_repeat1,
    STATE(47), 2,
      sym_plain_xact,
      sym_periodic_xact,
    STATE(48), 2,
      sym_account_directive,
      sym_commodity_directive,
    STATE(245), 2,
      sym_check_in,
      sym_check_out,
    STATE(247), 2,
      sym_word_directive,
      sym_char_directive,
    STATE(49), 3,
      sym_comment,
      sym_directive,
      sym_xact,
  [190] = 6,
    ACTIONS(113), 1,
      anon_sym_i,
    STATE(75), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(115), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(6), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(35), 7,
      sym_alias_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
      sym_default_subdirective,
      sym_eval_subdirective,
      sym_note_subdirective,
      sym_payee_subdirective,
    ACTIONS(111), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [239] = 6,
    ACTIONS(119), 1,
      anon_sym_i,
    STATE(75), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(121), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(35), 7,
      sym_alias_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
      sym_default_subdirective,
      sym_eval_subdirective,
      sym_note_subdirective,
      sym_payee_subdirective,
    ACTIONS(117), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [288] = 6,
    ACTIONS(126), 1,
      anon_sym_i,
    STATE(75), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(115), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(5), 2,
      sym_account_subdirective,
      aux_sym_account_directive_repeat1,
    STATE(35), 7,
      sym_alias_subdirective,
      sym_assert_subdirective,
      sym_check_subdirective,
      sym_default_subdirective,
      sym_eval_subdirective,
      sym_note_subdirective,
      sym_payee_subdirective,
    ACTIONS(124), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [337] = 6,
    ACTIONS(130), 1,
      anon_sym_i,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(132), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(9), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(33), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_nomarket_subdirective,
      sym_note_subdirective,
    ACTIONS(128), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [384] = 6,
    ACTIONS(136), 1,
      anon_sym_i,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(138), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(8), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(33), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_nomarket_subdirective,
      sym_note_subdirective,
    ACTIONS(134), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [431] = 6,
    ACTIONS(143), 1,
      anon_sym_i,
    STATE(83), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(132), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(8), 2,
      sym_commodity_subdirective,
      aux_sym_commodity_directive_repeat1,
    STATE(33), 5,
      sym_alias_subdirective,
      sym_default_subdirective,
      sym_format_subdirective,
      sym_nomarket_subdirective,
      sym_note_subdirective,
    ACTIONS(141), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [478] = 5,
    ACTIONS(147), 1,
      anon_sym_i,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(149), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(12), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(145), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [518] = 2,
    ACTIONS(153), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(151), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_EQ,
      anon_sym_def,
      anon_sym_year,
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
      sym_single_date,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [552] = 5,
    ACTIONS(157), 1,
      anon_sym_i,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(159), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(12), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(155), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [592] = 5,
    ACTIONS(164), 1,
      anon_sym_i,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(149), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(12), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(162), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [632] = 2,
    ACTIONS(168), 2,
      anon_sym_i,
      anon_sym_AT,
    ACTIONS(166), 27,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
      anon_sym_alias,
      anon_sym_EQ,
      anon_sym_def,
      anon_sym_year,
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
      sym_single_date,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [666] = 5,
    ACTIONS(172), 1,
      anon_sym_i,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(149), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(12), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(170), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [706] = 5,
    ACTIONS(176), 1,
      anon_sym_i,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(149), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(12), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
    ACTIONS(174), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [746] = 2,
    ACTIONS(180), 1,
      anon_sym_i,
    ACTIONS(178), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [777] = 2,
    ACTIONS(184), 1,
      anon_sym_i,
    ACTIONS(182), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [808] = 2,
    ACTIONS(188), 1,
      anon_sym_i,
    ACTIONS(186), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [839] = 2,
    ACTIONS(192), 1,
      anon_sym_i,
    ACTIONS(190), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [870] = 2,
    ACTIONS(196), 1,
      anon_sym_i,
    ACTIONS(194), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [901] = 2,
    ACTIONS(200), 1,
      anon_sym_i,
    ACTIONS(198), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [932] = 3,
    STATE(23), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(204), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(202), 23,
      anon_sym_alias,
      anon_sym_assert,
      anon_sym_check,
      anon_sym_default,
      anon_sym_eval,
      anon_sym_format,
      anon_sym_nomarket,
      anon_sym_note,
      anon_sym_payee,
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
      anon_sym_DASH,
      aux_sym_quantity_token1,
  [965] = 2,
    ACTIONS(209), 1,
      anon_sym_i,
    ACTIONS(207), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [996] = 2,
    ACTIONS(213), 1,
      anon_sym_i,
    ACTIONS(211), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1027] = 2,
    ACTIONS(217), 1,
      anon_sym_i,
    ACTIONS(215), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1058] = 2,
    ACTIONS(221), 1,
      anon_sym_i,
    ACTIONS(219), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1089] = 2,
    ACTIONS(225), 1,
      anon_sym_i,
    ACTIONS(223), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1120] = 2,
    ACTIONS(229), 1,
      anon_sym_i,
    ACTIONS(227), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1151] = 2,
    ACTIONS(233), 1,
      anon_sym_i,
    ACTIONS(231), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1182] = 2,
    ACTIONS(237), 1,
      anon_sym_i,
    ACTIONS(235), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1213] = 2,
    ACTIONS(241), 1,
      anon_sym_i,
    ACTIONS(239), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1244] = 2,
    ACTIONS(245), 1,
      anon_sym_i,
    ACTIONS(243), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1275] = 2,
    ACTIONS(249), 1,
      anon_sym_i,
    ACTIONS(247), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1306] = 2,
    ACTIONS(253), 1,
      anon_sym_i,
    ACTIONS(251), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1337] = 2,
    ACTIONS(257), 1,
      anon_sym_i,
    ACTIONS(255), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1368] = 2,
    ACTIONS(261), 1,
      anon_sym_i,
    ACTIONS(259), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1399] = 2,
    ACTIONS(265), 1,
      anon_sym_i,
    ACTIONS(263), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1430] = 2,
    ACTIONS(269), 1,
      anon_sym_i,
    ACTIONS(267), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1461] = 2,
    ACTIONS(273), 1,
      anon_sym_i,
    ACTIONS(271), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1492] = 2,
    ACTIONS(277), 1,
      anon_sym_i,
    ACTIONS(275), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1523] = 2,
    ACTIONS(281), 1,
      anon_sym_i,
    ACTIONS(279), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1554] = 2,
    ACTIONS(285), 1,
      anon_sym_i,
    ACTIONS(283), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1585] = 2,
    ACTIONS(289), 1,
      anon_sym_i,
    ACTIONS(287), 25,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
      anon_sym_,
      anon_sym_TAB,
  [1616] = 2,
    ACTIONS(293), 1,
      anon_sym_i,
    ACTIONS(291), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [1645] = 2,
    ACTIONS(297), 1,
      anon_sym_i,
    ACTIONS(295), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [1674] = 2,
    ACTIONS(301), 1,
      anon_sym_i,
    ACTIONS(299), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [1703] = 2,
    ACTIONS(305), 1,
      anon_sym_i,
    ACTIONS(303), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [1732] = 2,
    ACTIONS(309), 1,
      anon_sym_i,
    ACTIONS(307), 23,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_account,
      anon_sym_commodity,
      anon_sym_include,
      anon_sym_end,
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
      anon_sym_I,
      anon_sym_o,
      anon_sym_O,
      anon_sym_TILDE,
      sym_single_date,
  [1761] = 16,
    ACTIONS(311), 1,
      anon_sym_LF,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      aux_sym_quantity_token1,
    ACTIONS(323), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_AT_AT,
    STATE(54), 1,
      aux_sym_whitespace_repeat1,
    STATE(60), 1,
      sym_amount,
    STATE(88), 1,
      sym_price,
    STATE(113), 1,
      sym_balance_assertion,
    STATE(116), 1,
      sym_quantity,
    STATE(117), 1,
      sym_commodity,
    STATE(260), 1,
      sym_note,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(327), 2,
      anon_sym_,
      anon_sym_TAB,
  [1812] = 16,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      aux_sym_quantity_token1,
    ACTIONS(323), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_AT_AT,
    ACTIONS(329), 1,
      anon_sym_LF,
    STATE(55), 1,
      aux_sym_whitespace_repeat1,
    STATE(59), 1,
      sym_amount,
    STATE(85), 1,
      sym_price,
    STATE(108), 1,
      sym_balance_assertion,
    STATE(116), 1,
      sym_quantity,
    STATE(117), 1,
      sym_commodity,
    STATE(258), 1,
      sym_note,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(331), 2,
      anon_sym_,
      anon_sym_TAB,
  [1863] = 16,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      aux_sym_quantity_token1,
    ACTIONS(323), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_AT_AT,
    ACTIONS(333), 1,
      anon_sym_LF,
    STATE(53), 1,
      aux_sym_whitespace_repeat1,
    STATE(61), 1,
      sym_amount,
    STATE(86), 1,
      sym_price,
    STATE(116), 1,
      sym_quantity,
    STATE(117), 1,
      sym_commodity,
    STATE(119), 1,
      sym_balance_assertion,
    STATE(222), 1,
      sym_note,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(335), 2,
      anon_sym_,
      anon_sym_TAB,
  [1914] = 15,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      aux_sym_quantity_token1,
    ACTIONS(323), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_AT_AT,
    STATE(59), 1,
      sym_amount,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    STATE(85), 1,
      sym_price,
    STATE(108), 1,
      sym_balance_assertion,
    STATE(116), 1,
      sym_quantity,
    STATE(117), 1,
      sym_commodity,
    STATE(258), 1,
      sym_note,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(337), 2,
      anon_sym_,
      anon_sym_TAB,
  [1962] = 15,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      aux_sym_quantity_token1,
    ACTIONS(323), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_AT_AT,
    STATE(61), 1,
      sym_amount,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    STATE(86), 1,
      sym_price,
    STATE(116), 1,
      sym_quantity,
    STATE(117), 1,
      sym_commodity,
    STATE(119), 1,
      sym_balance_assertion,
    STATE(222), 1,
      sym_note,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(337), 2,
      anon_sym_,
      anon_sym_TAB,
  [2010] = 15,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      aux_sym_quantity_token1,
    ACTIONS(323), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_AT_AT,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    STATE(64), 1,
      sym_amount,
    STATE(87), 1,
      sym_price,
    STATE(116), 1,
      sym_quantity,
    STATE(117), 1,
      sym_commodity,
    STATE(118), 1,
      sym_balance_assertion,
    STATE(244), 1,
      sym_note,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(337), 2,
      anon_sym_,
      anon_sym_TAB,
  [2058] = 4,
    STATE(23), 1,
      aux_sym_whitespace_repeat1,
    STATE(250), 1,
      sym_interval,
    ACTIONS(341), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(339), 12,
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
  [2083] = 4,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(343), 2,
      aux_sym_word_directive_token3,
      anon_sym_AT,
    ACTIONS(345), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(202), 7,
      anon_sym_SEMI,
      anon_sym_EQ,
      sym_single_date,
      sym_time,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [2104] = 11,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      sym_account_name,
    ACTIONS(356), 1,
      anon_sym_,
    ACTIONS(358), 1,
      anon_sym_TAB,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    STATE(102), 1,
      sym_status,
    STATE(192), 1,
      sym_account,
    STATE(263), 1,
      sym_note,
    ACTIONS(348), 2,
      anon_sym_STAR,
      anon_sym_BANG,
  [2139] = 10,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(323), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_AT_AT,
    ACTIONS(360), 1,
      anon_sym_LF,
    STATE(68), 1,
      aux_sym_whitespace_repeat1,
    STATE(87), 1,
      sym_price,
    STATE(118), 1,
      sym_balance_assertion,
    STATE(244), 1,
      sym_note,
    ACTIONS(362), 2,
      anon_sym_,
      anon_sym_TAB,
  [2171] = 10,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(323), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_AT_AT,
    ACTIONS(333), 1,
      anon_sym_LF,
    STATE(72), 1,
      aux_sym_whitespace_repeat1,
    STATE(86), 1,
      sym_price,
    STATE(119), 1,
      sym_balance_assertion,
    STATE(222), 1,
      sym_note,
    ACTIONS(364), 2,
      anon_sym_,
      anon_sym_TAB,
  [2203] = 10,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(323), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_AT_AT,
    ACTIONS(329), 1,
      anon_sym_LF,
    STATE(78), 1,
      aux_sym_whitespace_repeat1,
    STATE(85), 1,
      sym_price,
    STATE(108), 1,
      sym_balance_assertion,
    STATE(258), 1,
      sym_note,
    ACTIONS(366), 2,
      anon_sym_,
      anon_sym_TAB,
  [2235] = 4,
    ACTIONS(343), 1,
      anon_sym_AT,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(368), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(202), 7,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
  [2255] = 2,
    ACTIONS(249), 1,
      anon_sym_AT,
    ACTIONS(247), 10,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_DASH,
      aux_sym_quantity_token1,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [2271] = 10,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(323), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_AT_AT,
    ACTIONS(371), 1,
      anon_sym_LF,
    STATE(79), 1,
      aux_sym_whitespace_repeat1,
    STATE(84), 1,
      sym_price,
    STATE(114), 1,
      sym_balance_assertion,
    STATE(225), 1,
      sym_note,
    ACTIONS(373), 2,
      anon_sym_,
      anon_sym_TAB,
  [2303] = 8,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      aux_sym_quantity_token1,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_quantity,
    STATE(117), 1,
      sym_commodity,
    STATE(236), 1,
      sym_amount,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(337), 2,
      anon_sym_,
      anon_sym_TAB,
  [2330] = 8,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      aux_sym_quantity_token1,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_quantity,
    STATE(117), 1,
      sym_commodity,
    STATE(184), 1,
      sym_amount,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(337), 2,
      anon_sym_,
      anon_sym_TAB,
  [2357] = 8,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      aux_sym_quantity_token1,
    STATE(73), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_quantity,
    STATE(117), 1,
      sym_commodity,
    STATE(142), 1,
      sym_amount,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(375), 2,
      anon_sym_,
      anon_sym_TAB,
  [2384] = 9,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(323), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_AT_AT,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(84), 1,
      sym_price,
    STATE(114), 1,
      sym_balance_assertion,
    STATE(225), 1,
      sym_note,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [2413] = 8,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      aux_sym_quantity_token1,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_quantity,
    STATE(117), 1,
      sym_commodity,
    STATE(227), 1,
      sym_amount,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(337), 2,
      anon_sym_,
      anon_sym_TAB,
  [2440] = 8,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      aux_sym_quantity_token1,
    STATE(65), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_quantity,
    STATE(117), 1,
      sym_commodity,
    STATE(261), 1,
      sym_amount,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(379), 2,
      anon_sym_,
      anon_sym_TAB,
  [2467] = 8,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      aux_sym_quantity_token1,
    STATE(66), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_quantity,
    STATE(117), 1,
      sym_commodity,
    STATE(183), 1,
      sym_amount,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(381), 2,
      anon_sym_,
      anon_sym_TAB,
  [2494] = 9,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(323), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_AT_AT,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(85), 1,
      sym_price,
    STATE(108), 1,
      sym_balance_assertion,
    STATE(258), 1,
      sym_note,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [2523] = 8,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      aux_sym_quantity_token1,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_quantity,
    STATE(117), 1,
      sym_commodity,
    STATE(140), 1,
      sym_amount,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(337), 2,
      anon_sym_,
      anon_sym_TAB,
  [2550] = 8,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      aux_sym_quantity_token1,
    STATE(32), 1,
      sym_amount,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    STATE(121), 1,
      sym_commodity,
    STATE(126), 1,
      sym_quantity,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(337), 2,
      anon_sym_,
      anon_sym_TAB,
  [2577] = 9,
    ACTIONS(383), 1,
      anon_sym_alias,
    ACTIONS(385), 1,
      anon_sym_assert,
    ACTIONS(387), 1,
      anon_sym_check,
    ACTIONS(389), 1,
      anon_sym_default,
    ACTIONS(391), 1,
      anon_sym_eval,
    ACTIONS(393), 1,
      anon_sym_note,
    ACTIONS(395), 1,
      anon_sym_payee,
    STATE(23), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(341), 2,
      anon_sym_,
      anon_sym_TAB,
  [2606] = 8,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      aux_sym_quantity_token1,
    STATE(77), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_quantity,
    STATE(117), 1,
      sym_commodity,
    STATE(254), 1,
      sym_amount,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(397), 2,
      anon_sym_,
      anon_sym_TAB,
  [2633] = 8,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      aux_sym_quantity_token1,
    STATE(62), 1,
      aux_sym_whitespace_repeat1,
    STATE(116), 1,
      sym_quantity,
    STATE(117), 1,
      sym_commodity,
    STATE(261), 1,
      sym_amount,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(337), 2,
      anon_sym_,
      anon_sym_TAB,
  [2660] = 9,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(323), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_AT_AT,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(87), 1,
      sym_price,
    STATE(118), 1,
      sym_balance_assertion,
    STATE(244), 1,
      sym_note,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [2689] = 9,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(323), 1,
      anon_sym_AT,
    ACTIONS(325), 1,
      anon_sym_AT_AT,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(89), 1,
      sym_price,
    STATE(127), 1,
      sym_balance_assertion,
    STATE(219), 1,
      sym_note,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [2718] = 2,
    ACTIONS(257), 1,
      anon_sym_AT,
    ACTIONS(255), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [2732] = 5,
    ACTIONS(202), 1,
      anon_sym_SEMI,
    ACTIONS(399), 1,
      anon_sym_,
    ACTIONS(402), 1,
      anon_sym_TAB,
    STATE(81), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(343), 5,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [2752] = 2,
    ACTIONS(225), 1,
      anon_sym_AT,
    ACTIONS(223), 8,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
      anon_sym_AT_AT,
      anon_sym_,
      anon_sym_TAB,
  [2766] = 7,
    ACTIONS(383), 1,
      anon_sym_alias,
    ACTIONS(389), 1,
      anon_sym_default,
    ACTIONS(393), 1,
      anon_sym_note,
    ACTIONS(405), 1,
      anon_sym_format,
    ACTIONS(407), 1,
      anon_sym_nomarket,
    STATE(23), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(341), 2,
      anon_sym_,
      anon_sym_TAB,
  [2789] = 7,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(409), 1,
      anon_sym_LF,
    STATE(96), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_balance_assertion,
    STATE(219), 1,
      sym_note,
    ACTIONS(411), 2,
      anon_sym_,
      anon_sym_TAB,
  [2812] = 7,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(360), 1,
      anon_sym_LF,
    STATE(90), 1,
      aux_sym_whitespace_repeat1,
    STATE(118), 1,
      sym_balance_assertion,
    STATE(244), 1,
      sym_note,
    ACTIONS(413), 2,
      anon_sym_,
      anon_sym_TAB,
  [2835] = 7,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(329), 1,
      anon_sym_LF,
    STATE(100), 1,
      aux_sym_whitespace_repeat1,
    STATE(108), 1,
      sym_balance_assertion,
    STATE(258), 1,
      sym_note,
    ACTIONS(415), 2,
      anon_sym_,
      anon_sym_TAB,
  [2858] = 7,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(371), 1,
      anon_sym_LF,
    STATE(99), 1,
      aux_sym_whitespace_repeat1,
    STATE(114), 1,
      sym_balance_assertion,
    STATE(225), 1,
      sym_note,
    ACTIONS(417), 2,
      anon_sym_,
      anon_sym_TAB,
  [2881] = 7,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(333), 1,
      anon_sym_LF,
    STATE(103), 1,
      aux_sym_whitespace_repeat1,
    STATE(119), 1,
      sym_balance_assertion,
    STATE(222), 1,
      sym_note,
    ACTIONS(419), 2,
      anon_sym_,
      anon_sym_TAB,
  [2904] = 7,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    ACTIONS(421), 1,
      anon_sym_LF,
    STATE(101), 1,
      aux_sym_whitespace_repeat1,
    STATE(112), 1,
      sym_balance_assertion,
    STATE(237), 1,
      sym_note,
    ACTIONS(423), 2,
      anon_sym_,
      anon_sym_TAB,
  [2927] = 6,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(114), 1,
      sym_balance_assertion,
    STATE(225), 1,
      sym_note,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [2947] = 5,
    ACTIONS(427), 1,
      sym_payee,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    STATE(188), 1,
      sym_status,
    ACTIONS(425), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(429), 2,
      anon_sym_,
      anon_sym_TAB,
  [2965] = 7,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      sym_account_name,
    ACTIONS(431), 1,
      anon_sym_,
    ACTIONS(433), 1,
      anon_sym_TAB,
    STATE(129), 1,
      aux_sym_whitespace_repeat1,
    STATE(161), 1,
      sym_account,
  [2987] = 7,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      sym_account_name,
    ACTIONS(431), 1,
      anon_sym_,
    ACTIONS(433), 1,
      anon_sym_TAB,
    STATE(129), 1,
      aux_sym_whitespace_repeat1,
    STATE(153), 1,
      sym_account,
  [3009] = 7,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      sym_account_name,
    ACTIONS(431), 1,
      anon_sym_,
    ACTIONS(433), 1,
      anon_sym_TAB,
    STATE(129), 1,
      aux_sym_whitespace_repeat1,
    STATE(186), 1,
      sym_account,
  [3031] = 7,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      sym_account_name,
    ACTIONS(435), 1,
      anon_sym_,
    ACTIONS(437), 1,
      anon_sym_TAB,
    STATE(92), 1,
      aux_sym_whitespace_repeat1,
    STATE(186), 1,
      sym_account,
  [3053] = 6,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(112), 1,
      sym_balance_assertion,
    STATE(237), 1,
      sym_note,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3073] = 7,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      sym_account_name,
    ACTIONS(439), 1,
      anon_sym_,
    ACTIONS(441), 1,
      anon_sym_TAB,
    STATE(104), 1,
      aux_sym_whitespace_repeat1,
    STATE(161), 1,
      sym_account,
  [3095] = 7,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      sym_account_name,
    ACTIONS(431), 1,
      anon_sym_,
    ACTIONS(433), 1,
      anon_sym_TAB,
    STATE(129), 1,
      aux_sym_whitespace_repeat1,
    STATE(231), 1,
      sym_account,
  [3117] = 6,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(127), 1,
      sym_balance_assertion,
    STATE(219), 1,
      sym_note,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3137] = 6,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(118), 1,
      sym_balance_assertion,
    STATE(244), 1,
      sym_note,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3157] = 6,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(128), 1,
      sym_balance_assertion,
    STATE(242), 1,
      sym_note,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3177] = 7,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      sym_account_name,
    ACTIONS(443), 1,
      anon_sym_,
    ACTIONS(445), 1,
      anon_sym_TAB,
    STATE(93), 1,
      aux_sym_whitespace_repeat1,
    STATE(182), 1,
      sym_account,
  [3199] = 6,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(108), 1,
      sym_balance_assertion,
    STATE(258), 1,
      sym_note,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3219] = 7,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      sym_account_name,
    ACTIONS(431), 1,
      anon_sym_,
    ACTIONS(433), 1,
      anon_sym_TAB,
    STATE(129), 1,
      aux_sym_whitespace_repeat1,
    STATE(175), 1,
      sym_account,
  [3241] = 7,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      sym_account_name,
    ACTIONS(431), 1,
      anon_sym_,
    ACTIONS(433), 1,
      anon_sym_TAB,
    STATE(129), 1,
      aux_sym_whitespace_repeat1,
    STATE(227), 1,
      sym_account,
  [3263] = 7,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      sym_account_name,
    ACTIONS(447), 1,
      anon_sym_,
    ACTIONS(449), 1,
      anon_sym_TAB,
    STATE(94), 1,
      aux_sym_whitespace_repeat1,
    STATE(193), 1,
      sym_account,
  [3285] = 7,
    ACTIONS(350), 1,
      anon_sym_LPAREN,
    ACTIONS(352), 1,
      anon_sym_LBRACK,
    ACTIONS(354), 1,
      sym_account_name,
    ACTIONS(431), 1,
      anon_sym_,
    ACTIONS(433), 1,
      anon_sym_TAB,
    STATE(129), 1,
      aux_sym_whitespace_repeat1,
    STATE(229), 1,
      sym_account,
  [3307] = 5,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(360), 1,
      anon_sym_LF,
    STATE(144), 1,
      aux_sym_whitespace_repeat1,
    STATE(244), 1,
      sym_note,
    ACTIONS(451), 2,
      anon_sym_,
      anon_sym_TAB,
  [3324] = 5,
    ACTIONS(453), 1,
      anon_sym_DASH,
    ACTIONS(455), 1,
      aux_sym_quantity_token1,
    STATE(14), 1,
      sym_quantity,
    STATE(23), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(341), 2,
      anon_sym_,
      anon_sym_TAB,
  [3341] = 4,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(227), 1,
      sym_commodity,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3356] = 4,
    ACTIONS(343), 1,
      sym_payee,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(202), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    ACTIONS(457), 2,
      anon_sym_,
      anon_sym_TAB,
  [3371] = 5,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(460), 1,
      anon_sym_LF,
    STATE(137), 1,
      aux_sym_whitespace_repeat1,
    STATE(242), 1,
      sym_note,
    ACTIONS(462), 2,
      anon_sym_,
      anon_sym_TAB,
  [3388] = 5,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(333), 1,
      anon_sym_LF,
    STATE(132), 1,
      aux_sym_whitespace_repeat1,
    STATE(222), 1,
      sym_note,
    ACTIONS(464), 2,
      anon_sym_,
      anon_sym_TAB,
  [3405] = 5,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(409), 1,
      anon_sym_LF,
    STATE(134), 1,
      aux_sym_whitespace_repeat1,
    STATE(219), 1,
      sym_note,
    ACTIONS(466), 2,
      anon_sym_,
      anon_sym_TAB,
  [3422] = 4,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(176), 1,
      sym_commodity,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3437] = 4,
    STATE(11), 1,
      sym_commodity,
    STATE(125), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(468), 2,
      anon_sym_,
      anon_sym_TAB,
  [3452] = 5,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      aux_sym_quantity_token1,
    STATE(11), 1,
      sym_quantity,
    STATE(123), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(470), 2,
      anon_sym_,
      anon_sym_TAB,
  [3469] = 5,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(371), 1,
      anon_sym_LF,
    STATE(148), 1,
      aux_sym_whitespace_repeat1,
    STATE(225), 1,
      sym_note,
    ACTIONS(472), 2,
      anon_sym_,
      anon_sym_TAB,
  [3486] = 5,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(329), 1,
      anon_sym_LF,
    STATE(139), 1,
      aux_sym_whitespace_repeat1,
    STATE(258), 1,
      sym_note,
    ACTIONS(474), 2,
      anon_sym_,
      anon_sym_TAB,
  [3503] = 4,
    STATE(14), 1,
      sym_commodity,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
    ACTIONS(476), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
  [3518] = 5,
    ACTIONS(453), 1,
      anon_sym_DASH,
    ACTIONS(455), 1,
      aux_sym_quantity_token1,
    STATE(11), 1,
      sym_quantity,
    STATE(109), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(478), 2,
      anon_sym_,
      anon_sym_TAB,
  [3535] = 4,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(70), 1,
      sym_commodity,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3550] = 5,
    ACTIONS(317), 1,
      anon_sym_DASH,
    ACTIONS(319), 1,
      aux_sym_quantity_token1,
    STATE(14), 1,
      sym_quantity,
    STATE(23), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(341), 2,
      anon_sym_,
      anon_sym_TAB,
  [3567] = 4,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(230), 1,
      sym_commodity,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3582] = 4,
    STATE(14), 1,
      sym_commodity,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(321), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3597] = 4,
    STATE(11), 1,
      sym_commodity,
    STATE(120), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(476), 2,
      aux_sym_commodity_token1,
      aux_sym_commodity_token2,
    ACTIONS(480), 2,
      anon_sym_,
      anon_sym_TAB,
  [3612] = 5,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(421), 1,
      anon_sym_LF,
    STATE(150), 1,
      aux_sym_whitespace_repeat1,
    STATE(237), 1,
      sym_note,
    ACTIONS(482), 2,
      anon_sym_,
      anon_sym_TAB,
  [3629] = 5,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(484), 1,
      anon_sym_LF,
    STATE(130), 1,
      aux_sym_whitespace_repeat1,
    STATE(246), 1,
      sym_note,
    ACTIONS(486), 2,
      anon_sym_,
      anon_sym_TAB,
  [3646] = 4,
    ACTIONS(488), 1,
      anon_sym_,
    ACTIONS(491), 1,
      anon_sym_TAB,
    STATE(129), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(343), 3,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
  [3661] = 4,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(249), 1,
      sym_note,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3675] = 4,
    ACTIONS(43), 1,
      sym_single_date,
    STATE(143), 1,
      aux_sym_whitespace_repeat1,
    STATE(171), 1,
      sym_date,
    ACTIONS(494), 2,
      anon_sym_,
      anon_sym_TAB,
  [3689] = 4,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(258), 1,
      sym_note,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3703] = 4,
    ACTIONS(43), 1,
      sym_single_date,
    STATE(146), 1,
      aux_sym_whitespace_repeat1,
    STATE(170), 1,
      sym_date,
    ACTIONS(496), 2,
      anon_sym_,
      anon_sym_TAB,
  [3717] = 4,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(237), 1,
      sym_note,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3731] = 2,
    ACTIONS(500), 1,
      anon_sym_EQ,
    ACTIONS(498), 4,
      anon_sym_LF,
      sym_time,
      anon_sym_,
      anon_sym_TAB,
  [3741] = 3,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(149), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(16), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [3753] = 4,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(246), 1,
      sym_note,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3767] = 2,
    ACTIONS(504), 1,
      anon_sym_,
    ACTIONS(502), 4,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      sym_account_name,
      anon_sym_TAB,
  [3777] = 4,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(244), 1,
      sym_note,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3791] = 1,
    ACTIONS(506), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_,
      anon_sym_TAB,
  [3799] = 3,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(149), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(10), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [3811] = 1,
    ACTIONS(508), 5,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_,
      anon_sym_TAB,
  [3819] = 4,
    ACTIONS(43), 1,
      sym_single_date,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(180), 1,
      sym_date,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3833] = 4,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(225), 1,
      sym_note,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3847] = 3,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(149), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(15), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [3859] = 4,
    ACTIONS(43), 1,
      sym_single_date,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(178), 1,
      sym_date,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3873] = 4,
    ACTIONS(43), 1,
      sym_single_date,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(201), 1,
      sym_date,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3887] = 4,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(219), 1,
      sym_note,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3901] = 3,
    STATE(58), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(149), 2,
      anon_sym_,
      anon_sym_TAB,
    STATE(13), 2,
      sym_posting,
      aux_sym_plain_xact_repeat1,
  [3913] = 4,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    STATE(242), 1,
      sym_note,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3927] = 3,
    ACTIONS(510), 1,
      sym_payee,
    STATE(181), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(512), 2,
      anon_sym_,
      anon_sym_TAB,
  [3938] = 3,
    ACTIONS(514), 1,
      aux_sym_word_directive_token3,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [3949] = 2,
    ACTIONS(333), 1,
      anon_sym_LF,
    ACTIONS(516), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [3958] = 3,
    ACTIONS(202), 1,
      aux_sym_alias_subdirective_token1,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(518), 2,
      anon_sym_,
      anon_sym_TAB,
  [3969] = 3,
    ACTIONS(343), 1,
      aux_sym_word_directive_token2,
    STATE(155), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(521), 2,
      anon_sym_,
      anon_sym_TAB,
  [3980] = 3,
    ACTIONS(343), 1,
      aux_sym_word_directive_token1,
    STATE(156), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(524), 2,
      anon_sym_,
      anon_sym_TAB,
  [3991] = 3,
    ACTIONS(527), 1,
      anon_sym_LF,
    STATE(91), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(529), 2,
      anon_sym_,
      anon_sym_TAB,
  [4002] = 3,
    ACTIONS(531), 1,
      aux_sym_word_directive_token1,
    STATE(156), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(533), 2,
      anon_sym_,
      anon_sym_TAB,
  [4013] = 3,
    ACTIONS(535), 1,
      sym_payee,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(429), 2,
      anon_sym_,
      anon_sym_TAB,
  [4024] = 3,
    ACTIONS(535), 1,
      sym_payee,
    STATE(173), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(537), 2,
      anon_sym_,
      anon_sym_TAB,
  [4035] = 2,
    ACTIONS(539), 1,
      anon_sym_LF,
    ACTIONS(541), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4044] = 3,
    ACTIONS(543), 1,
      aux_sym_alias_subdirective_token1,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(545), 2,
      anon_sym_,
      anon_sym_TAB,
  [4055] = 3,
    ACTIONS(547), 1,
      aux_sym_alias_subdirective_token1,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(545), 2,
      anon_sym_,
      anon_sym_TAB,
  [4066] = 3,
    ACTIONS(549), 1,
      aux_sym_alias_subdirective_token1,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(545), 2,
      anon_sym_,
      anon_sym_TAB,
  [4077] = 3,
    ACTIONS(551), 1,
      aux_sym_word_directive_token2,
    STATE(155), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(553), 2,
      anon_sym_,
      anon_sym_TAB,
  [4088] = 3,
    ACTIONS(555), 1,
      aux_sym_alias_subdirective_token1,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(545), 2,
      anon_sym_,
      anon_sym_TAB,
  [4099] = 3,
    ACTIONS(557), 1,
      aux_sym_alias_subdirective_token1,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(545), 2,
      anon_sym_,
      anon_sym_TAB,
  [4110] = 3,
    ACTIONS(559), 1,
      aux_sym_alias_subdirective_token1,
    STATE(154), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(545), 2,
      anon_sym_,
      anon_sym_TAB,
  [4121] = 3,
    ACTIONS(561), 1,
      aux_sym_word_directive_token3,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [4132] = 3,
    ACTIONS(563), 1,
      sym_time,
    STATE(177), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(565), 2,
      anon_sym_,
      anon_sym_TAB,
  [4143] = 3,
    ACTIONS(567), 1,
      sym_time,
    STATE(179), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(569), 2,
      anon_sym_,
      anon_sym_TAB,
  [4154] = 1,
    ACTIONS(571), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4161] = 3,
    ACTIONS(573), 1,
      sym_payee,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(429), 2,
      anon_sym_,
      anon_sym_TAB,
  [4172] = 3,
    ACTIONS(573), 1,
      sym_payee,
    STATE(194), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(575), 2,
      anon_sym_,
      anon_sym_TAB,
  [4183] = 2,
    ACTIONS(577), 1,
      anon_sym_LF,
    ACTIONS(579), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4192] = 3,
    ACTIONS(581), 1,
      anon_sym_EQ,
    STATE(189), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(583), 2,
      anon_sym_,
      anon_sym_TAB,
  [4203] = 3,
    ACTIONS(585), 1,
      sym_time,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [4214] = 3,
    ACTIONS(585), 1,
      sym_time,
    STATE(196), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(587), 2,
      anon_sym_,
      anon_sym_TAB,
  [4225] = 3,
    ACTIONS(589), 1,
      sym_time,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [4236] = 3,
    ACTIONS(589), 1,
      sym_time,
    STATE(195), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(591), 2,
      anon_sym_,
      anon_sym_TAB,
  [4247] = 3,
    ACTIONS(593), 1,
      sym_payee,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(429), 2,
      anon_sym_,
      anon_sym_TAB,
  [4258] = 2,
    ACTIONS(311), 1,
      anon_sym_LF,
    ACTIONS(595), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4267] = 1,
    ACTIONS(597), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [4274] = 1,
    ACTIONS(599), 4,
      anon_sym_LF,
      anon_sym_SEMI,
      anon_sym_,
      anon_sym_TAB,
  [4281] = 1,
    ACTIONS(601), 4,
      anon_sym_LF,
      sym_time,
      anon_sym_,
      anon_sym_TAB,
  [4288] = 2,
    ACTIONS(603), 1,
      anon_sym_LF,
    ACTIONS(605), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4297] = 3,
    ACTIONS(607), 1,
      sym_payee,
    STATE(159), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(609), 2,
      anon_sym_,
      anon_sym_TAB,
  [4308] = 3,
    ACTIONS(611), 1,
      anon_sym_LF,
    STATE(191), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(613), 2,
      anon_sym_,
      anon_sym_TAB,
  [4319] = 3,
    ACTIONS(615), 1,
      anon_sym_EQ,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [4330] = 1,
    ACTIONS(617), 4,
      anon_sym_LF,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4337] = 3,
    ACTIONS(619), 1,
      sym_payee,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(429), 2,
      anon_sym_,
      anon_sym_TAB,
  [4348] = 2,
    ACTIONS(621), 1,
      anon_sym_LF,
    ACTIONS(623), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4357] = 2,
    ACTIONS(625), 1,
      anon_sym_LF,
    ACTIONS(627), 3,
      anon_sym_TAB,
      anon_sym_2,
      anon_sym_TAB2,
  [4366] = 3,
    ACTIONS(510), 1,
      sym_payee,
    STATE(111), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(429), 2,
      anon_sym_,
      anon_sym_TAB,
  [4377] = 3,
    ACTIONS(629), 1,
      sym_time,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [4388] = 3,
    ACTIONS(631), 1,
      sym_time,
    STATE(57), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(377), 2,
      anon_sym_,
      anon_sym_TAB,
  [4399] = 1,
    ACTIONS(504), 3,
      anon_sym_LF,
      anon_sym_,
      anon_sym_TAB,
  [4405] = 2,
    STATE(162), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(633), 2,
      anon_sym_,
      anon_sym_TAB,
  [4413] = 2,
    STATE(163), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(635), 2,
      anon_sym_,
      anon_sym_TAB,
  [4421] = 2,
    STATE(164), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(637), 2,
      anon_sym_,
      anon_sym_TAB,
  [4429] = 2,
    STATE(122), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(639), 2,
      anon_sym_,
      anon_sym_TAB,
  [4437] = 2,
    STATE(98), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(641), 2,
      anon_sym_,
      anon_sym_TAB,
  [4445] = 2,
    STATE(124), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(643), 2,
      anon_sym_,
      anon_sym_TAB,
  [4453] = 2,
    STATE(158), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(645), 2,
      anon_sym_,
      anon_sym_TAB,
  [4461] = 2,
    STATE(165), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(647), 2,
      anon_sym_,
      anon_sym_TAB,
  [4469] = 2,
    STATE(169), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(649), 2,
      anon_sym_,
      anon_sym_TAB,
  [4477] = 2,
    STATE(107), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(651), 2,
      anon_sym_,
      anon_sym_TAB,
  [4485] = 2,
    STATE(105), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(653), 2,
      anon_sym_,
      anon_sym_TAB,
  [4493] = 2,
    STATE(152), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(655), 2,
      anon_sym_,
      anon_sym_TAB,
  [4501] = 2,
    STATE(110), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(657), 2,
      anon_sym_,
      anon_sym_TAB,
  [4509] = 2,
    STATE(69), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(659), 2,
      anon_sym_,
      anon_sym_TAB,
  [4517] = 2,
    STATE(115), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(661), 2,
      anon_sym_,
      anon_sym_TAB,
  [4525] = 2,
    STATE(147), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(663), 2,
      anon_sym_,
      anon_sym_TAB,
  [4533] = 2,
    STATE(56), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(665), 2,
      anon_sym_,
      anon_sym_TAB,
  [4541] = 2,
    STATE(167), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(667), 2,
      anon_sym_,
      anon_sym_TAB,
  [4549] = 2,
    STATE(168), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(669), 2,
      anon_sym_,
      anon_sym_TAB,
  [4557] = 2,
    STATE(166), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(671), 2,
      anon_sym_,
      anon_sym_TAB,
  [4565] = 2,
    STATE(74), 1,
      aux_sym_whitespace_repeat1,
    ACTIONS(673), 2,
      anon_sym_,
      anon_sym_TAB,
  [4573] = 1,
    ACTIONS(421), 1,
      anon_sym_LF,
  [4577] = 1,
    ACTIONS(675), 1,
      anon_sym_LF,
  [4581] = 1,
    ACTIONS(677), 1,
      anon_sym_LF,
  [4585] = 1,
    ACTIONS(329), 1,
      anon_sym_LF,
  [4589] = 1,
    ACTIONS(679), 1,
      anon_sym_LF,
  [4593] = 1,
    ACTIONS(681), 1,
      aux_sym_default_subdirective_token1,
  [4597] = 1,
    ACTIONS(409), 1,
      anon_sym_LF,
  [4601] = 1,
    ACTIONS(683), 1,
      aux_sym_quantity_token1,
  [4605] = 1,
    ACTIONS(685), 1,
      anon_sym_LF,
  [4609] = 1,
    ACTIONS(687), 1,
      anon_sym_EQ,
  [4613] = 1,
    ACTIONS(689), 1,
      anon_sym_LF,
  [4617] = 1,
    ACTIONS(691), 1,
      anon_sym_LF,
  [4621] = 1,
    ACTIONS(693), 1,
      anon_sym_LF,
  [4625] = 1,
    ACTIONS(577), 1,
      anon_sym_LF,
  [4629] = 1,
    ACTIONS(695), 1,
      sym_account_name,
  [4633] = 1,
    ACTIONS(697), 1,
      sym_account_name,
  [4637] = 1,
    ACTIONS(699), 1,
      sym_single_date,
  [4641] = 1,
    ACTIONS(701), 1,
      anon_sym_LF,
  [4645] = 1,
    ACTIONS(460), 1,
      anon_sym_LF,
  [4649] = 1,
    ACTIONS(703), 1,
      anon_sym_LF,
  [4653] = 1,
    ACTIONS(705), 1,
      anon_sym_LF,
  [4657] = 1,
    ACTIONS(707), 1,
      anon_sym_LF,
  [4661] = 1,
    ACTIONS(709), 1,
      aux_sym_comment_token1,
  [4665] = 1,
    ACTIONS(484), 1,
      anon_sym_LF,
  [4669] = 1,
    ACTIONS(539), 1,
      anon_sym_LF,
  [4673] = 1,
    ACTIONS(371), 1,
      anon_sym_LF,
  [4677] = 1,
    ACTIONS(711), 1,
      anon_sym_LF,
  [4681] = 1,
    ACTIONS(713), 1,
      anon_sym_LF,
  [4685] = 1,
    ACTIONS(715), 1,
      anon_sym_LF,
  [4689] = 1,
    ACTIONS(717), 1,
      ts_builtin_sym_end,
  [4693] = 1,
    ACTIONS(719), 1,
      anon_sym_LF,
  [4697] = 1,
    ACTIONS(721), 1,
      anon_sym_LF,
  [4701] = 1,
    ACTIONS(723), 1,
      anon_sym_LF,
  [4705] = 1,
    ACTIONS(725), 1,
      anon_sym_LF,
  [4709] = 1,
    ACTIONS(611), 1,
      anon_sym_LF,
  [4713] = 1,
    ACTIONS(727), 1,
      anon_sym_LF,
  [4717] = 1,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
  [4721] = 1,
    ACTIONS(729), 1,
      anon_sym_RBRACK,
  [4725] = 1,
    ACTIONS(731), 1,
      aux_sym_word_directive_token1,
  [4729] = 1,
    ACTIONS(360), 1,
      anon_sym_LF,
  [4733] = 1,
    ACTIONS(733), 1,
      anon_sym_LF,
  [4737] = 1,
    ACTIONS(333), 1,
      anon_sym_LF,
  [4741] = 1,
    ACTIONS(735), 1,
      anon_sym_LF,
  [4745] = 1,
    ACTIONS(737), 1,
      anon_sym_LF,
  [4749] = 1,
    ACTIONS(739), 1,
      anon_sym_LF,
  [4753] = 1,
    ACTIONS(741), 1,
      aux_sym_note_token1,
  [4757] = 1,
    ACTIONS(743), 1,
      anon_sym_LF,
  [4761] = 1,
    ACTIONS(745), 1,
      aux_sym_default_subdirective_token1,
  [4765] = 1,
    ACTIONS(747), 1,
      aux_sym_quantity_token1,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 95,
  [SMALL_STATE(4)] = 190,
  [SMALL_STATE(5)] = 239,
  [SMALL_STATE(6)] = 288,
  [SMALL_STATE(7)] = 337,
  [SMALL_STATE(8)] = 384,
  [SMALL_STATE(9)] = 431,
  [SMALL_STATE(10)] = 478,
  [SMALL_STATE(11)] = 518,
  [SMALL_STATE(12)] = 552,
  [SMALL_STATE(13)] = 592,
  [SMALL_STATE(14)] = 632,
  [SMALL_STATE(15)] = 666,
  [SMALL_STATE(16)] = 706,
  [SMALL_STATE(17)] = 746,
  [SMALL_STATE(18)] = 777,
  [SMALL_STATE(19)] = 808,
  [SMALL_STATE(20)] = 839,
  [SMALL_STATE(21)] = 870,
  [SMALL_STATE(22)] = 901,
  [SMALL_STATE(23)] = 932,
  [SMALL_STATE(24)] = 965,
  [SMALL_STATE(25)] = 996,
  [SMALL_STATE(26)] = 1027,
  [SMALL_STATE(27)] = 1058,
  [SMALL_STATE(28)] = 1089,
  [SMALL_STATE(29)] = 1120,
  [SMALL_STATE(30)] = 1151,
  [SMALL_STATE(31)] = 1182,
  [SMALL_STATE(32)] = 1213,
  [SMALL_STATE(33)] = 1244,
  [SMALL_STATE(34)] = 1275,
  [SMALL_STATE(35)] = 1306,
  [SMALL_STATE(36)] = 1337,
  [SMALL_STATE(37)] = 1368,
  [SMALL_STATE(38)] = 1399,
  [SMALL_STATE(39)] = 1430,
  [SMALL_STATE(40)] = 1461,
  [SMALL_STATE(41)] = 1492,
  [SMALL_STATE(42)] = 1523,
  [SMALL_STATE(43)] = 1554,
  [SMALL_STATE(44)] = 1585,
  [SMALL_STATE(45)] = 1616,
  [SMALL_STATE(46)] = 1645,
  [SMALL_STATE(47)] = 1674,
  [SMALL_STATE(48)] = 1703,
  [SMALL_STATE(49)] = 1732,
  [SMALL_STATE(50)] = 1761,
  [SMALL_STATE(51)] = 1812,
  [SMALL_STATE(52)] = 1863,
  [SMALL_STATE(53)] = 1914,
  [SMALL_STATE(54)] = 1962,
  [SMALL_STATE(55)] = 2010,
  [SMALL_STATE(56)] = 2058,
  [SMALL_STATE(57)] = 2083,
  [SMALL_STATE(58)] = 2104,
  [SMALL_STATE(59)] = 2139,
  [SMALL_STATE(60)] = 2171,
  [SMALL_STATE(61)] = 2203,
  [SMALL_STATE(62)] = 2235,
  [SMALL_STATE(63)] = 2255,
  [SMALL_STATE(64)] = 2271,
  [SMALL_STATE(65)] = 2303,
  [SMALL_STATE(66)] = 2330,
  [SMALL_STATE(67)] = 2357,
  [SMALL_STATE(68)] = 2384,
  [SMALL_STATE(69)] = 2413,
  [SMALL_STATE(70)] = 2440,
  [SMALL_STATE(71)] = 2467,
  [SMALL_STATE(72)] = 2494,
  [SMALL_STATE(73)] = 2523,
  [SMALL_STATE(74)] = 2550,
  [SMALL_STATE(75)] = 2577,
  [SMALL_STATE(76)] = 2606,
  [SMALL_STATE(77)] = 2633,
  [SMALL_STATE(78)] = 2660,
  [SMALL_STATE(79)] = 2689,
  [SMALL_STATE(80)] = 2718,
  [SMALL_STATE(81)] = 2732,
  [SMALL_STATE(82)] = 2752,
  [SMALL_STATE(83)] = 2766,
  [SMALL_STATE(84)] = 2789,
  [SMALL_STATE(85)] = 2812,
  [SMALL_STATE(86)] = 2835,
  [SMALL_STATE(87)] = 2858,
  [SMALL_STATE(88)] = 2881,
  [SMALL_STATE(89)] = 2904,
  [SMALL_STATE(90)] = 2927,
  [SMALL_STATE(91)] = 2947,
  [SMALL_STATE(92)] = 2965,
  [SMALL_STATE(93)] = 2987,
  [SMALL_STATE(94)] = 3009,
  [SMALL_STATE(95)] = 3031,
  [SMALL_STATE(96)] = 3053,
  [SMALL_STATE(97)] = 3073,
  [SMALL_STATE(98)] = 3095,
  [SMALL_STATE(99)] = 3117,
  [SMALL_STATE(100)] = 3137,
  [SMALL_STATE(101)] = 3157,
  [SMALL_STATE(102)] = 3177,
  [SMALL_STATE(103)] = 3199,
  [SMALL_STATE(104)] = 3219,
  [SMALL_STATE(105)] = 3241,
  [SMALL_STATE(106)] = 3263,
  [SMALL_STATE(107)] = 3285,
  [SMALL_STATE(108)] = 3307,
  [SMALL_STATE(109)] = 3324,
  [SMALL_STATE(110)] = 3341,
  [SMALL_STATE(111)] = 3356,
  [SMALL_STATE(112)] = 3371,
  [SMALL_STATE(113)] = 3388,
  [SMALL_STATE(114)] = 3405,
  [SMALL_STATE(115)] = 3422,
  [SMALL_STATE(116)] = 3437,
  [SMALL_STATE(117)] = 3452,
  [SMALL_STATE(118)] = 3469,
  [SMALL_STATE(119)] = 3486,
  [SMALL_STATE(120)] = 3503,
  [SMALL_STATE(121)] = 3518,
  [SMALL_STATE(122)] = 3535,
  [SMALL_STATE(123)] = 3550,
  [SMALL_STATE(124)] = 3567,
  [SMALL_STATE(125)] = 3582,
  [SMALL_STATE(126)] = 3597,
  [SMALL_STATE(127)] = 3612,
  [SMALL_STATE(128)] = 3629,
  [SMALL_STATE(129)] = 3646,
  [SMALL_STATE(130)] = 3661,
  [SMALL_STATE(131)] = 3675,
  [SMALL_STATE(132)] = 3689,
  [SMALL_STATE(133)] = 3703,
  [SMALL_STATE(134)] = 3717,
  [SMALL_STATE(135)] = 3731,
  [SMALL_STATE(136)] = 3741,
  [SMALL_STATE(137)] = 3753,
  [SMALL_STATE(138)] = 3767,
  [SMALL_STATE(139)] = 3777,
  [SMALL_STATE(140)] = 3791,
  [SMALL_STATE(141)] = 3799,
  [SMALL_STATE(142)] = 3811,
  [SMALL_STATE(143)] = 3819,
  [SMALL_STATE(144)] = 3833,
  [SMALL_STATE(145)] = 3847,
  [SMALL_STATE(146)] = 3859,
  [SMALL_STATE(147)] = 3873,
  [SMALL_STATE(148)] = 3887,
  [SMALL_STATE(149)] = 3901,
  [SMALL_STATE(150)] = 3913,
  [SMALL_STATE(151)] = 3927,
  [SMALL_STATE(152)] = 3938,
  [SMALL_STATE(153)] = 3949,
  [SMALL_STATE(154)] = 3958,
  [SMALL_STATE(155)] = 3969,
  [SMALL_STATE(156)] = 3980,
  [SMALL_STATE(157)] = 3991,
  [SMALL_STATE(158)] = 4002,
  [SMALL_STATE(159)] = 4013,
  [SMALL_STATE(160)] = 4024,
  [SMALL_STATE(161)] = 4035,
  [SMALL_STATE(162)] = 4044,
  [SMALL_STATE(163)] = 4055,
  [SMALL_STATE(164)] = 4066,
  [SMALL_STATE(165)] = 4077,
  [SMALL_STATE(166)] = 4088,
  [SMALL_STATE(167)] = 4099,
  [SMALL_STATE(168)] = 4110,
  [SMALL_STATE(169)] = 4121,
  [SMALL_STATE(170)] = 4132,
  [SMALL_STATE(171)] = 4143,
  [SMALL_STATE(172)] = 4154,
  [SMALL_STATE(173)] = 4161,
  [SMALL_STATE(174)] = 4172,
  [SMALL_STATE(175)] = 4183,
  [SMALL_STATE(176)] = 4192,
  [SMALL_STATE(177)] = 4203,
  [SMALL_STATE(178)] = 4214,
  [SMALL_STATE(179)] = 4225,
  [SMALL_STATE(180)] = 4236,
  [SMALL_STATE(181)] = 4247,
  [SMALL_STATE(182)] = 4258,
  [SMALL_STATE(183)] = 4267,
  [SMALL_STATE(184)] = 4274,
  [SMALL_STATE(185)] = 4281,
  [SMALL_STATE(186)] = 4288,
  [SMALL_STATE(187)] = 4297,
  [SMALL_STATE(188)] = 4308,
  [SMALL_STATE(189)] = 4319,
  [SMALL_STATE(190)] = 4330,
  [SMALL_STATE(191)] = 4337,
  [SMALL_STATE(192)] = 4348,
  [SMALL_STATE(193)] = 4357,
  [SMALL_STATE(194)] = 4366,
  [SMALL_STATE(195)] = 4377,
  [SMALL_STATE(196)] = 4388,
  [SMALL_STATE(197)] = 4399,
  [SMALL_STATE(198)] = 4405,
  [SMALL_STATE(199)] = 4413,
  [SMALL_STATE(200)] = 4421,
  [SMALL_STATE(201)] = 4429,
  [SMALL_STATE(202)] = 4437,
  [SMALL_STATE(203)] = 4445,
  [SMALL_STATE(204)] = 4453,
  [SMALL_STATE(205)] = 4461,
  [SMALL_STATE(206)] = 4469,
  [SMALL_STATE(207)] = 4477,
  [SMALL_STATE(208)] = 4485,
  [SMALL_STATE(209)] = 4493,
  [SMALL_STATE(210)] = 4501,
  [SMALL_STATE(211)] = 4509,
  [SMALL_STATE(212)] = 4517,
  [SMALL_STATE(213)] = 4525,
  [SMALL_STATE(214)] = 4533,
  [SMALL_STATE(215)] = 4541,
  [SMALL_STATE(216)] = 4549,
  [SMALL_STATE(217)] = 4557,
  [SMALL_STATE(218)] = 4565,
  [SMALL_STATE(219)] = 4573,
  [SMALL_STATE(220)] = 4577,
  [SMALL_STATE(221)] = 4581,
  [SMALL_STATE(222)] = 4585,
  [SMALL_STATE(223)] = 4589,
  [SMALL_STATE(224)] = 4593,
  [SMALL_STATE(225)] = 4597,
  [SMALL_STATE(226)] = 4601,
  [SMALL_STATE(227)] = 4605,
  [SMALL_STATE(228)] = 4609,
  [SMALL_STATE(229)] = 4613,
  [SMALL_STATE(230)] = 4617,
  [SMALL_STATE(231)] = 4621,
  [SMALL_STATE(232)] = 4625,
  [SMALL_STATE(233)] = 4629,
  [SMALL_STATE(234)] = 4633,
  [SMALL_STATE(235)] = 4637,
  [SMALL_STATE(236)] = 4641,
  [SMALL_STATE(237)] = 4645,
  [SMALL_STATE(238)] = 4649,
  [SMALL_STATE(239)] = 4653,
  [SMALL_STATE(240)] = 4657,
  [SMALL_STATE(241)] = 4661,
  [SMALL_STATE(242)] = 4665,
  [SMALL_STATE(243)] = 4669,
  [SMALL_STATE(244)] = 4673,
  [SMALL_STATE(245)] = 4677,
  [SMALL_STATE(246)] = 4681,
  [SMALL_STATE(247)] = 4685,
  [SMALL_STATE(248)] = 4689,
  [SMALL_STATE(249)] = 4693,
  [SMALL_STATE(250)] = 4697,
  [SMALL_STATE(251)] = 4701,
  [SMALL_STATE(252)] = 4705,
  [SMALL_STATE(253)] = 4709,
  [SMALL_STATE(254)] = 4713,
  [SMALL_STATE(255)] = 4717,
  [SMALL_STATE(256)] = 4721,
  [SMALL_STATE(257)] = 4725,
  [SMALL_STATE(258)] = 4729,
  [SMALL_STATE(259)] = 4733,
  [SMALL_STATE(260)] = 4737,
  [SMALL_STATE(261)] = 4741,
  [SMALL_STATE(262)] = 4745,
  [SMALL_STATE(263)] = 4749,
  [SMALL_STATE(264)] = 4753,
  [SMALL_STATE(265)] = 4757,
  [SMALL_STATE(266)] = 4761,
  [SMALL_STATE(267)] = 4765,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(241),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(202),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(203),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(204),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(262),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(205),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(206),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(207),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(210),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(211),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(212),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(213),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(131),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(214),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_directive_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_directive_repeat1, 2), SHIFT_REPEAT(75),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_directive, 5),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_directive, 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_commodity_directive_repeat1, 2),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_commodity_directive_repeat1, 2), SHIFT_REPEAT(83),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_directive, 5),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_directive, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 2),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 2), SHIFT_REPEAT(58),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 7),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 7),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 3),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 3),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_periodic_xact, 5),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_periodic_xact, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_xact, 5),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plain_xact, 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 14),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 14),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nomarket_subdirective, 3),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nomarket_subdirective, 3),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 13),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 13),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_plain_xact_repeat1, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(23),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 12),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 12),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_subdirective, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_default_subdirective, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 11),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 11),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_subdirective, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format_subdirective, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_subdirective, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_subdirective, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account_subdirective, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account_subdirective, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantity, 1),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantity, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias_subdirective, 4),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias_subdirective, 4),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assert_subdirective, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assert_subdirective, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_subdirective, 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_check_subdirective, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 10),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 10),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eval_subdirective, 4),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eval_subdirective, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_subdirective, 4),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_subdirective, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee_subdirective, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_payee_subdirective, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xact, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xact, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_journal_item, 1),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_journal_item, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(57),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(62),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(81),
  [402] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(81),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(111),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(129),
  [491] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(129),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_status, 1),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_status, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [518] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(154),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(155),
  [524] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_whitespace_repeat1, 2), SHIFT_REPEAT(156),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 6),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [573] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [575] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 7),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_assertion, 3),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 5),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 3),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 9),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 3),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 10),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 3),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 3),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 7),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 4),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interval, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [717] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_out, 5),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 5),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 5),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char_directive, 6),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_word_directive, 1),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_check_in, 8),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ledger(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
