#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 121
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 65
#define ALIAS_COUNT 0
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_priority = 1,
  anon_sym_const = 2,
  anon_sym_init = 3,
  anon_sym_SEMI = 4,
  sym_arrow = 5,
  anon_sym_proctype = 6,
  aux_sym_proc_token1 = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_COMMA = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_unless = 13,
  anon_sym_EQ = 14,
  anon_sym_PLUS_PLUS = 15,
  anon_sym_DASH_DASH = 16,
  anon_sym_printf = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_string_token1 = 19,
  anon_sym_break = 20,
  anon_sym_hidden = 21,
  anon_sym_show = 22,
  anon_sym_islocal = 23,
  anon_sym_COLON = 24,
  anon_sym_LBRACK = 25,
  anon_sym_RBRACK = 26,
  anon_sym_DOT = 27,
  sym_Expr = 28,
  sym_number = 29,
  anon_sym_STAR = 30,
  anon_sym_PLUS = 31,
  sym_comment = 32,
  sym_program = 33,
  sym__unit = 34,
  sym_priority = 35,
  sym_init = 36,
  sym__semi = 37,
  sym_proc = 38,
  sym_body = 39,
  sym_arg = 40,
  aux_sym__ms = 41,
  sym_decl = 42,
  sym_step = 43,
  sym_stmnt = 44,
  sym_Stmnt = 45,
  sym_printf = 46,
  sym_string = 47,
  sym_Special = 48,
  sym_vis = 49,
  sym_osubt = 50,
  sym_one_decl = 51,
  sym_full_expr = 52,
  sym_varref = 53,
  sym_cmpnd = 54,
  sym__name = 55,
  sym_pfld = 56,
  sym_type = 57,
  sym_var_list = 58,
  sym_expr = 59,
  sym_factor = 60,
  sym_term = 61,
  aux_sym_program_repeat1 = 62,
  aux_sym_body_repeat1 = 63,
  aux_sym_var_list_repeat1 = 64,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_priority] = "priority",
  [anon_sym_const] = "const",
  [anon_sym_init] = "init",
  [anon_sym_SEMI] = ";",
  [sym_arrow] = "arrow",
  [anon_sym_proctype] = "proctype",
  [aux_sym_proc_token1] = "proc_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_unless] = "unless",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_printf] = "printf",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_break] = "break",
  [anon_sym_hidden] = "hidden",
  [anon_sym_show] = "show",
  [anon_sym_islocal] = "islocal",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [sym_Expr] = "Expr",
  [sym_number] = "number",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__unit] = "_unit",
  [sym_priority] = "priority",
  [sym_init] = "init",
  [sym__semi] = "_semi",
  [sym_proc] = "proc",
  [sym_body] = "body",
  [sym_arg] = "arg",
  [aux_sym__ms] = "_ms",
  [sym_decl] = "decl",
  [sym_step] = "step",
  [sym_stmnt] = "stmnt",
  [sym_Stmnt] = "Stmnt",
  [sym_printf] = "printf",
  [sym_string] = "string",
  [sym_Special] = "Special",
  [sym_vis] = "vis",
  [sym_osubt] = "osubt",
  [sym_one_decl] = "one_decl",
  [sym_full_expr] = "full_expr",
  [sym_varref] = "varref",
  [sym_cmpnd] = "cmpnd",
  [sym__name] = "_name",
  [sym_pfld] = "pfld",
  [sym_type] = "type",
  [sym_var_list] = "var_list",
  [sym_expr] = "expr",
  [sym_factor] = "factor",
  [sym_term] = "term",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_body_repeat1] = "body_repeat1",
  [aux_sym_var_list_repeat1] = "var_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_priority] = anon_sym_priority,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_init] = anon_sym_init,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_arrow] = sym_arrow,
  [anon_sym_proctype] = anon_sym_proctype,
  [aux_sym_proc_token1] = aux_sym_proc_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_unless] = anon_sym_unless,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_printf] = anon_sym_printf,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_hidden] = anon_sym_hidden,
  [anon_sym_show] = anon_sym_show,
  [anon_sym_islocal] = anon_sym_islocal,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_Expr] = sym_Expr,
  [sym_number] = sym_number,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
  [sym__unit] = sym__unit,
  [sym_priority] = sym_priority,
  [sym_init] = sym_init,
  [sym__semi] = sym__semi,
  [sym_proc] = sym_proc,
  [sym_body] = sym_body,
  [sym_arg] = sym_arg,
  [aux_sym__ms] = aux_sym__ms,
  [sym_decl] = sym_decl,
  [sym_step] = sym_step,
  [sym_stmnt] = sym_stmnt,
  [sym_Stmnt] = sym_Stmnt,
  [sym_printf] = sym_printf,
  [sym_string] = sym_string,
  [sym_Special] = sym_Special,
  [sym_vis] = sym_vis,
  [sym_osubt] = sym_osubt,
  [sym_one_decl] = sym_one_decl,
  [sym_full_expr] = sym_full_expr,
  [sym_varref] = sym_varref,
  [sym_cmpnd] = sym_cmpnd,
  [sym__name] = sym__name,
  [sym_pfld] = sym_pfld,
  [sym_type] = sym_type,
  [sym_var_list] = sym_var_list,
  [sym_expr] = sym_expr,
  [sym_factor] = sym_factor,
  [sym_term] = sym_term,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_body_repeat1] = aux_sym_body_repeat1,
  [aux_sym_var_list_repeat1] = aux_sym_var_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_priority] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_init] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_arrow] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_proctype] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_proc_token1] = {
    .visible = false,
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
  [anon_sym_COMMA] = {
    .visible = true,
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
  [anon_sym_unless] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_printf] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hidden] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_show] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_islocal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_Expr] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__unit] = {
    .visible = false,
    .named = true,
  },
  [sym_priority] = {
    .visible = true,
    .named = true,
  },
  [sym_init] = {
    .visible = true,
    .named = true,
  },
  [sym__semi] = {
    .visible = false,
    .named = true,
  },
  [sym_proc] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
  },
  [sym_arg] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__ms] = {
    .visible = false,
    .named = false,
  },
  [sym_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_step] = {
    .visible = true,
    .named = true,
  },
  [sym_stmnt] = {
    .visible = true,
    .named = true,
  },
  [sym_Stmnt] = {
    .visible = true,
    .named = true,
  },
  [sym_printf] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_Special] = {
    .visible = true,
    .named = true,
  },
  [sym_vis] = {
    .visible = true,
    .named = true,
  },
  [sym_osubt] = {
    .visible = true,
    .named = true,
  },
  [sym_one_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_full_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_varref] = {
    .visible = true,
    .named = true,
  },
  [sym_cmpnd] = {
    .visible = true,
    .named = true,
  },
  [sym__name] = {
    .visible = false,
    .named = true,
  },
  [sym_pfld] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_var_list] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_factor] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
  [12] = 8,
  [13] = 13,
  [14] = 13,
  [15] = 9,
  [16] = 16,
  [17] = 7,
  [18] = 18,
  [19] = 18,
  [20] = 16,
  [21] = 11,
  [22] = 8,
  [23] = 13,
  [24] = 9,
  [25] = 7,
  [26] = 26,
  [27] = 26,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
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
  [47] = 40,
  [48] = 48,
  [49] = 37,
  [50] = 44,
  [51] = 29,
  [52] = 34,
  [53] = 28,
  [54] = 46,
  [55] = 40,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 45,
  [60] = 30,
  [61] = 39,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 66,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 73,
  [75] = 75,
  [76] = 76,
  [77] = 73,
  [78] = 72,
  [79] = 70,
  [80] = 71,
  [81] = 72,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 92,
  [98] = 90,
  [99] = 99,
  [100] = 95,
  [101] = 93,
  [102] = 88,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 112,
  [115] = 115,
  [116] = 115,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 107,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(60);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(142);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(136);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == 'E') ADVANCE(55);
      if (lookahead == '[') ADVANCE(137);
      if (lookahead == ']') ADVANCE(138);
      if (lookahead == 'b') ADVANCE(42);
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == '{') ADVANCE(109);
      if (lookahead == '}') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(142);
      if (lookahead == '+') ADVANCE(143);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '[') ADVANCE(137);
      if (lookahead == ']') ADVANCE(138);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == '}') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(142);
      if (lookahead == '+') ADVANCE(143);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '[') ADVANCE(137);
      if (lookahead == ']') ADVANCE(138);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == '}') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(146);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '+') ADVANCE(117);
      END_STATE();
    case 7:
      if (lookahead == '+') ADVANCE(6);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ':') ADVANCE(136);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(118);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(118);
      if (lookahead == '>') ADVANCE(66);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == '[') ADVANCE(137);
      if (lookahead == ']') ADVANCE(138);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(145);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(119);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 28:
      if (lookahead == 'k') ADVANCE(128);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == 'w') ADVANCE(132);
      END_STATE();
    case 55:
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 56:
      if (lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 58:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(127);
      END_STATE();
    case 59:
      if (eof) ADVANCE(60);
      if (lookahead == ')') ADVANCE(113);
      if (lookahead == '*') ADVANCE(142);
      if (lookahead == '+') ADVANCE(144);
      if (lookahead == ',') ADVANCE(111);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(65);
      if (lookahead == '=') ADVANCE(116);
      if (lookahead == '[') ADVANCE(137);
      if (lookahead == ']') ADVANCE(138);
      if (lookahead == 'h') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == 's') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_priority);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_init);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_init);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_proctype);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_proctype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'a') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'a') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'c') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'c') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'd') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'd') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'f') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'h') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'i') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'i') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'i') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'k') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'l') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'l') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'l') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'n') ADVANCE(82);
      if (lookahead == 's') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'n') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'n') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'o') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'o') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'o') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'p') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'r') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'r') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'r') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 's') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 's') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 's') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 't') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'w') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'y') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_unless);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_unless);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_printf);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_printf);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(127);
      if (lookahead == '"') ADVANCE(146);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '*') ADVANCE(124);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '/') ADVANCE(127);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead != 0) ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(123);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(125);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_break);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_break);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_show);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_show);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_islocal);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_islocal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_Expr);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(117);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 59},
  [2] = {.lex_state = 59},
  [3] = {.lex_state = 59},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 59},
  [8] = {.lex_state = 59},
  [9] = {.lex_state = 59},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 59},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 59},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 59},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 59},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 59},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 59},
  [30] = {.lex_state = 59},
  [31] = {.lex_state = 59},
  [32] = {.lex_state = 59},
  [33] = {.lex_state = 59},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 59},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 59},
  [47] = {.lex_state = 59},
  [48] = {.lex_state = 59},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 7},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 7},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 126},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_priority] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_init] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [anon_sym_proctype] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_unless] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_printf] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_show] = ACTIONS(1),
    [anon_sym_islocal] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_Expr] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(104),
    [sym__unit] = STATE(3),
    [sym_init] = STATE(3),
    [sym__semi] = STATE(3),
    [sym_proc] = STATE(3),
    [sym_vis] = STATE(101),
    [sym_one_decl] = STATE(3),
    [sym_varref] = STATE(108),
    [sym_cmpnd] = STATE(85),
    [sym__name] = STATE(83),
    [sym_pfld] = STATE(84),
    [sym_type] = STATE(70),
    [sym_expr] = STATE(65),
    [sym_factor] = STATE(9),
    [sym_term] = STATE(9),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_init] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [sym_arrow] = ACTIONS(9),
    [anon_sym_proctype] = ACTIONS(11),
    [aux_sym_proc_token1] = ACTIONS(13),
    [anon_sym_hidden] = ACTIONS(15),
    [anon_sym_show] = ACTIONS(15),
    [anon_sym_islocal] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(17),
    [sym_number] = ACTIONS(19),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_init,
    ACTIONS(29), 1,
      anon_sym_proctype,
    ACTIONS(32), 1,
      aux_sym_proc_token1,
    ACTIONS(41), 1,
      sym_number,
    STATE(65), 1,
      sym_expr,
    STATE(70), 1,
      sym_type,
    STATE(83), 1,
      sym__name,
    STATE(84), 1,
      sym_pfld,
    STATE(85), 1,
      sym_cmpnd,
    STATE(101), 1,
      sym_vis,
    STATE(108), 1,
      sym_varref,
    ACTIONS(26), 2,
      anon_sym_SEMI,
      sym_arrow,
    ACTIONS(38), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    STATE(9), 2,
      sym_factor,
      sym_term,
    ACTIONS(35), 3,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
    STATE(2), 6,
      sym__unit,
      sym_init,
      sym__semi,
      sym_proc,
      sym_one_decl,
      aux_sym_program_repeat1,
  [65] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_init,
    ACTIONS(11), 1,
      anon_sym_proctype,
    ACTIONS(13), 1,
      aux_sym_proc_token1,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    STATE(65), 1,
      sym_expr,
    STATE(70), 1,
      sym_type,
    STATE(83), 1,
      sym__name,
    STATE(84), 1,
      sym_pfld,
    STATE(85), 1,
      sym_cmpnd,
    STATE(101), 1,
      sym_vis,
    STATE(108), 1,
      sym_varref,
    ACTIONS(17), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(46), 2,
      anon_sym_SEMI,
      sym_arrow,
    STATE(9), 2,
      sym_factor,
      sym_term,
    ACTIONS(15), 3,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
    STATE(2), 6,
      sym__unit,
      sym_init,
      sym__semi,
      sym_proc,
      sym_one_decl,
      aux_sym_program_repeat1,
  [130] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_proc_token1,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(50), 1,
      anon_sym_printf,
    ACTIONS(52), 1,
      anon_sym_break,
    STATE(5), 1,
      aux_sym_body_repeat1,
    STATE(28), 1,
      sym_printf,
    STATE(35), 1,
      sym_step,
    STATE(36), 1,
      sym_stmnt,
    STATE(57), 1,
      sym_one_decl,
    STATE(65), 1,
      sym_expr,
    STATE(79), 1,
      sym_type,
    STATE(83), 1,
      sym__name,
    STATE(84), 1,
      sym_pfld,
    STATE(85), 1,
      sym_cmpnd,
    STATE(86), 1,
      sym_varref,
    STATE(93), 1,
      sym_vis,
    ACTIONS(17), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    STATE(9), 2,
      sym_factor,
      sym_term,
    STATE(37), 2,
      sym_Stmnt,
      sym_Special,
    ACTIONS(15), 3,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
  [202] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      aux_sym_proc_token1,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      anon_sym_printf,
    ACTIONS(62), 1,
      anon_sym_break,
    ACTIONS(71), 1,
      sym_number,
    STATE(5), 1,
      aux_sym_body_repeat1,
    STATE(28), 1,
      sym_printf,
    STATE(35), 1,
      sym_step,
    STATE(36), 1,
      sym_stmnt,
    STATE(57), 1,
      sym_one_decl,
    STATE(65), 1,
      sym_expr,
    STATE(79), 1,
      sym_type,
    STATE(83), 1,
      sym__name,
    STATE(84), 1,
      sym_pfld,
    STATE(85), 1,
      sym_cmpnd,
    STATE(86), 1,
      sym_varref,
    STATE(93), 1,
      sym_vis,
    ACTIONS(68), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    STATE(9), 2,
      sym_factor,
      sym_term,
    STATE(37), 2,
      sym_Stmnt,
      sym_Special,
    ACTIONS(65), 3,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
  [274] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_proc_token1,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(50), 1,
      anon_sym_printf,
    ACTIONS(52), 1,
      anon_sym_break,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_body_repeat1,
    STATE(28), 1,
      sym_printf,
    STATE(35), 1,
      sym_step,
    STATE(36), 1,
      sym_stmnt,
    STATE(57), 1,
      sym_one_decl,
    STATE(65), 1,
      sym_expr,
    STATE(79), 1,
      sym_type,
    STATE(83), 1,
      sym__name,
    STATE(84), 1,
      sym_pfld,
    STATE(85), 1,
      sym_cmpnd,
    STATE(86), 1,
      sym_varref,
    STATE(93), 1,
      sym_vis,
    ACTIONS(17), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    STATE(9), 2,
      sym_factor,
      sym_term,
    STATE(37), 2,
      sym_Stmnt,
      sym_Special,
    ACTIONS(15), 3,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
  [346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_STAR,
    ACTIONS(78), 8,
      anon_sym_init,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
      anon_sym_PLUS,
    ACTIONS(76), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 8,
      anon_sym_init,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
      anon_sym_PLUS,
    ACTIONS(82), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
  [402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 8,
      anon_sym_init,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
      anon_sym_PLUS,
    ACTIONS(86), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
  [429] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      sym_number,
    ACTIONS(90), 1,
      aux_sym_proc_token1,
    ACTIONS(92), 1,
      anon_sym_printf,
    ACTIONS(94), 1,
      anon_sym_break,
    STATE(53), 1,
      sym_printf,
    STATE(58), 1,
      sym_stmnt,
    STATE(65), 1,
      sym_expr,
    STATE(82), 1,
      sym_varref,
    STATE(83), 1,
      sym__name,
    STATE(84), 1,
      sym_pfld,
    STATE(85), 1,
      sym_cmpnd,
    ACTIONS(17), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    STATE(9), 2,
      sym_factor,
      sym_term,
    STATE(49), 2,
      sym_Stmnt,
      sym_Special,
  [478] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(16), 1,
      aux_sym_var_list_repeat1,
    ACTIONS(96), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(98), 7,
      anon_sym_init,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [504] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(84), 8,
      aux_sym_proc_token1,
      anon_sym_unless,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [526] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_STAR,
    ACTIONS(108), 1,
      anon_sym_PLUS,
    ACTIONS(102), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(104), 8,
      aux_sym_proc_token1,
      anon_sym_unless,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [552] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_STAR,
    ACTIONS(110), 1,
      anon_sym_PLUS,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(104), 7,
      anon_sym_init,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(88), 8,
      aux_sym_proc_token1,
      anon_sym_unless,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [600] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_var_list_repeat1,
    ACTIONS(112), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(114), 7,
      anon_sym_init,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      anon_sym_STAR,
    ACTIONS(76), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
    ACTIONS(78), 8,
      aux_sym_proc_token1,
      anon_sym_unless,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [650] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_var_list_repeat1,
    ACTIONS(116), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(118), 7,
      anon_sym_init,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [676] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_var_list_repeat1,
    ACTIONS(116), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(118), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [701] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_var_list_repeat1,
    ACTIONS(112), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(114), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [726] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_var_list_repeat1,
    ACTIONS(96), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(98), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [751] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(84), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [772] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_STAR,
    ACTIONS(130), 1,
      anon_sym_PLUS,
    ACTIONS(102), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(104), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(88), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [818] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_STAR,
    ACTIONS(76), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
    ACTIONS(78), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [841] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(118), 7,
      anon_sym_init,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(118), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [882] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(134), 8,
      aux_sym_proc_token1,
      anon_sym_unless,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(138), 7,
      anon_sym_init,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(142), 7,
      anon_sym_init,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(146), 7,
      anon_sym_init,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(150), 7,
      anon_sym_init,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(154), 7,
      anon_sym_init,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1002] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(158), 8,
      aux_sym_proc_token1,
      anon_sym_unless,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1022] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      aux_sym__ms,
    ACTIONS(164), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(162), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1046] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_unless,
    ACTIONS(166), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(168), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1068] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(174), 8,
      aux_sym_proc_token1,
      anon_sym_unless,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1088] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      aux_sym__ms,
    ACTIONS(181), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(179), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(185), 8,
      aux_sym_proc_token1,
      anon_sym_unless,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(104), 8,
      aux_sym_proc_token1,
      anon_sym_unless,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1152] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_unless,
    ACTIONS(187), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(190), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1174] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(197), 7,
      anon_sym_init,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1194] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      aux_sym__ms,
    ACTIONS(57), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(201), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1218] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(205), 8,
      aux_sym_proc_token1,
      anon_sym_unless,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(209), 8,
      aux_sym_proc_token1,
      anon_sym_unless,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(213), 7,
      anon_sym_init,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1278] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(104), 7,
      anon_sym_init,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(217), 7,
      anon_sym_init,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1318] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(174), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(205), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(138), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(158), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(134), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(213), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(104), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(193), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1470] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(168), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(223), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1508] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(209), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(142), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1546] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(185), 7,
      aux_sym_proc_token1,
      anon_sym_printf,
      anon_sym_break,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [1565] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_Expr,
    ACTIONS(227), 1,
      sym_number,
    STATE(13), 1,
      sym_expr,
    STATE(41), 1,
      sym_full_expr,
    STATE(15), 2,
      sym_factor,
      sym_term,
  [1585] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_Expr,
    ACTIONS(231), 1,
      sym_number,
    STATE(23), 1,
      sym_expr,
    STATE(56), 1,
      sym_full_expr,
    STATE(24), 2,
      sym_factor,
      sym_term,
  [1605] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_Expr,
    ACTIONS(235), 1,
      sym_number,
    STATE(14), 1,
      sym_expr,
    STATE(46), 1,
      sym_full_expr,
    STATE(9), 2,
      sym_factor,
      sym_term,
  [1625] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_STAR,
    ACTIONS(239), 1,
      anon_sym_PLUS,
    ACTIONS(237), 3,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [1640] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_number,
    STATE(75), 1,
      sym_expr,
    STATE(115), 1,
      sym_arg,
    STATE(9), 2,
      sym_factor,
      sym_term,
  [1657] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 2,
      aux_sym_proc_token1,
      anon_sym_COLON,
    ACTIONS(243), 3,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [1670] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_number,
    STATE(75), 1,
      sym_expr,
    STATE(117), 1,
      sym_arg,
    STATE(9), 2,
      sym_factor,
      sym_term,
  [1687] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_number,
    STATE(75), 1,
      sym_expr,
    STATE(116), 1,
      sym_arg,
    STATE(9), 2,
      sym_factor,
      sym_term,
  [1704] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_proc_token1,
    ACTIONS(247), 1,
      anon_sym_COLON,
    STATE(29), 1,
      sym_var_list,
    STATE(88), 1,
      sym_osubt,
  [1720] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_proc_token1,
    ACTIONS(247), 1,
      anon_sym_COLON,
    STATE(46), 1,
      sym_var_list,
    STATE(97), 1,
      sym_osubt,
  [1736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_number,
    STATE(22), 1,
      sym_expr,
    STATE(24), 2,
      sym_factor,
      sym_term,
  [1750] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_number,
    STATE(7), 1,
      sym_expr,
    STATE(9), 2,
      sym_factor,
      sym_term,
  [1764] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym_number,
    STATE(17), 1,
      sym_expr,
    STATE(15), 2,
      sym_factor,
      sym_term,
  [1778] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_STAR,
    ACTIONS(110), 1,
      anon_sym_PLUS,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      anon_sym_RPAREN,
  [1794] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_priority,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_body,
    STATE(87), 1,
      sym_priority,
  [1810] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_number,
    STATE(25), 1,
      sym_expr,
    STATE(24), 2,
      sym_factor,
      sym_term,
  [1824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_number,
    STATE(8), 1,
      sym_expr,
    STATE(9), 2,
      sym_factor,
      sym_term,
  [1838] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_COLON,
    ACTIONS(257), 1,
      aux_sym_proc_token1,
    STATE(51), 1,
      sym_var_list,
    STATE(102), 1,
      sym_osubt,
  [1854] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_COLON,
    ACTIONS(257), 1,
      aux_sym_proc_token1,
    STATE(54), 1,
      sym_var_list,
    STATE(92), 1,
      sym_osubt,
  [1870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym_number,
    STATE(12), 1,
      sym_expr,
    STATE(15), 2,
      sym_factor,
      sym_term,
  [1884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_EQ,
    ACTIONS(261), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [1895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 3,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [1904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 3,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [1913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 3,
      anon_sym_EQ,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [1922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_EQ,
    ACTIONS(269), 2,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
  [1933] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_body,
  [1943] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_proc_token1,
    STATE(46), 1,
      sym_var_list,
  [1953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_body,
  [1963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      sym_string,
  [1973] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_decl,
  [1983] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym_proc_token1,
    STATE(60), 1,
      sym_var_list,
  [1993] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      aux_sym_proc_token1,
    STATE(80), 1,
      sym_type,
  [2003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 2,
      aux_sym_proc_token1,
      anon_sym_COLON,
  [2011] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
  [2021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2029] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      aux_sym_proc_token1,
    STATE(30), 1,
      sym_var_list,
  [2039] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    STATE(100), 1,
      sym_string,
  [2049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      aux_sym_proc_token1,
    STATE(110), 1,
      sym__name,
  [2059] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
  [2069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      aux_sym_proc_token1,
    STATE(71), 1,
      sym_type,
  [2079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      aux_sym_proc_token1,
    STATE(54), 1,
      sym_var_list,
  [2089] = 2,
    ACTIONS(289), 1,
      aux_sym_string_token1,
    ACTIONS(291), 1,
      sym_comment,
  [2096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
  [2103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
  [2110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_LBRACE,
  [2117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_LPAREN,
  [2124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_EQ,
  [2131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      aux_sym_proc_token1,
  [2138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      aux_sym_proc_token1,
  [2145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 1,
      aux_sym_proc_token1,
  [2152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      aux_sym_proc_token1,
  [2159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 1,
      anon_sym_DQUOTE,
  [2166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      aux_sym_proc_token1,
  [2173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
  [2180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
  [2187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
  [2194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_const,
  [2201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_RPAREN,
  [2208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 65,
  [SMALL_STATE(4)] = 130,
  [SMALL_STATE(5)] = 202,
  [SMALL_STATE(6)] = 274,
  [SMALL_STATE(7)] = 346,
  [SMALL_STATE(8)] = 375,
  [SMALL_STATE(9)] = 402,
  [SMALL_STATE(10)] = 429,
  [SMALL_STATE(11)] = 478,
  [SMALL_STATE(12)] = 504,
  [SMALL_STATE(13)] = 526,
  [SMALL_STATE(14)] = 552,
  [SMALL_STATE(15)] = 578,
  [SMALL_STATE(16)] = 600,
  [SMALL_STATE(17)] = 626,
  [SMALL_STATE(18)] = 650,
  [SMALL_STATE(19)] = 676,
  [SMALL_STATE(20)] = 701,
  [SMALL_STATE(21)] = 726,
  [SMALL_STATE(22)] = 751,
  [SMALL_STATE(23)] = 772,
  [SMALL_STATE(24)] = 797,
  [SMALL_STATE(25)] = 818,
  [SMALL_STATE(26)] = 841,
  [SMALL_STATE(27)] = 862,
  [SMALL_STATE(28)] = 882,
  [SMALL_STATE(29)] = 902,
  [SMALL_STATE(30)] = 922,
  [SMALL_STATE(31)] = 942,
  [SMALL_STATE(32)] = 962,
  [SMALL_STATE(33)] = 982,
  [SMALL_STATE(34)] = 1002,
  [SMALL_STATE(35)] = 1022,
  [SMALL_STATE(36)] = 1046,
  [SMALL_STATE(37)] = 1068,
  [SMALL_STATE(38)] = 1088,
  [SMALL_STATE(39)] = 1112,
  [SMALL_STATE(40)] = 1132,
  [SMALL_STATE(41)] = 1152,
  [SMALL_STATE(42)] = 1174,
  [SMALL_STATE(43)] = 1194,
  [SMALL_STATE(44)] = 1218,
  [SMALL_STATE(45)] = 1238,
  [SMALL_STATE(46)] = 1258,
  [SMALL_STATE(47)] = 1278,
  [SMALL_STATE(48)] = 1298,
  [SMALL_STATE(49)] = 1318,
  [SMALL_STATE(50)] = 1337,
  [SMALL_STATE(51)] = 1356,
  [SMALL_STATE(52)] = 1375,
  [SMALL_STATE(53)] = 1394,
  [SMALL_STATE(54)] = 1413,
  [SMALL_STATE(55)] = 1432,
  [SMALL_STATE(56)] = 1451,
  [SMALL_STATE(57)] = 1470,
  [SMALL_STATE(58)] = 1489,
  [SMALL_STATE(59)] = 1508,
  [SMALL_STATE(60)] = 1527,
  [SMALL_STATE(61)] = 1546,
  [SMALL_STATE(62)] = 1565,
  [SMALL_STATE(63)] = 1585,
  [SMALL_STATE(64)] = 1605,
  [SMALL_STATE(65)] = 1625,
  [SMALL_STATE(66)] = 1640,
  [SMALL_STATE(67)] = 1657,
  [SMALL_STATE(68)] = 1670,
  [SMALL_STATE(69)] = 1687,
  [SMALL_STATE(70)] = 1704,
  [SMALL_STATE(71)] = 1720,
  [SMALL_STATE(72)] = 1736,
  [SMALL_STATE(73)] = 1750,
  [SMALL_STATE(74)] = 1764,
  [SMALL_STATE(75)] = 1778,
  [SMALL_STATE(76)] = 1794,
  [SMALL_STATE(77)] = 1810,
  [SMALL_STATE(78)] = 1824,
  [SMALL_STATE(79)] = 1838,
  [SMALL_STATE(80)] = 1854,
  [SMALL_STATE(81)] = 1870,
  [SMALL_STATE(82)] = 1884,
  [SMALL_STATE(83)] = 1895,
  [SMALL_STATE(84)] = 1904,
  [SMALL_STATE(85)] = 1913,
  [SMALL_STATE(86)] = 1922,
  [SMALL_STATE(87)] = 1933,
  [SMALL_STATE(88)] = 1943,
  [SMALL_STATE(89)] = 1953,
  [SMALL_STATE(90)] = 1963,
  [SMALL_STATE(91)] = 1973,
  [SMALL_STATE(92)] = 1983,
  [SMALL_STATE(93)] = 1993,
  [SMALL_STATE(94)] = 2003,
  [SMALL_STATE(95)] = 2011,
  [SMALL_STATE(96)] = 2021,
  [SMALL_STATE(97)] = 2029,
  [SMALL_STATE(98)] = 2039,
  [SMALL_STATE(99)] = 2049,
  [SMALL_STATE(100)] = 2059,
  [SMALL_STATE(101)] = 2069,
  [SMALL_STATE(102)] = 2079,
  [SMALL_STATE(103)] = 2089,
  [SMALL_STATE(104)] = 2096,
  [SMALL_STATE(105)] = 2103,
  [SMALL_STATE(106)] = 2110,
  [SMALL_STATE(107)] = 2117,
  [SMALL_STATE(108)] = 2124,
  [SMALL_STATE(109)] = 2131,
  [SMALL_STATE(110)] = 2138,
  [SMALL_STATE(111)] = 2145,
  [SMALL_STATE(112)] = 2152,
  [SMALL_STATE(113)] = 2159,
  [SMALL_STATE(114)] = 2166,
  [SMALL_STATE(115)] = 2173,
  [SMALL_STATE(116)] = 2180,
  [SMALL_STATE(117)] = 2187,
  [SMALL_STATE(118)] = 2194,
  [SMALL_STATE(119)] = 2201,
  [SMALL_STATE(120)] = 2208,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(76),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(111),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(67),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(109),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(83),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(9),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(67),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(107),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(34),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(109),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(83),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(9),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factor, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_factor, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_list, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_list, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expr, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expr, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_list, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_list, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_list_repeat1, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_list_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_list_repeat1, 2), SHIFT_REPEAT(112),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_list_repeat1, 2), SHIFT_REPEAT(114),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Stmnt, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Stmnt, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_decl, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_decl, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_decl, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_decl, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Special, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Special, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 1),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmnt, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stmnt, 1),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ms, 2), SHIFT_REPEAT(38),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ms, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ms, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Stmnt, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Stmnt, 2),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_Stmnt, 3), REDUCE(sym_one_decl, 3),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_Stmnt, 3), REDUCE(sym_one_decl, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Stmnt, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init, 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printf, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_printf, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_printf, 6),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_printf, 6),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_decl, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_decl, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_init, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_init, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Stmnt, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pfld, 1),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 1),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmpnd, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varref, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [293] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_priority, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vis, 1),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_osubt, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arg, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_promela(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
