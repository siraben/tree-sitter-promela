#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_proctype = 1,
  aux_sym_proc_token1 = 2,
  anon_sym_LBRACE = 3,
  anon_sym_SEMI = 4,
  anon_sym_RBRACE = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_hidden = 8,
  anon_sym_show = 9,
  anon_sym_islocal = 10,
  anon_sym_EQ = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_DOT = 14,
  anon_sym_COMMA = 15,
  sym_Expr = 16,
  sym_number = 17,
  anon_sym_STAR = 18,
  anon_sym_PLUS = 19,
  sym_comment = 20,
  sym_program = 21,
  sym__unit = 22,
  sym_proc = 23,
  sym_body = 24,
  sym_decl = 25,
  sym_step = 26,
  sym_vis = 27,
  sym_one_decl = 28,
  sym_full_expr = 29,
  sym_varref = 30,
  sym_cmpnd = 31,
  sym__name = 32,
  sym_pfld = 33,
  sym_type = 34,
  sym_var_list = 35,
  sym_expr = 36,
  sym_factor = 37,
  sym_term = 38,
  aux_sym_program_repeat1 = 39,
  aux_sym_body_repeat1 = 40,
  aux_sym_var_list_repeat1 = 41,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_proctype] = "proctype",
  [aux_sym_proc_token1] = "proc_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_SEMI] = ";",
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
  [sym_proc] = "proc",
  [sym_body] = "body",
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
  [anon_sym_proctype] = anon_sym_proctype,
  [aux_sym_proc_token1] = aux_sym_proc_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [sym_proc] = sym_proc,
  [sym_body] = sym_body,
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
  [anon_sym_SEMI] = {
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
  [sym_proc] = {
    .visible = true,
    .named = true,
  },
  [sym_body] = {
    .visible = true,
    .named = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == 'E') ADVANCE(28);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == ']') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(25);
      if (lookahead == 'p') ADVANCE(23);
      if (lookahead == 's') ADVANCE(13);
      if (lookahead == '{') ADVANCE(57);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 1:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead == '/') ADVANCE(78);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == ']') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == '}') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(77);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'w') ADVANCE(64);
      END_STATE();
    case 28:
      if (lookahead == 'x') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '*') ADVANCE(75);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead == '[') ADVANCE(69);
      if (lookahead == ']') ADVANCE(70);
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 's') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_proctype);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_proctype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'a') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'c') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'c') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'd') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'd') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'h') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'i') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'l') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'l') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'n') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'o') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'o') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'o') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'p') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'r') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 's') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 't') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'w') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (lookahead == 'y') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_proc_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_hidden);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_show);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_show);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_islocal);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_islocal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_Expr);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(78);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 30},
  [14] = {.lex_state = 30},
  [15] = {.lex_state = 30},
  [16] = {.lex_state = 30},
  [17] = {.lex_state = 30},
  [18] = {.lex_state = 30},
  [19] = {.lex_state = 30},
  [20] = {.lex_state = 30},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_proctype] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [sym_program] = STATE(42),
    [sym__unit] = STATE(3),
    [sym_proc] = STATE(3),
    [sym_vis] = STATE(26),
    [sym_one_decl] = STATE(3),
    [sym_varref] = STATE(41),
    [sym_cmpnd] = STATE(38),
    [sym__name] = STATE(43),
    [sym_pfld] = STATE(32),
    [sym_type] = STATE(31),
    [sym_expr] = STATE(25),
    [sym_factor] = STATE(8),
    [sym_term] = STATE(8),
    [aux_sym_program_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_proctype] = ACTIONS(7),
    [aux_sym_proc_token1] = ACTIONS(9),
    [anon_sym_hidden] = ACTIONS(11),
    [anon_sym_show] = ACTIONS(11),
    [anon_sym_islocal] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__unit] = STATE(2),
    [sym_proc] = STATE(2),
    [sym_vis] = STATE(26),
    [sym_one_decl] = STATE(2),
    [sym_varref] = STATE(41),
    [sym_cmpnd] = STATE(38),
    [sym__name] = STATE(43),
    [sym_pfld] = STATE(32),
    [sym_type] = STATE(31),
    [sym_expr] = STATE(25),
    [sym_factor] = STATE(8),
    [sym_term] = STATE(8),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_proctype] = ACTIONS(19),
    [aux_sym_proc_token1] = ACTIONS(22),
    [anon_sym_hidden] = ACTIONS(25),
    [anon_sym_show] = ACTIONS(25),
    [anon_sym_islocal] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(28),
    [anon_sym_RBRACK] = ACTIONS(28),
    [sym_number] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__unit] = STATE(2),
    [sym_proc] = STATE(2),
    [sym_vis] = STATE(26),
    [sym_one_decl] = STATE(2),
    [sym_varref] = STATE(41),
    [sym_cmpnd] = STATE(38),
    [sym__name] = STATE(43),
    [sym_pfld] = STATE(32),
    [sym_type] = STATE(31),
    [sym_expr] = STATE(25),
    [sym_factor] = STATE(8),
    [sym_term] = STATE(8),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_proctype] = ACTIONS(7),
    [aux_sym_proc_token1] = ACTIONS(9),
    [anon_sym_hidden] = ACTIONS(11),
    [anon_sym_show] = ACTIONS(11),
    [anon_sym_islocal] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_proc_token1,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_body_repeat1,
    STATE(25), 1,
      sym_expr,
    STATE(26), 1,
      sym_vis,
    STATE(31), 1,
      sym_type,
    STATE(32), 1,
      sym_pfld,
    STATE(38), 1,
      sym_cmpnd,
    STATE(39), 1,
      sym_step,
    STATE(40), 1,
      sym_one_decl,
    STATE(41), 1,
      sym_varref,
    STATE(43), 1,
      sym__name,
    ACTIONS(13), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    STATE(8), 2,
      sym_factor,
      sym_term,
    ACTIONS(11), 3,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
  [56] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      aux_sym_proc_token1,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      sym_number,
    STATE(5), 1,
      aux_sym_body_repeat1,
    STATE(25), 1,
      sym_expr,
    STATE(26), 1,
      sym_vis,
    STATE(31), 1,
      sym_type,
    STATE(32), 1,
      sym_pfld,
    STATE(38), 1,
      sym_cmpnd,
    STATE(39), 1,
      sym_step,
    STATE(40), 1,
      sym_one_decl,
    STATE(41), 1,
      sym_varref,
    STATE(43), 1,
      sym__name,
    ACTIONS(46), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    STATE(8), 2,
      sym_factor,
      sym_term,
    ACTIONS(43), 3,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
  [112] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_proc_token1,
    ACTIONS(15), 1,
      sym_number,
    ACTIONS(52), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_body_repeat1,
    STATE(25), 1,
      sym_expr,
    STATE(26), 1,
      sym_vis,
    STATE(31), 1,
      sym_type,
    STATE(32), 1,
      sym_pfld,
    STATE(38), 1,
      sym_cmpnd,
    STATE(39), 1,
      sym_step,
    STATE(40), 1,
      sym_one_decl,
    STATE(41), 1,
      sym_varref,
    STATE(43), 1,
      sym__name,
    ACTIONS(13), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    STATE(8), 2,
      sym_factor,
      sym_term,
    ACTIONS(11), 3,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
  [168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_STAR,
    ACTIONS(54), 6,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_PLUS,
    ACTIONS(56), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
    ACTIONS(60), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
    ACTIONS(64), 7,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [233] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_var_list_repeat1,
    ACTIONS(68), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(70), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [257] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_var_list_repeat1,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(77), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [281] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_var_list_repeat1,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(83), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [305] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_STAR,
    ACTIONS(89), 1,
      anon_sym_PLUS,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(87), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 5,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(70), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [348] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(93), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [366] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(97), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [384] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(87), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(101), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(105), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(109), 6,
      anon_sym_proctype,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
    ACTIONS(111), 5,
      aux_sym_proc_token1,
      anon_sym_hidden,
      anon_sym_show,
      anon_sym_islocal,
      sym_number,
  [469] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_Expr,
    ACTIONS(115), 1,
      sym_number,
    STATE(13), 1,
      sym_expr,
    STATE(16), 1,
      sym_full_expr,
    STATE(8), 2,
      sym_factor,
      sym_term,
  [489] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_number,
    STATE(9), 1,
      sym_expr,
    STATE(8), 2,
      sym_factor,
      sym_term,
  [503] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_number,
    STATE(7), 1,
      sym_expr,
    STATE(8), 2,
      sym_factor,
      sym_term,
  [517] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_STAR,
    ACTIONS(89), 1,
      anon_sym_PLUS,
    ACTIONS(117), 1,
      anon_sym_EQ,
  [530] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_proc_token1,
    STATE(27), 1,
      sym_type,
  [540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_proc_token1,
    STATE(16), 1,
      sym_var_list,
  [550] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_body,
  [560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_proc_token1,
    ACTIONS(127), 1,
      anon_sym_EQ,
  [570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_decl,
  [580] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_proc_token1,
    STATE(15), 1,
      sym_var_list,
  [590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_EQ,
  [597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_LBRACE,
  [604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      aux_sym_proc_token1,
  [611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
  [618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_proc_token1,
  [625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_proc_token1,
  [632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_EQ,
  [639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_SEMI,
  [646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_SEMI,
  [653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_EQ,
  [660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
  [667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_EQ,
  [674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_proc_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 56,
  [SMALL_STATE(6)] = 112,
  [SMALL_STATE(7)] = 168,
  [SMALL_STATE(8)] = 191,
  [SMALL_STATE(9)] = 212,
  [SMALL_STATE(10)] = 233,
  [SMALL_STATE(11)] = 257,
  [SMALL_STATE(12)] = 281,
  [SMALL_STATE(13)] = 305,
  [SMALL_STATE(14)] = 329,
  [SMALL_STATE(15)] = 348,
  [SMALL_STATE(16)] = 366,
  [SMALL_STATE(17)] = 384,
  [SMALL_STATE(18)] = 402,
  [SMALL_STATE(19)] = 419,
  [SMALL_STATE(20)] = 436,
  [SMALL_STATE(21)] = 453,
  [SMALL_STATE(22)] = 469,
  [SMALL_STATE(23)] = 489,
  [SMALL_STATE(24)] = 503,
  [SMALL_STATE(25)] = 517,
  [SMALL_STATE(26)] = 530,
  [SMALL_STATE(27)] = 540,
  [SMALL_STATE(28)] = 550,
  [SMALL_STATE(29)] = 560,
  [SMALL_STATE(30)] = 570,
  [SMALL_STATE(31)] = 580,
  [SMALL_STATE(32)] = 590,
  [SMALL_STATE(33)] = 597,
  [SMALL_STATE(34)] = 604,
  [SMALL_STATE(35)] = 611,
  [SMALL_STATE(36)] = 618,
  [SMALL_STATE(37)] = 625,
  [SMALL_STATE(38)] = 632,
  [SMALL_STATE(39)] = 639,
  [SMALL_STATE(40)] = 646,
  [SMALL_STATE(41)] = 653,
  [SMALL_STATE(42)] = 660,
  [SMALL_STATE(43)] = 667,
  [SMALL_STATE(44)] = 674,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(36),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(29),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(44),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(43),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(8),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(29),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(44),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(43),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2), SHIFT_REPEAT(8),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 3),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_term, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_factor, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_factor, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_var_list_repeat1, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_list_repeat1, 2),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_list_repeat1, 2), SHIFT_REPEAT(34),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_list, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_list, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_list, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var_list, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_expr, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_full_expr, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_decl, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_decl, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_decl, 3),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_decl, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc, 4),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_body_repeat1, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pfld, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmpnd, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_varref, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [149] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vis, 1),
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
