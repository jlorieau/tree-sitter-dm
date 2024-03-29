#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_EQ = 6,
  sym_text = 7,
  sym__new_block = 8,
  anon_sym_AT = 9,
  anon_sym_v = 10,
  anon_sym_eq = 11,
  sym_name = 12,
  sym_attribute_name = 13,
  sym_attribute_value = 14,
  anon_sym_SQUOTE = 15,
  aux_sym__quoted_attribute_value_token1 = 16,
  anon_sym_DQUOTE = 17,
  aux_sym__quoted_attribute_value_token2 = 18,
  sym__verb_no_paren = 19,
  sym_document = 20,
  sym_block = 21,
  sym__node = 22,
  sym_tag = 23,
  sym__verb_node = 24,
  sym_tag_verb = 25,
  sym_macro = 26,
  sym_attributes = 27,
  sym_attribute = 28,
  sym__id = 29,
  sym__id_verb = 30,
  sym__quoted_attribute_value = 31,
  aux_sym_document_repeat1 = 32,
  aux_sym_block_repeat1 = 33,
  aux_sym_tag_verb_repeat1 = 34,
  aux_sym_attributes_repeat1 = 35,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_text] = "text",
  [sym__new_block] = "_new_block",
  [anon_sym_AT] = "@",
  [anon_sym_v] = "v",
  [anon_sym_eq] = "eq",
  [sym_name] = "name",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_attribute_value_token2] = "attribute_value",
  [sym__verb_no_paren] = "_verb_no_paren",
  [sym_document] = "document",
  [sym_block] = "block",
  [sym__node] = "_node",
  [sym_tag] = "tag",
  [sym__verb_node] = "_verb_node",
  [sym_tag_verb] = "tag_verb",
  [sym_macro] = "macro",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym__id] = "_id",
  [sym__id_verb] = "_id_verb",
  [sym__quoted_attribute_value] = "_quoted_attribute_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_tag_verb_repeat1] = "tag_verb_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_text] = sym_text,
  [sym__new_block] = sym__new_block,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_v] = anon_sym_v,
  [anon_sym_eq] = anon_sym_eq,
  [sym_name] = sym_name,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym__quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_attribute_value_token2] = sym_attribute_value,
  [sym__verb_no_paren] = sym__verb_no_paren,
  [sym_document] = sym_document,
  [sym_block] = sym_block,
  [sym__node] = sym__node,
  [sym_tag] = sym_tag,
  [sym__verb_node] = sym__verb_node,
  [sym_tag_verb] = sym_tag_verb,
  [sym_macro] = sym_macro,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym__id] = sym__id,
  [sym__id_verb] = sym__id_verb,
  [sym__quoted_attribute_value] = sym__quoted_attribute_value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_AT] = {
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
  [sym_name] = {
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
  [sym_block] = {
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
  [sym_macro] = {
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
  [sym__id] = {
    .visible = false,
    .named = true,
  },
  [sym__id_verb] = {
    .visible = false,
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
  [aux_sym_block_repeat1] = {
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
  [7] = 5,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 8,
  [13] = 11,
  [14] = 6,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 18,
  [22] = 22,
  [23] = 17,
  [24] = 19,
  [25] = 25,
  [26] = 20,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 32,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 38,
  [42] = 32,
  [43] = 25,
  [44] = 44,
  [45] = 38,
  [46] = 22,
  [47] = 30,
  [48] = 39,
  [49] = 49,
  [50] = 50,
  [51] = 44,
  [52] = 52,
  [53] = 36,
  [54] = 35,
  [55] = 52,
  [56] = 34,
  [57] = 57,
  [58] = 50,
  [59] = 40,
  [60] = 60,
  [61] = 61,
  [62] = 60,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 61,
  [71] = 71,
  [72] = 72,
  [73] = 69,
  [74] = 30,
  [75] = 75,
  [76] = 22,
  [77] = 72,
  [78] = 78,
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
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == ']') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'v') ADVANCE(27);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(19);
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
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == ']') ADVANCE(14);
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
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '@') ADVANCE(26);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(19);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(10);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__new_block);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__new_block);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_v);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_eq);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'q') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_name);
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
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_v] = ACTIONS(1),
    [anon_sym_eq] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(75),
    [sym_block] = STATE(2),
    [sym__node] = STATE(4),
    [sym_tag] = STATE(4),
    [sym_tag_verb] = STATE(4),
    [sym_macro] = STATE(4),
    [sym__id] = STATE(15),
    [sym__id_verb] = STATE(55),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_block_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      sym_text,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym__id,
    STATE(55), 1,
      sym__id_verb,
    STATE(3), 2,
      sym_block,
      aux_sym_document_repeat1,
    STATE(4), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [27] = 7,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      sym_text,
    ACTIONS(16), 1,
      anon_sym_AT,
    STATE(15), 1,
      sym__id,
    STATE(55), 1,
      sym__id_verb,
    STATE(3), 2,
      sym_block,
      aux_sym_document_repeat1,
    STATE(4), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [54] = 6,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      sym_text,
    STATE(15), 1,
      sym__id,
    STATE(55), 1,
      sym__id_verb,
    ACTIONS(19), 2,
      anon_sym_,
      sym__new_block,
    STATE(5), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [78] = 6,
    ACTIONS(25), 1,
      sym_text,
    ACTIONS(28), 1,
      anon_sym_AT,
    STATE(15), 1,
      sym__id,
    STATE(55), 1,
      sym__id_verb,
    ACTIONS(23), 2,
      anon_sym_,
      sym__new_block,
    STATE(5), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [102] = 6,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      sym_text,
    ACTIONS(35), 1,
      anon_sym_AT,
    STATE(16), 1,
      sym__id,
    STATE(52), 1,
      sym__id_verb,
    STATE(8), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [125] = 6,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      sym_text,
    ACTIONS(40), 1,
      anon_sym_AT,
    STATE(16), 1,
      sym__id,
    STATE(52), 1,
      sym__id_verb,
    STATE(7), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [148] = 6,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      sym_text,
    STATE(16), 1,
      sym__id,
    STATE(52), 1,
      sym__id_verb,
    STATE(7), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [171] = 6,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      sym_text,
    STATE(16), 1,
      sym__id,
    STATE(52), 1,
      sym__id_verb,
    STATE(13), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [194] = 6,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      sym_text,
    STATE(16), 1,
      sym__id,
    STATE(52), 1,
      sym__id_verb,
    STATE(11), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [217] = 6,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      sym_text,
    STATE(16), 1,
      sym__id,
    STATE(52), 1,
      sym__id_verb,
    STATE(7), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [240] = 6,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      sym_text,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__id,
    STATE(52), 1,
      sym__id_verb,
    STATE(7), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [263] = 6,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      sym_text,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      sym__id,
    STATE(52), 1,
      sym__id_verb,
    STATE(7), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [286] = 6,
    ACTIONS(35), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      sym_text,
    STATE(16), 1,
      sym__id,
    STATE(52), 1,
      sym__id_verb,
    STATE(12), 5,
      sym__node,
      sym_tag,
      sym_tag_verb,
      sym_macro,
      aux_sym_block_repeat1,
  [309] = 4,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_attributes,
    ACTIONS(61), 4,
      anon_sym_,
      sym_text,
      sym__new_block,
      anon_sym_AT,
  [325] = 5,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      sym_text,
    STATE(43), 1,
      sym_attributes,
    ACTIONS(61), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [342] = 1,
    ACTIONS(73), 6,
      anon_sym_,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      sym_text,
      sym__new_block,
      anon_sym_AT,
  [351] = 4,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      sym__verb_no_paren,
    STATE(28), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [365] = 4,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 1,
      sym__verb_no_paren,
    STATE(26), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [379] = 4,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      sym__verb_no_paren,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [393] = 4,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      sym__verb_no_paren,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [407] = 1,
    ACTIONS(89), 5,
      anon_sym_,
      anon_sym_LBRACE,
      sym_text,
      sym__new_block,
      anon_sym_AT,
  [415] = 2,
    ACTIONS(91), 1,
      sym_text,
    ACTIONS(73), 4,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_AT,
  [425] = 4,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(95), 1,
      sym__verb_no_paren,
    STATE(20), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [439] = 2,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 4,
      anon_sym_,
      sym_text,
      sym__new_block,
      anon_sym_AT,
  [449] = 4,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      sym__verb_no_paren,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(28), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [463] = 4,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 1,
      sym__verb_no_paren,
    STATE(18), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [477] = 4,
    ACTIONS(105), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      sym__verb_no_paren,
    STATE(28), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [491] = 4,
    ACTIONS(75), 1,
      anon_sym_LBRACE,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(113), 1,
      sym__verb_no_paren,
    STATE(21), 2,
      sym__verb_node,
      aux_sym_tag_verb_repeat1,
  [505] = 1,
    ACTIONS(115), 5,
      anon_sym_,
      anon_sym_LBRACE,
      sym_text,
      sym__new_block,
      anon_sym_AT,
  [513] = 3,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    ACTIONS(119), 1,
      sym_attribute_name,
    STATE(31), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [524] = 3,
    ACTIONS(122), 1,
      anon_sym_RBRACK,
    ACTIONS(124), 1,
      sym_attribute_name,
    STATE(31), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [535] = 4,
    ACTIONS(126), 1,
      sym_attribute_value,
    ACTIONS(128), 1,
      anon_sym_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    STATE(66), 1,
      sym__quoted_attribute_value,
  [548] = 1,
    ACTIONS(132), 4,
      anon_sym_,
      sym_text,
      sym__new_block,
      anon_sym_AT,
  [555] = 1,
    ACTIONS(134), 4,
      anon_sym_,
      sym_text,
      sym__new_block,
      anon_sym_AT,
  [562] = 1,
    ACTIONS(136), 4,
      anon_sym_,
      sym_text,
      sym__new_block,
      anon_sym_AT,
  [569] = 3,
    ACTIONS(124), 1,
      sym_attribute_name,
    ACTIONS(138), 1,
      anon_sym_RBRACK,
    STATE(31), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [580] = 3,
    ACTIONS(124), 1,
      sym_attribute_name,
    ACTIONS(140), 1,
      anon_sym_RBRACK,
    STATE(37), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [591] = 1,
    ACTIONS(142), 4,
      anon_sym_,
      sym_text,
      sym__new_block,
      anon_sym_AT,
  [598] = 1,
    ACTIONS(144), 4,
      anon_sym_,
      sym_text,
      sym__new_block,
      anon_sym_AT,
  [605] = 3,
    ACTIONS(124), 1,
      sym_attribute_name,
    ACTIONS(146), 1,
      anon_sym_RBRACK,
    STATE(42), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [616] = 3,
    ACTIONS(124), 1,
      sym_attribute_name,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    STATE(31), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [627] = 3,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      sym_text,
    ACTIONS(97), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [638] = 1,
    ACTIONS(154), 4,
      anon_sym_,
      sym_text,
      sym__new_block,
      anon_sym_AT,
  [645] = 3,
    ACTIONS(124), 1,
      sym_attribute_name,
    ACTIONS(156), 1,
      anon_sym_RBRACK,
    STATE(32), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [656] = 2,
    ACTIONS(158), 1,
      sym_text,
    ACTIONS(89), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
  [665] = 2,
    ACTIONS(160), 1,
      sym_text,
    ACTIONS(115), 3,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
  [674] = 2,
    ACTIONS(162), 1,
      sym_text,
    ACTIONS(142), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [682] = 2,
    ACTIONS(166), 1,
      anon_sym_AT,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      sym_text,
  [690] = 3,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(170), 1,
      sym__verb_no_paren,
    STATE(73), 1,
      sym__verb_node,
  [700] = 2,
    ACTIONS(172), 1,
      sym_text,
    ACTIONS(154), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [708] = 3,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    STATE(77), 1,
      sym_attributes,
  [718] = 2,
    ACTIONS(178), 1,
      sym_text,
    ACTIONS(136), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [726] = 2,
    ACTIONS(180), 1,
      sym_text,
    ACTIONS(134), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [734] = 3,
    ACTIONS(176), 1,
      anon_sym_LBRACK,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_attributes,
  [744] = 2,
    ACTIONS(184), 1,
      sym_text,
    ACTIONS(132), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [752] = 2,
    ACTIONS(188), 1,
      anon_sym_EQ,
    ACTIONS(186), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [760] = 3,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
    ACTIONS(190), 1,
      sym__verb_no_paren,
    STATE(69), 1,
      sym__verb_node,
  [770] = 2,
    ACTIONS(192), 1,
      sym_text,
    ACTIONS(144), 2,
      anon_sym_RBRACE,
      anon_sym_AT,
  [778] = 2,
    ACTIONS(196), 1,
      sym_name,
    ACTIONS(194), 2,
      anon_sym_v,
      anon_sym_eq,
  [786] = 2,
    ACTIONS(200), 1,
      sym__verb_no_paren,
    ACTIONS(198), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [794] = 2,
    ACTIONS(202), 1,
      sym_name,
    ACTIONS(194), 2,
      anon_sym_v,
      anon_sym_eq,
  [802] = 2,
    ACTIONS(204), 1,
      anon_sym_DQUOTE,
    ACTIONS(206), 1,
      aux_sym__quoted_attribute_value_token2,
  [809] = 1,
    ACTIONS(208), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [814] = 2,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(210), 1,
      aux_sym__quoted_attribute_value_token1,
  [821] = 1,
    ACTIONS(212), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [826] = 1,
    ACTIONS(214), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [831] = 1,
    ACTIONS(216), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [836] = 1,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
  [840] = 1,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
  [844] = 1,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
  [848] = 1,
    ACTIONS(222), 1,
      anon_sym_LBRACE,
  [852] = 1,
    ACTIONS(224), 1,
      anon_sym_RBRACE,
  [856] = 1,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
  [860] = 1,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
  [864] = 1,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
  [868] = 1,
    ACTIONS(228), 1,
      anon_sym_LBRACE,
  [872] = 1,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 148,
  [SMALL_STATE(9)] = 171,
  [SMALL_STATE(10)] = 194,
  [SMALL_STATE(11)] = 217,
  [SMALL_STATE(12)] = 240,
  [SMALL_STATE(13)] = 263,
  [SMALL_STATE(14)] = 286,
  [SMALL_STATE(15)] = 309,
  [SMALL_STATE(16)] = 325,
  [SMALL_STATE(17)] = 342,
  [SMALL_STATE(18)] = 351,
  [SMALL_STATE(19)] = 365,
  [SMALL_STATE(20)] = 379,
  [SMALL_STATE(21)] = 393,
  [SMALL_STATE(22)] = 407,
  [SMALL_STATE(23)] = 415,
  [SMALL_STATE(24)] = 425,
  [SMALL_STATE(25)] = 439,
  [SMALL_STATE(26)] = 449,
  [SMALL_STATE(27)] = 463,
  [SMALL_STATE(28)] = 477,
  [SMALL_STATE(29)] = 491,
  [SMALL_STATE(30)] = 505,
  [SMALL_STATE(31)] = 513,
  [SMALL_STATE(32)] = 524,
  [SMALL_STATE(33)] = 535,
  [SMALL_STATE(34)] = 548,
  [SMALL_STATE(35)] = 555,
  [SMALL_STATE(36)] = 562,
  [SMALL_STATE(37)] = 569,
  [SMALL_STATE(38)] = 580,
  [SMALL_STATE(39)] = 591,
  [SMALL_STATE(40)] = 598,
  [SMALL_STATE(41)] = 605,
  [SMALL_STATE(42)] = 616,
  [SMALL_STATE(43)] = 627,
  [SMALL_STATE(44)] = 638,
  [SMALL_STATE(45)] = 645,
  [SMALL_STATE(46)] = 656,
  [SMALL_STATE(47)] = 665,
  [SMALL_STATE(48)] = 674,
  [SMALL_STATE(49)] = 682,
  [SMALL_STATE(50)] = 690,
  [SMALL_STATE(51)] = 700,
  [SMALL_STATE(52)] = 708,
  [SMALL_STATE(53)] = 718,
  [SMALL_STATE(54)] = 726,
  [SMALL_STATE(55)] = 734,
  [SMALL_STATE(56)] = 744,
  [SMALL_STATE(57)] = 752,
  [SMALL_STATE(58)] = 760,
  [SMALL_STATE(59)] = 770,
  [SMALL_STATE(60)] = 778,
  [SMALL_STATE(61)] = 786,
  [SMALL_STATE(62)] = 794,
  [SMALL_STATE(63)] = 802,
  [SMALL_STATE(64)] = 809,
  [SMALL_STATE(65)] = 814,
  [SMALL_STATE(66)] = 821,
  [SMALL_STATE(67)] = 826,
  [SMALL_STATE(68)] = 831,
  [SMALL_STATE(69)] = 836,
  [SMALL_STATE(70)] = 840,
  [SMALL_STATE(71)] = 844,
  [SMALL_STATE(72)] = 848,
  [SMALL_STATE(73)] = 852,
  [SMALL_STATE(74)] = 856,
  [SMALL_STATE(75)] = 860,
  [SMALL_STATE(76)] = 864,
  [SMALL_STATE(77)] = 868,
  [SMALL_STATE(78)] = 872,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(60),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(60),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(62),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__id, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_verb_repeat1, 2), SHIFT_REPEAT(58),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_verb_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_verb_repeat1, 2), SHIFT_REPEAT(28),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(57),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_verb, 5),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_verb, 5),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__verb_node, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__verb_node, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_attribute_value, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_attribute_value, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__id_verb, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [226] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dm(void) {
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
