#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ = 1,
  anon_sym_AT = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_v = 5,
  anon_sym_eq = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  anon_sym_EQ = 9,
  sym_text = 10,
  sym__new_block = 11,
  sym_tag_name = 12,
  sym_attribute_name = 13,
  sym_attribute_value = 14,
  anon_sym_SQUOTE = 15,
  aux_sym__quoted_attribute_value_token1 = 16,
  anon_sym_DQUOTE = 17,
  aux_sym__quoted_attribute_value_token2 = 18,
  sym__verb_no_paren = 19,
  sym_document = 20,
  sym_p = 21,
  sym__node = 22,
  sym_tag = 23,
  sym__verb_node = 24,
  sym_tag_verb = 25,
  sym_attributes = 26,
  sym_attribute = 27,
  sym__quoted_attribute_value = 28,
  aux_sym_document_repeat1 = 29,
  aux_sym_p_repeat1 = 30,
  aux_sym_tag_verb_repeat1 = 31,
  aux_sym_attributes_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_v] = "v",
  [anon_sym_eq] = "eq",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_text] = "text",
  [sym__new_block] = "_new_block",
  [sym_tag_name] = "tag_name",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_attribute_value_token2] = "attribute_value",
  [sym__verb_no_paren] = "_verb_no_paren",
  [sym_document] = "document",
  [sym_p] = "p",
  [sym__node] = "_node",
  [sym_tag] = "tag",
  [sym__verb_node] = "_verb_node",
  [sym_tag_verb] = "tag_verb",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym__quoted_attribute_value] = "_quoted_attribute_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_p_repeat1] = "p_repeat1",
  [aux_sym_tag_verb_repeat1] = "tag_verb_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_v] = anon_sym_v,
  [anon_sym_eq] = anon_sym_eq,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_text] = sym_text,
  [sym__new_block] = sym__new_block,
  [sym_tag_name] = sym_tag_name,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_attribute_value_token2] = sym_attribute_value,
  [sym__verb_no_paren] = sym__verb_no_paren,
  [sym_document] = sym_document,
  [sym_p] = sym_p,
  [sym__node] = sym__node,
  [sym_tag] = sym_tag,
  [sym__verb_node] = sym__verb_node,
  [sym_tag_verb] = sym_tag_verb,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym__quoted_attribute_value] = sym__quoted_attribute_value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_p_repeat1] = aux_sym_p_repeat1,
  [aux_sym_tag_verb_repeat1] = aux_sym_tag_verb_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
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
  [anon_sym_v] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eq] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym__new_block] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_attribute_value_token2] = {
    .visible = true,
    .named = true,
  },
  [sym__verb_no_paren] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_p] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__verb_node] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_verb] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_attribute_value] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_p_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_verb_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
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
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 7,
  [12] = 10,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 15,
  [19] = 16,
  [20] = 17,
  [21] = 21,
  [22] = 21,
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
  [41] = 33,
  [42] = 40,
  [43] = 37,
  [44] = 25,
  [45] = 38,
  [46] = 30,
  [47] = 26,
  [48] = 28,
  [49] = 24,
  [50] = 35,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 34,
  [64] = 58,
  [65] = 57,
  [66] = 59,
  [67] = 67,
};

static inline bool sym_attribute_name_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= '\'' || (c < ']'
      ? (c < '='
        ? c == '/'
        : c <= '=')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_attribute_value_character_set_1(int32_t c) {
  return (c < '\''
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= '\'' || (c < '{'
      ? (c < ']'
        ? c == '='
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == 0) ADVANCE(9);
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '[') ADVANCE(16);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == ']') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(22);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_v);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_eq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(22);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__new_block);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__new_block);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'q') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_tag_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym__quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym__quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__verb_no_paren);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__verb_no_paren);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(40);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 7},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [anon_sym_eq] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(61),
    [sym_p] = STATE(2),
    [sym__node] = STATE(4),
    [sym_tag] = STATE(4),
    [sym_tag_verb] = STATE(4),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_p_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      sym_text,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_p,
      aux_sym_document_repeat1,
    STATE(4), 4,
      sym__node,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [20] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(16), 1,
      sym_text,
    STATE(3), 2,
      sym_p,
      aux_sym_document_repeat1,
    STATE(4), 4,
      sym__node,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [40] = 4,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      sym_text,
    ACTIONS(19), 2,
      anon_sym_,
      sym__new_block,
    STATE(5), 4,
      sym__node,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [57] = 4,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(28), 1,
      sym_text,
    ACTIONS(23), 2,
      anon_sym_,
      sym__new_block,
    STATE(5), 4,
      sym__node,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [74] = 4,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(34), 1,
      sym_text,
    STATE(6), 4,
      sym__node,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [90] = 4,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      sym_text,
    STATE(6), 4,
      sym__node,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [106] = 4,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      sym_text,
    STATE(11), 4,
      sym__node,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [122] = 4,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      sym_text,
    STATE(7), 4,
      sym__node,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [138] = 4,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(6), 4,
      sym__node,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [154] = 4,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(6), 4,
      sym__node,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [170] = 4,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      sym_text,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(6), 4,
      sym__node,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [186] = 4,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      sym_text,
    STATE(10), 4,
      sym__node,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [202] = 4,
    ACTIONS(37), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      sym_text,
    STATE(12), 4,
      sym__node,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [218] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      sym__verb_no_paren,
    STATE(23), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [232] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      sym__verb_no_paren,
    STATE(15), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [246] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      sym__verb_no_paren,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(23), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [260] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      sym__verb_no_paren,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(23), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [274] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 1,
      sym__verb_no_paren,
    STATE(18), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [288] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      sym__verb_no_paren,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(23), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [302] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 1,
      sym__verb_no_paren,
    STATE(17), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [316] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 1,
      sym__verb_no_paren,
    STATE(20), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [330] = 4,
    ACTIONS(85), 1,
      anon_sym_LBRACE,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(90), 1,
      sym__verb_no_paren,
    STATE(23), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [344] = 1,
    ACTIONS(93), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [351] = 1,
    ACTIONS(95), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [358] = 1,
    ACTIONS(97), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [365] = 3,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    ACTIONS(101), 1,
      sym_attribute_name,
    STATE(32), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [376] = 1,
    ACTIONS(103), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [383] = 4,
    ACTIONS(105), 1,
      sym_attribute_value,
    ACTIONS(107), 1,
      anon_sym_SQUOTE,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym__quoted_attribute_value,
  [396] = 1,
    ACTIONS(111), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [403] = 3,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    ACTIONS(115), 1,
      sym_attribute_name,
    STATE(31), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [414] = 3,
    ACTIONS(101), 1,
      sym_attribute_name,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    STATE(31), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [425] = 1,
    ACTIONS(120), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [432] = 2,
    ACTIONS(124), 1,
      sym__verb_no_paren,
    ACTIONS(122), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [440] = 3,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_LBRACK,
    STATE(64), 1,
      sym_attributes,
  [450] = 2,
    ACTIONS(132), 1,
      anon_sym_EQ,
    ACTIONS(130), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [458] = 2,
    ACTIONS(136), 1,
      sym_tag_name,
    ACTIONS(134), 2,
      anon_sym_v,
      anon_sym_eq,
  [466] = 3,
    ACTIONS(128), 1,
      anon_sym_LBRACK,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_attributes,
  [476] = 2,
    ACTIONS(142), 1,
      anon_sym_AT,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      sym_text,
  [484] = 3,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      sym__verb_no_paren,
    STATE(66), 1,
      sym__verb_node,
  [494] = 2,
    ACTIONS(148), 1,
      sym_text,
    ACTIONS(120), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [502] = 3,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      sym__verb_no_paren,
    STATE(59), 1,
      sym__verb_node,
  [512] = 2,
    ACTIONS(154), 1,
      sym_tag_name,
    ACTIONS(152), 2,
      anon_sym_v,
      anon_sym_eq,
  [520] = 2,
    ACTIONS(156), 1,
      sym_text,
    ACTIONS(95), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [528] = 3,
    ACTIONS(128), 1,
      anon_sym_LBRACK,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_attributes,
  [538] = 2,
    ACTIONS(160), 1,
      sym_text,
    ACTIONS(111), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [546] = 2,
    ACTIONS(162), 1,
      sym_text,
    ACTIONS(97), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [554] = 2,
    ACTIONS(164), 1,
      sym_text,
    ACTIONS(103), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [562] = 2,
    ACTIONS(166), 1,
      sym_text,
    ACTIONS(93), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [570] = 3,
    ACTIONS(128), 1,
      anon_sym_LBRACK,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_attributes,
  [580] = 1,
    ACTIONS(170), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [585] = 1,
    ACTIONS(172), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [590] = 2,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    ACTIONS(176), 1,
      aux_sym__quoted_attribute_value_token2,
  [597] = 2,
    ACTIONS(174), 1,
      anon_sym_SQUOTE,
    ACTIONS(178), 1,
      aux_sym__quoted_attribute_value_token1,
  [604] = 1,
    ACTIONS(180), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [609] = 1,
    ACTIONS(182), 1,
      anon_sym_DQUOTE,
  [613] = 1,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
  [617] = 1,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
  [621] = 1,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
  [625] = 1,
    ACTIONS(190), 1,
      anon_sym_LBRACE,
  [629] = 1,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
  [633] = 1,
    ACTIONS(194), 1,
      anon_sym_LBRACE,
  [637] = 1,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
  [641] = 1,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
  [645] = 1,
    ACTIONS(198), 1,
      anon_sym_LBRACE,
  [649] = 1,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
  [653] = 1,
    ACTIONS(182), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 74,
  [SMALL_STATE(7)] = 90,
  [SMALL_STATE(8)] = 106,
  [SMALL_STATE(9)] = 122,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 154,
  [SMALL_STATE(12)] = 170,
  [SMALL_STATE(13)] = 186,
  [SMALL_STATE(14)] = 202,
  [SMALL_STATE(15)] = 218,
  [SMALL_STATE(16)] = 232,
  [SMALL_STATE(17)] = 246,
  [SMALL_STATE(18)] = 260,
  [SMALL_STATE(19)] = 274,
  [SMALL_STATE(20)] = 288,
  [SMALL_STATE(21)] = 302,
  [SMALL_STATE(22)] = 316,
  [SMALL_STATE(23)] = 330,
  [SMALL_STATE(24)] = 344,
  [SMALL_STATE(25)] = 351,
  [SMALL_STATE(26)] = 358,
  [SMALL_STATE(27)] = 365,
  [SMALL_STATE(28)] = 376,
  [SMALL_STATE(29)] = 383,
  [SMALL_STATE(30)] = 396,
  [SMALL_STATE(31)] = 403,
  [SMALL_STATE(32)] = 414,
  [SMALL_STATE(33)] = 425,
  [SMALL_STATE(34)] = 432,
  [SMALL_STATE(35)] = 440,
  [SMALL_STATE(36)] = 450,
  [SMALL_STATE(37)] = 458,
  [SMALL_STATE(38)] = 466,
  [SMALL_STATE(39)] = 476,
  [SMALL_STATE(40)] = 484,
  [SMALL_STATE(41)] = 494,
  [SMALL_STATE(42)] = 502,
  [SMALL_STATE(43)] = 512,
  [SMALL_STATE(44)] = 520,
  [SMALL_STATE(45)] = 528,
  [SMALL_STATE(46)] = 538,
  [SMALL_STATE(47)] = 546,
  [SMALL_STATE(48)] = 554,
  [SMALL_STATE(49)] = 562,
  [SMALL_STATE(50)] = 570,
  [SMALL_STATE(51)] = 580,
  [SMALL_STATE(52)] = 585,
  [SMALL_STATE(53)] = 590,
  [SMALL_STATE(54)] = 597,
  [SMALL_STATE(55)] = 604,
  [SMALL_STATE(56)] = 609,
  [SMALL_STATE(57)] = 613,
  [SMALL_STATE(58)] = 617,
  [SMALL_STATE(59)] = 621,
  [SMALL_STATE(60)] = 625,
  [SMALL_STATE(61)] = 629,
  [SMALL_STATE(62)] = 633,
  [SMALL_STATE(63)] = 637,
  [SMALL_STATE(64)] = 641,
  [SMALL_STATE(65)] = 645,
  [SMALL_STATE(66)] = 649,
  [SMALL_STATE(67)] = 653,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(43),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(43),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(5),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(37),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(6),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_verb_repeat1, 2), SHIFT_REPEAT(40),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_verb_repeat1, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_verb_repeat1, 2), SHIFT_REPEAT(23),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 6),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(36),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__verb_node, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verb_node, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 6),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 5),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_attribute_value, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_attribute_value, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [192] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_disseminate(void) {
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
