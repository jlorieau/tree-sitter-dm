#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_ = 1,
  anon_sym_AT = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_EQ = 7,
  sym_text = 8,
  sym__new_block = 9,
  sym_tag_name = 10,
  sym_attribute_name = 11,
  sym_attribute_value = 12,
  anon_sym_SQUOTE = 13,
  aux_sym_quoted_attribute_value_token1 = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_quoted_attribute_value_token2 = 16,
  sym_document = 17,
  sym_p = 18,
  sym__node = 19,
  sym_tag = 20,
  sym_attributes = 21,
  sym_attribute = 22,
  sym_quoted_attribute_value = 23,
  aux_sym_document_repeat1 = 24,
  aux_sym_p_repeat1 = 25,
  aux_sym_attributes_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_] = " ",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_text] = "text",
  [sym__new_block] = "_new_block",
  [sym_tag_name] = "tag_name",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_document] = "document",
  [sym_p] = "p",
  [sym__node] = "_node",
  [sym_tag] = "tag",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_p_repeat1] = "p_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_] = anon_sym_,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_text] = sym_text,
  [sym__new_block] = sym__new_block,
  [sym_tag_name] = sym_tag_name,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [sym_document] = sym_document,
  [sym_p] = sym_p,
  [sym__node] = sym__node,
  [sym_tag] = sym_tag,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_p_repeat1] = aux_sym_p_repeat1,
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
  [aux_sym_quoted_attribute_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_attribute_value_token2] = {
    .visible = true,
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
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_attribute_value] = {
    .visible = true,
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
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 5,
  [12] = 6,
  [13] = 7,
  [14] = 8,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 20,
  [23] = 18,
  [24] = 21,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
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
  [41] = 38,
  [42] = 34,
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
      if (eof) ADVANCE(7);
      if (lookahead == 0) ADVANCE(8);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '=') ADVANCE(15);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == ']') ADVANCE(14);
      if (lookahead == '{') ADVANCE(11);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
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
          lookahead != '}') ADVANCE(27);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == '}') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(19);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_AT);
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
      if (lookahead == 0) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 0) ADVANCE(9);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '*') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '@' &&
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
          lookahead != '{' &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '@' &&
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
          lookahead != '{' &&
          lookahead != '}') ADVANCE(19);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@' &&
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
      ACCEPT_TOKEN(sym_tag_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(34);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(40),
    [sym_p] = STATE(2),
    [sym__node] = STATE(4),
    [sym_tag] = STATE(4),
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
    STATE(4), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [19] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_AT,
    ACTIONS(16), 1,
      sym_text,
    STATE(3), 2,
      sym_p,
      aux_sym_document_repeat1,
    STATE(4), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [38] = 4,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      sym_text,
    ACTIONS(19), 2,
      anon_sym_,
      sym__new_block,
    STATE(5), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [54] = 4,
    ACTIONS(25), 1,
      anon_sym_AT,
    ACTIONS(28), 1,
      sym_text,
    ACTIONS(23), 2,
      anon_sym_,
      sym__new_block,
    STATE(5), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [70] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      sym_text,
    STATE(11), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [85] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      sym_text,
    STATE(6), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [100] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_text,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(11), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [115] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      sym_text,
    STATE(8), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [130] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    ACTIONS(47), 1,
      sym_text,
    STATE(14), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [145] = 4,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(52), 1,
      sym_text,
    STATE(11), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [160] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_text,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(11), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [175] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 1,
      sym_text,
    STATE(12), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [190] = 4,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_text,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    STATE(11), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [205] = 4,
    ACTIONS(61), 1,
      sym_attribute_value,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(29), 1,
      sym_quoted_attribute_value,
  [218] = 3,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    ACTIONS(69), 1,
      sym_attribute_name,
    STATE(16), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [229] = 3,
    ACTIONS(72), 1,
      anon_sym_RBRACK,
    ACTIONS(74), 1,
      sym_attribute_name,
    STATE(19), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [240] = 1,
    ACTIONS(76), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [247] = 3,
    ACTIONS(74), 1,
      sym_attribute_name,
    ACTIONS(78), 1,
      anon_sym_RBRACK,
    STATE(16), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [258] = 1,
    ACTIONS(80), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [265] = 1,
    ACTIONS(82), 4,
      anon_sym_,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [272] = 2,
    ACTIONS(84), 1,
      sym_text,
    ACTIONS(80), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [280] = 2,
    ACTIONS(86), 1,
      sym_text,
    ACTIONS(76), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [288] = 2,
    ACTIONS(88), 1,
      sym_text,
    ACTIONS(82), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [296] = 2,
    ACTIONS(92), 1,
      anon_sym_EQ,
    ACTIONS(90), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [304] = 2,
    ACTIONS(96), 1,
      anon_sym_AT,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      sym_text,
  [312] = 3,
    ACTIONS(98), 1,
      anon_sym_LBRACE,
    ACTIONS(100), 1,
      anon_sym_LBRACK,
    STATE(38), 1,
      sym_attributes,
  [322] = 3,
    ACTIONS(100), 1,
      anon_sym_LBRACK,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
    STATE(41), 1,
      sym_attributes,
  [332] = 1,
    ACTIONS(104), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [337] = 2,
    ACTIONS(106), 1,
      anon_sym_SQUOTE,
    ACTIONS(108), 1,
      aux_sym_quoted_attribute_value_token1,
  [344] = 2,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(110), 1,
      aux_sym_quoted_attribute_value_token2,
  [351] = 1,
    ACTIONS(112), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [356] = 1,
    ACTIONS(114), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [361] = 1,
    ACTIONS(116), 1,
      sym_tag_name,
  [365] = 1,
    ACTIONS(118), 1,
      anon_sym_LBRACE,
  [369] = 1,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
  [373] = 1,
    ACTIONS(120), 1,
      anon_sym_DQUOTE,
  [377] = 1,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
  [381] = 1,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
  [385] = 1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
  [389] = 1,
    ACTIONS(128), 1,
      anon_sym_LBRACE,
  [393] = 1,
    ACTIONS(130), 1,
      sym_tag_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 70,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 100,
  [SMALL_STATE(9)] = 115,
  [SMALL_STATE(10)] = 130,
  [SMALL_STATE(11)] = 145,
  [SMALL_STATE(12)] = 160,
  [SMALL_STATE(13)] = 175,
  [SMALL_STATE(14)] = 190,
  [SMALL_STATE(15)] = 205,
  [SMALL_STATE(16)] = 218,
  [SMALL_STATE(17)] = 229,
  [SMALL_STATE(18)] = 240,
  [SMALL_STATE(19)] = 247,
  [SMALL_STATE(20)] = 258,
  [SMALL_STATE(21)] = 265,
  [SMALL_STATE(22)] = 272,
  [SMALL_STATE(23)] = 280,
  [SMALL_STATE(24)] = 288,
  [SMALL_STATE(25)] = 296,
  [SMALL_STATE(26)] = 304,
  [SMALL_STATE(27)] = 312,
  [SMALL_STATE(28)] = 322,
  [SMALL_STATE(29)] = 332,
  [SMALL_STATE(30)] = 337,
  [SMALL_STATE(31)] = 344,
  [SMALL_STATE(32)] = 351,
  [SMALL_STATE(33)] = 356,
  [SMALL_STATE(34)] = 361,
  [SMALL_STATE(35)] = 365,
  [SMALL_STATE(36)] = 369,
  [SMALL_STATE(37)] = 373,
  [SMALL_STATE(38)] = 377,
  [SMALL_STATE(39)] = 381,
  [SMALL_STATE(40)] = 385,
  [SMALL_STATE(41)] = 389,
  [SMALL_STATE(42)] = 393,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(34),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(34),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(5),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(42),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(11),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(25),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 6),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 6),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [126] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
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
