#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ = 1,
  anon_sym_AT = 2,
  anon_sym_COLON = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_v = 6,
  anon_sym_eq = 7,
  anon_sym_LBRACK = 8,
  anon_sym_RBRACK = 9,
  anon_sym_EQ = 10,
  sym_text = 11,
  sym__hspace = 12,
  sym__new_block = 13,
  sym_tag_name = 14,
  sym_attribute_name = 15,
  sym_attribute_value = 16,
  anon_sym_SQUOTE = 17,
  aux_sym__quoted_attribute_value_token1 = 18,
  anon_sym_DQUOTE = 19,
  aux_sym__quoted_attribute_value_token2 = 20,
  sym__verb_no_paren = 21,
  sym_document = 22,
  sym_p = 23,
  sym__node = 24,
  sym_var = 25,
  sym_tag = 26,
  sym__verb_node = 27,
  sym_tag_verb = 28,
  sym_attributes = 29,
  sym_attribute = 30,
  sym__quoted_attribute_value = 31,
  aux_sym_document_repeat1 = 32,
  aux_sym_p_repeat1 = 33,
  aux_sym_var_repeat1 = 34,
  aux_sym_tag_verb_repeat1 = 35,
  aux_sym_attributes_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_AT] = "@",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_v] = "v",
  [anon_sym_eq] = "eq",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_text] = "text",
  [sym__hspace] = "_hspace",
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
  [sym_var] = "var",
  [sym_tag] = "tag",
  [sym__verb_node] = "_verb_node",
  [sym_tag_verb] = "tag_verb",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym__quoted_attribute_value] = "_quoted_attribute_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_p_repeat1] = "p_repeat1",
  [aux_sym_var_repeat1] = "var_repeat1",
  [aux_sym_tag_verb_repeat1] = "tag_verb_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_v] = anon_sym_v,
  [anon_sym_eq] = anon_sym_eq,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_text] = sym_text,
  [sym__hspace] = sym__hspace,
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
  [sym_var] = sym_var,
  [sym_tag] = sym_tag,
  [sym__verb_node] = sym__verb_node,
  [sym_tag_verb] = sym_tag_verb,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym__quoted_attribute_value] = sym__quoted_attribute_value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_p_repeat1] = aux_sym_p_repeat1,
  [aux_sym_var_repeat1] = aux_sym_var_repeat1,
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
  [anon_sym_COLON] = {
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
  [sym__hspace] = {
    .visible = false,
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
  [sym_var] = {
    .visible = true,
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
  [aux_sym_var_repeat1] = {
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
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 5,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 12,
  [14] = 6,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 16,
  [19] = 17,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 22,
  [24] = 24,
  [25] = 15,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 21,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 20,
  [36] = 36,
  [37] = 26,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 28,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 44,
  [47] = 42,
  [48] = 32,
  [49] = 39,
  [50] = 38,
  [51] = 51,
  [52] = 29,
  [53] = 51,
  [54] = 36,
  [55] = 55,
  [56] = 56,
  [57] = 55,
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
  [69] = 40,
  [70] = 70,
  [71] = 65,
  [72] = 64,
  [73] = 63,
  [74] = 66,
  [75] = 75,
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
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'v') ADVANCE(15);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == '}') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(23);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_v);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_eq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__hspace);
      if (lookahead == '\f') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__hspace);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__new_block);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__new_block);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_tag_name);
      if (lookahead == 'q') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_tag_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__verb_no_paren);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__verb_no_paren);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(43);
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
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 28},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 28},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
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
    [sym_document] = STATE(70),
    [sym_p] = STATE(2),
    [sym__node] = STATE(4),
    [sym_var] = STATE(4),
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
    STATE(4), 5,
      sym__node,
      sym_var,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [21] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(16), 1,
      sym_text,
    STATE(3), 2,
      sym_p,
      aux_sym_document_repeat1,
    STATE(4), 5,
      sym__node,
      sym_var,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [42] = 4,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      sym_text,
    ACTIONS(19), 2,
      anon_sym_,
      sym__new_block,
    STATE(5), 5,
      sym__node,
      sym_var,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [60] = 4,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(28), 1,
      sym_text,
    ACTIONS(23), 2,
      anon_sym_,
      sym__new_block,
    STATE(5), 5,
      sym__node,
      sym_var,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [78] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      sym_text,
    STATE(12), 5,
      sym__node,
      sym_var,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [95] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      sym_text,
    STATE(9), 5,
      sym__node,
      sym_var,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [112] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      sym_text,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(9), 5,
      sym__node,
      sym_var,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [129] = 4,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(46), 1,
      sym_text,
    STATE(9), 5,
      sym__node,
      sym_var,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [146] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 1,
      sym_text,
    STATE(7), 5,
      sym__node,
      sym_var,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [163] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    ACTIONS(55), 1,
      sym_text,
    STATE(8), 5,
      sym__node,
      sym_var,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [180] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      sym_text,
    ACTIONS(53), 1,
      anon_sym_RBRACE,
    STATE(9), 5,
      sym__node,
      sym_var,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [197] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      sym_text,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(9), 5,
      sym__node,
      sym_var,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [214] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      sym_text,
    STATE(13), 5,
      sym__node,
      sym_var,
      sym_tag,
      sym_tag_verb,
      aux_sym_p_repeat1,
  [231] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(65), 1,
      sym__verb_no_paren,
    STATE(17), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [245] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      sym__verb_no_paren,
    STATE(24), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [259] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__verb_no_paren,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(24), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [273] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__verb_no_paren,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(24), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [287] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      sym__verb_no_paren,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(24), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [301] = 3,
    ACTIONS(79), 1,
      sym_text,
    STATE(20), 1,
      aux_sym_var_repeat1,
    ACTIONS(77), 3,
      anon_sym_,
      anon_sym_AT,
      sym__new_block,
  [313] = 2,
    STATE(20), 1,
      aux_sym_var_repeat1,
    ACTIONS(82), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [323] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(84), 1,
      sym__verb_no_paren,
    STATE(18), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [337] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(86), 1,
      sym__verb_no_paren,
    STATE(16), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [351] = 4,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      sym__verb_no_paren,
    STATE(24), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [365] = 4,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    ACTIONS(98), 1,
      sym__verb_no_paren,
    STATE(19), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [379] = 4,
    ACTIONS(100), 1,
      anon_sym_COLON,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym_attributes,
  [392] = 3,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    ACTIONS(108), 1,
      sym_attribute_name,
    STATE(34), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [403] = 1,
    ACTIONS(110), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [410] = 1,
    ACTIONS(112), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [417] = 3,
    ACTIONS(114), 1,
      sym_text,
    STATE(35), 1,
      aux_sym_var_repeat1,
    ACTIONS(82), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [428] = 4,
    ACTIONS(116), 1,
      sym_attribute_value,
    ACTIONS(118), 1,
      anon_sym_SQUOTE,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
    STATE(61), 1,
      sym__quoted_attribute_value,
  [441] = 1,
    ACTIONS(122), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [448] = 3,
    ACTIONS(124), 1,
      anon_sym_RBRACK,
    ACTIONS(126), 1,
      sym_attribute_name,
    STATE(33), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [459] = 3,
    ACTIONS(108), 1,
      sym_attribute_name,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(33), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [470] = 3,
    ACTIONS(131), 1,
      sym_text,
    STATE(35), 1,
      aux_sym_var_repeat1,
    ACTIONS(77), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [481] = 1,
    ACTIONS(134), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [488] = 4,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      anon_sym_COLON,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_attributes,
  [501] = 1,
    ACTIONS(140), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [508] = 1,
    ACTIONS(142), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [515] = 2,
    ACTIONS(146), 1,
      sym__verb_no_paren,
    ACTIONS(144), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [523] = 2,
    ACTIONS(148), 1,
      sym_text,
    ACTIONS(110), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [531] = 3,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      sym__verb_no_paren,
    STATE(74), 1,
      sym__verb_node,
  [541] = 2,
    ACTIONS(156), 1,
      anon_sym_AT,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      sym_text,
  [549] = 2,
    ACTIONS(160), 1,
      sym_tag_name,
    ACTIONS(158), 2,
      anon_sym_v,
      anon_sym_eq,
  [557] = 2,
    ACTIONS(164), 1,
      anon_sym_EQ,
    ACTIONS(162), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [565] = 2,
    ACTIONS(168), 1,
      sym_tag_name,
    ACTIONS(166), 2,
      anon_sym_v,
      anon_sym_eq,
  [573] = 3,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    ACTIONS(170), 1,
      sym__verb_no_paren,
    STATE(66), 1,
      sym__verb_node,
  [583] = 2,
    ACTIONS(172), 1,
      sym_text,
    ACTIONS(122), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [591] = 2,
    ACTIONS(174), 1,
      sym_text,
    ACTIONS(142), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [599] = 2,
    ACTIONS(176), 1,
      sym_text,
    ACTIONS(140), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [607] = 3,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_attributes,
  [617] = 2,
    ACTIONS(180), 1,
      sym_text,
    ACTIONS(112), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [625] = 3,
    ACTIONS(104), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_attributes,
  [635] = 2,
    ACTIONS(184), 1,
      sym_text,
    ACTIONS(134), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [643] = 2,
    ACTIONS(186), 1,
      sym_text,
    STATE(30), 1,
      aux_sym_var_repeat1,
  [650] = 2,
    ACTIONS(188), 1,
      anon_sym_DQUOTE,
    ACTIONS(190), 1,
      aux_sym__quoted_attribute_value_token2,
  [657] = 2,
    ACTIONS(192), 1,
      sym_text,
    STATE(21), 1,
      aux_sym_var_repeat1,
  [664] = 1,
    ACTIONS(194), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [669] = 1,
    ACTIONS(196), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [674] = 2,
    ACTIONS(188), 1,
      anon_sym_SQUOTE,
    ACTIONS(198), 1,
      aux_sym__quoted_attribute_value_token1,
  [681] = 1,
    ACTIONS(200), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [686] = 1,
    ACTIONS(202), 1,
      anon_sym_LBRACE,
  [690] = 1,
    ACTIONS(204), 1,
      anon_sym_LBRACE,
  [694] = 1,
    ACTIONS(206), 1,
      sym__hspace,
  [698] = 1,
    ACTIONS(208), 1,
      anon_sym_LBRACE,
  [702] = 1,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
  [706] = 1,
    ACTIONS(212), 1,
      anon_sym_SQUOTE,
  [710] = 1,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
  [714] = 1,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
  [718] = 1,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
  [722] = 1,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
  [726] = 1,
    ACTIONS(220), 1,
      sym__hspace,
  [730] = 1,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
  [734] = 1,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
  [738] = 1,
    ACTIONS(212), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 112,
  [SMALL_STATE(9)] = 129,
  [SMALL_STATE(10)] = 146,
  [SMALL_STATE(11)] = 163,
  [SMALL_STATE(12)] = 180,
  [SMALL_STATE(13)] = 197,
  [SMALL_STATE(14)] = 214,
  [SMALL_STATE(15)] = 231,
  [SMALL_STATE(16)] = 245,
  [SMALL_STATE(17)] = 259,
  [SMALL_STATE(18)] = 273,
  [SMALL_STATE(19)] = 287,
  [SMALL_STATE(20)] = 301,
  [SMALL_STATE(21)] = 313,
  [SMALL_STATE(22)] = 323,
  [SMALL_STATE(23)] = 337,
  [SMALL_STATE(24)] = 351,
  [SMALL_STATE(25)] = 365,
  [SMALL_STATE(26)] = 379,
  [SMALL_STATE(27)] = 392,
  [SMALL_STATE(28)] = 403,
  [SMALL_STATE(29)] = 410,
  [SMALL_STATE(30)] = 417,
  [SMALL_STATE(31)] = 428,
  [SMALL_STATE(32)] = 441,
  [SMALL_STATE(33)] = 448,
  [SMALL_STATE(34)] = 459,
  [SMALL_STATE(35)] = 470,
  [SMALL_STATE(36)] = 481,
  [SMALL_STATE(37)] = 488,
  [SMALL_STATE(38)] = 501,
  [SMALL_STATE(39)] = 508,
  [SMALL_STATE(40)] = 515,
  [SMALL_STATE(41)] = 523,
  [SMALL_STATE(42)] = 531,
  [SMALL_STATE(43)] = 541,
  [SMALL_STATE(44)] = 549,
  [SMALL_STATE(45)] = 557,
  [SMALL_STATE(46)] = 565,
  [SMALL_STATE(47)] = 573,
  [SMALL_STATE(48)] = 583,
  [SMALL_STATE(49)] = 591,
  [SMALL_STATE(50)] = 599,
  [SMALL_STATE(51)] = 607,
  [SMALL_STATE(52)] = 617,
  [SMALL_STATE(53)] = 625,
  [SMALL_STATE(54)] = 635,
  [SMALL_STATE(55)] = 643,
  [SMALL_STATE(56)] = 650,
  [SMALL_STATE(57)] = 657,
  [SMALL_STATE(58)] = 664,
  [SMALL_STATE(59)] = 669,
  [SMALL_STATE(60)] = 674,
  [SMALL_STATE(61)] = 681,
  [SMALL_STATE(62)] = 686,
  [SMALL_STATE(63)] = 690,
  [SMALL_STATE(64)] = 694,
  [SMALL_STATE(65)] = 698,
  [SMALL_STATE(66)] = 702,
  [SMALL_STATE(67)] = 706,
  [SMALL_STATE(68)] = 710,
  [SMALL_STATE(69)] = 714,
  [SMALL_STATE(70)] = 718,
  [SMALL_STATE(71)] = 722,
  [SMALL_STATE(72)] = 726,
  [SMALL_STATE(73)] = 730,
  [SMALL_STATE(74)] = 734,
  [SMALL_STATE(75)] = 738,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(44),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(5),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(46),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(9),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_var_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_var_repeat1, 2), SHIFT_REPEAT(20),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var, 5),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_verb_repeat1, 2), SHIFT_REPEAT(42),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_verb_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_verb_repeat1, 2), SHIFT_REPEAT(24),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(45),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_var_repeat1, 2), SHIFT_REPEAT(35),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 6),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__verb_node, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verb_node, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 6),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_attribute_value, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_attribute_value, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [216] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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
