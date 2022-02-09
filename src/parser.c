#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_SEMI = 1,
  sym_arrow = 2,
  anon_sym_proctype = 3,
  aux_sym_proc_token1 = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_hidden = 9,
  anon_sym_show = 10,
  anon_sym_islocal = 11,
  anon_sym_EQ = 12,
  anon_sym_LBRACK = 13,
  anon_sym_RBRACK = 14,
  anon_sym_DOT = 15,
  anon_sym_COMMA = 16,
  sym_Expr = 17,
  sym_number = 18,
  anon_sym_STAR = 19,
  anon_sym_PLUS = 20,
  sym_comment = 21,
  sym_program = 22,
  sym__unit = 23,
  sym__semi = 24,
  sym_proc = 25,
  sym_body = 26,
  aux_sym__ms = 27,
  sym_decl = 28,
  sym_step = 29,
  sym_vis = 30,
  sym_one_decl = 31,
  sym_full_expr = 32,
  sym_varref = 33,
  sym_cmpnd = 34,
  sym__name = 35,
  sym_pfld = 36,
  sym_type = 37,
  sym_var_list = 38,
  sym_expr = 39,
  sym_factor = 40,
  sym_term = 41,
  aux_sym_program_repeat1 = 42,
  aux_sym_body_repeat1 = 43,
  aux_sym_var_list_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [sym_arrow] = "arrow",
  [anon_sym_proctype] = "proctype",
  [aux_sym_proc_token1] = "proc_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_hidden] = "hidden",
  [anon_sym_show] = "show",
  [anon_sym_islocal] = "islocal",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [anon_sym_COMMA] = ",",
  [sym_Expr] = "Expr",
  [sym_number] = "number",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__unit] = "_unit",
  [sym__semi] = "_semi",
  [sym_proc] = "proc",
  [sym_body] = "body",
  [aux_sym__ms] = "_ms",
  [sym_decl] = "decl",
  [sym_step] = "step",
  [sym_vis] = "vis",
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
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_arrow] = sym_arrow,
  [anon_sym_proctype] = anon_sym_proctype,
  [aux_sym_proc_token1] = aux_sym_proc_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_hidden] = anon_sym_hidden,
  [anon_sym_show] = anon_sym_show,
  [anon_sym_islocal] = anon_sym_islocal,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_Expr] = sym_Expr,
  [sym_number] = sym_number,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_comment] = sym_comment,
  [sym_program] = sym_program,
  [sym__unit] = sym__unit,
  [sym__semi] = sym__semi,
  [sym_proc] = sym_proc,
  [sym_body] = sym_body,
  [aux_sym__ms] = aux_sym__ms,
  [sym_decl] = sym_decl,
  [sym_step] = sym_step,
  [sym_vis] = sym_vis,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_EQ] = {
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
  [anon_sym_COMMA] = {
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
  [sym_vis] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(63);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == 'E') ADVANCE(29);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead == 's') ADVANCE(14);
      if (lookahead == '{') ADVANCE(60);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(80);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == 'h') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == '}') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(79);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'w') ADVANCE(66);
      END_STATE();
    case 29:
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'y') ADVANCE(23);
      END_STATE();
    case 31:
      if (eof) ADVANCE(32);
      if (lookahead == '*') ADVANCE(77);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '=') ADVANCE(70);
      if (lookahead == '[') ADVANCE(71);
      if (lookahead == ']') ADVANCE(72);
      if (lookahead == 'h') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 's') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_arrow);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_proctype);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_proctype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'a') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'c') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'c') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'd') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'd') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'h') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'i') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'l') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'l') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'n') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'o') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'o') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'o') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'p') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'r') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 's') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 't') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'w') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'y') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_show);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_show);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_islocal);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_islocal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_Expr);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 31},
  [2] = {.lex_state = 31},
  [3] = {.lex_state = 31},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 31},
  [8] = {.lex_state = 31},
  [9] = {.lex_state = 31},
  [10] = {.lex_state = 31},
  [11] = {.lex_state = 31},
  [12] = {.lex_state = 31},
  [13] = {.lex_state = 31},
  [14] = {.lex_state = 31},
  [15] = {.lex_state = 31},
  [16] = {.lex_state = 31},
  [17] = {.lex_state = 31},
  [18] = {.lex_state = 31},
  [19] = {.lex_state = 31},
  [20] = {.lex_state = 31},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_arrow] = ACTIONS(1),
    [anon_sym_proctype] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_hidden] = ACTIONS(1),
    [anon_sym_show] = ACTIONS(1),
    [anon_sym_islocal] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_Expr] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_program] = STATE(43),
    [sym__unit] = STATE(3),
    [sym__semi] = STATE(3),
    [sym_proc] = STATE(3),
    [sym_vis] = STATE(27),
    [sym_one_decl] = STATE(3),
    [sym_varref] = STATE(42),
    [sym_cmpnd] = STATE(41),
    [sym__name] = STATE(44),
    [sym_pfld] = STATE(34),
    [sym_type] = STATE(32),
    [sym_expr] = STATE(26),
    [sym_factor] = STATE(7),
    [sym_term] = STATE(7),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [sym_arrow] = ACTIONS(7),
    [anon_sym_proctype] = ACTIONS(9),
    [aux_sym_proc_token1] = ACTIONS(11),
    [anon_sym_hidden] = ACTIONS(13),
    [anon_sym_show] = ACTIONS(13),
    [anon_sym_islocal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__unit] = STATE(2),
    [sym__semi] = STATE(2),
    [sym_proc] = STATE(2),
    [sym_vis] = STATE(27),
    [sym_one_decl] = STATE(2),
    [sym_varref] = STATE(42),
    [sym_cmpnd] = STATE(41),
    [sym__name] = STATE(44),
    [sym_pfld] = STATE(34),
    [sym_type] = STATE(32),
    [sym_expr] = STATE(26),
    [sym_factor] = STATE(7),
    [sym_term] = STATE(7),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(21),
    [sym_arrow] = ACTIONS(21),
    [anon_sym_proctype] = ACTIONS(24),
    [aux_sym_proc_token1] = ACTIONS(27),
    [anon_sym_hidden] = ACTIONS(30),
    [anon_sym_show] = ACTIONS(30),
    [anon_sym_islocal] = ACTIONS(30),
    [anon_sym_LBRACK] = ACTIONS(33),
    [anon_sym_RBRACK] = ACTIONS(33),
    [sym_number] = ACTIONS(36),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__unit] = STATE(2),
    [sym__semi] = STATE(2),
    [sym_proc] = STATE(2),
    [sym_vis] = STATE(27),
    [sym_one_decl] = STATE(2),
    [sym_varref] = STATE(42),
    [sym_cmpnd] = STATE(41),
    [sym__name] = STATE(44),
    [sym_pfld] = STATE(34),
    [sym_type] = STATE(32),
    [sym_expr] = STATE(26),
    [sym_factor] = STATE(7),
    [sym_term] = STATE(7),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_SEMI] = ACTIONS(41),
    [sym_arrow] = ACTIONS(41),
    [anon_sym_proctype] = ACTIONS(9),
    [aux_sym_proc_token1] = ACTIONS(11),
    [anon_sym_hidden] = ACTIONS(13),
    [anon_sym_show] = ACTIONS(13),
    [anon_sym_islocal] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(15),
    [sym_number] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_proc_token1,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_body_repeat1,
    STATE(26), 1,
      sym_expr,
    STATE(27), 1,
      sym_vis,
    STATE(32), 1,
      sym_type,
    STATE(33), 1,
      sym_step,
    STATE(34), 1,
      sym_pfld,
    STATE(40), 1,
      sym_one_decl,
    STATE(41), 1,
      sym_cmpnd,
    STATE(42), 1,
      sym_varref,
    STATE(44), 1,
      sym__name,
    ACTIONS(15), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    STATE(7), 2,
      sym_factor,
      sym_term,
    ACTIONS(13), 3,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
  [56] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      aux_sym_proc_token1,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 1,
      sym_number,
    STATE(5), 1,
      aux_sym_body_repeat1,
    STATE(26), 1,
      sym_expr,
    STATE(27), 1,
      sym_vis,
    STATE(32), 1,
      sym_type,
    STATE(33), 1,
      sym_step,
    STATE(34), 1,
      sym_pfld,
    STATE(40), 1,
      sym_one_decl,
    STATE(41), 1,
      sym_cmpnd,
    STATE(42), 1,
      sym_varref,
    STATE(44), 1,
      sym__name,
    ACTIONS(53), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    STATE(7), 2,
      sym_factor,
      sym_term,
    ACTIONS(50), 3,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
  [112] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_proc_token1,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_body_repeat1,
    STATE(26), 1,
      sym_expr,
    STATE(27), 1,
      sym_vis,
    STATE(32), 1,
      sym_type,
    STATE(33), 1,
      sym_step,
    STATE(34), 1,
      sym_pfld,
    STATE(40), 1,
      sym_one_decl,
    STATE(41), 1,
      sym_cmpnd,
    STATE(42), 1,
      sym_varref,
    STATE(44), 1,
      sym__name,
    ACTIONS(15), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    STATE(7), 2,
      sym_factor,
      sym_term,
    ACTIONS(13), 3,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
  [168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
    ACTIONS(61), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [190] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(67), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
  [214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
    ACTIONS(71), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [236] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_var_list_repeat1,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(77), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [261] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_var_list_repeat1,
    ACTIONS(81), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(83), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [286] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_var_list_repeat1,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(90), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [311] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(94), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(83), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [356] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(100), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [375] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(104), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [394] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(108), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(112), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(116), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_arrow,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(94), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [470] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      aux_sym__ms,
    ACTIONS(48), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(120), 5,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [492] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      aux_sym__ms,
    ACTIONS(127), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(125), 5,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [514] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_Expr,
    ACTIONS(131), 1,
      sym_number,
    STATE(13), 1,
      sym_expr,
    STATE(19), 1,
      sym_full_expr,
    STATE(7), 2,
      sym_factor,
      sym_term,
  [534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_number,
    STATE(9), 1,
      sym_expr,
    STATE(7), 2,
      sym_factor,
      sym_term,
  [548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_number,
    STATE(8), 1,
      sym_expr,
    STATE(7), 2,
      sym_factor,
      sym_term,
  [562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_STAR,
    ACTIONS(96), 1,
      anon_sym_PLUS,
    ACTIONS(133), 1,
      anon_sym_EQ,
  [575] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      aux_sym_proc_token1,
    STATE(30), 1,
      sym_type,
  [585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_body,
  [595] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_proc_token1,
    ACTIONS(141), 1,
      anon_sym_EQ,
  [605] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_proc_token1,
    STATE(19), 1,
      sym_var_list,
  [615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_decl,
  [625] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      aux_sym_proc_token1,
    STATE(18), 1,
      sym_var_list,
  [635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      aux_sym__ms,
  [645] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_EQ,
  [652] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
  [659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_LBRACE,
  [666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_proc_token1,
  [673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym_proc_token1,
  [680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_proc_token1,
  [687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_SEMI,
  [694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_EQ,
  [701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_EQ,
  [708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
  [715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_EQ,
  [722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_proc_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 168,
  [SMALL_STATE(8)] = 190,
  [SMALL_STATE(9)] = 214,
  [SMALL_STATE(10)] = 236,
  [SMALL_STATE(11)] = 261,
  [SMALL_STATE(12)] = 286,
  [SMALL_STATE(13)] = 311,
  [SMALL_STATE(14)] = 336,
  [SMALL_STATE(15)] = 356,
  [SMALL_STATE(16)] = 375,
  [SMALL_STATE(17)] = 394,
  [SMALL_STATE(18)] = 413,
  [SMALL_STATE(19)] = 432,
  [SMALL_STATE(20)] = 451,
  [SMALL_STATE(21)] = 470,
  [SMALL_STATE(22)] = 492,
  [SMALL_STATE(23)] = 514,
  [SMALL_STATE(24)] = 534,
  [SMALL_STATE(25)] = 548,
  [SMALL_STATE(26)] = 562,
  [SMALL_STATE(27)] = 575,
  [SMALL_STATE(28)] = 585,
  [SMALL_STATE(29)] = 595,
  [SMALL_STATE(30)] = 605,
  [SMALL_STATE(31)] = 615,
  [SMALL_STATE(32)] = 625,
  [SMALL_STATE(33)] = 635,
  [SMALL_STATE(34)] = 645,
  [SMALL_STATE(35)] = 652,
  [SMALL_STATE(36)] = 659,
  [SMALL_STATE(37)] = 666,
  [SMALL_STATE(38)] = 673,
  [SMALL_STATE(39)] = 680,
  [SMALL_STATE(40)] = 687,
  [SMALL_STATE(41)] = 694,
  [SMALL_STATE(42)] = 701,
  [SMALL_STATE(43)] = 708,
  [SMALL_STATE(44)] = 715,
  [SMALL_STATE(45)] = 722,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(38),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(45),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(7),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(29),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(45),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(44),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(7),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factor, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_factor, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_list, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_list, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_list_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_list_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_list_repeat1, 2), SHIFT_REPEAT(37),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_list, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_list, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expr, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expr, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc, 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_decl, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_decl, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_decl, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_decl, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__ms, 2), SHIFT_REPEAT(22),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__ms, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__ms, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pfld, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmpnd, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varref, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [165] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vis, 1),
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
