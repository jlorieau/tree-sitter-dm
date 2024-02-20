#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 29
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 7

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_AT = 3,
  sym_tag_name = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_EQ = 7,
  sym_attribute_name = 8,
  sym_attribute_value = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_quoted_attribute_value_token1 = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_quoted_attribute_value_token2 = 13,
  sym_text = 14,
  sym_document = 15,
  sym__node = 16,
  sym_tag = 17,
  sym__start_tag = 18,
  sym_attributes = 19,
  sym_attribute = 20,
  sym_quoted_attribute_value = 21,
  aux_sym_document_repeat1 = 22,
  aux_sym_attributes_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT] = "@",
  [sym_tag_name] = "tag_name",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_attribute_value_token1] = "attribute_value",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_attribute_value_token2] = "attribute_value",
  [sym_text] = "text",
  [sym_document] = "document",
  [sym__node] = "_node",
  [sym_tag] = "tag",
  [sym__start_tag] = "_start_tag",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym_quoted_attribute_value] = "quoted_attribute_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_AT] = anon_sym_AT,
  [sym_tag_name] = sym_tag_name,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_attribute_value_token1] = sym_attribute_value,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_attribute_value_token2] = sym_attribute_value,
  [sym_text] = sym_text,
  [sym_document] = sym_document,
  [sym__node] = sym__node,
  [sym_tag] = sym_tag,
  [sym__start_tag] = sym__start_tag,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym_quoted_attribute_value] = sym_quoted_attribute_value,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
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
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
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
  [sym__start_tag] = {
    .visible = false,
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
  [aux_sym_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_text = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_text] = "text",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_text, 0},
  [1] =
    {field_text, 0, .inherited = true},
  [2] =
    {field_name, 1},
  [3] =
    {field_text, 0, .inherited = true},
    {field_text, 1, .inherited = true},
  [5] =
    {field_name, 0, .inherited = true},
  [6] =
    {field_name, 0, .inherited = true},
    {field_text, 2, .inherited = true},
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
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == '[') ADVANCE(12);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '{') ADVANCE(8);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\'' &&
          lookahead != '/' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(15);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(23);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '{') ADVANCE(23);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_tag_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_attribute_name);
      if (!sym_attribute_name_character_set_1(lookahead)) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_attribute_value);
      if (!sym_attribute_value_character_set_1(lookahead)) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_quoted_attribute_value_token2);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(23);
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
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(26),
    [sym__node] = STATE(7),
    [sym_tag] = STATE(7),
    [sym__start_tag] = STATE(22),
    [aux_sym_document_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(14), 1,
      sym_text,
    STATE(2), 1,
      aux_sym_document_repeat1,
    STATE(22), 1,
      sym__start_tag,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(7), 2,
      sym__node,
      sym_tag,
  [21] = 6,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      sym_text,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_document_repeat1,
    STATE(22), 1,
      sym__start_tag,
    STATE(7), 2,
      sym__node,
      sym_tag,
  [41] = 6,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      sym_text,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      aux_sym_document_repeat1,
    STATE(22), 1,
      sym__start_tag,
    STATE(7), 2,
      sym__node,
      sym_tag,
  [61] = 6,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      sym_text,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(3), 1,
      aux_sym_document_repeat1,
    STATE(22), 1,
      sym__start_tag,
    STATE(7), 2,
      sym__node,
      sym_tag,
  [81] = 3,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(25), 1,
      sym_attribute_name,
    STATE(8), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [92] = 1,
    ACTIONS(27), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_text,
  [99] = 3,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    ACTIONS(31), 1,
      sym_attribute_name,
    STATE(8), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [110] = 4,
    ACTIONS(34), 1,
      sym_attribute_value,
    ACTIONS(36), 1,
      anon_sym_SQUOTE,
    ACTIONS(38), 1,
      anon_sym_DQUOTE,
    STATE(16), 1,
      sym_quoted_attribute_value,
  [123] = 3,
    ACTIONS(25), 1,
      sym_attribute_name,
    ACTIONS(40), 1,
      anon_sym_RBRACK,
    STATE(6), 2,
      sym_attribute,
      aux_sym_attributes_repeat1,
  [134] = 1,
    ACTIONS(42), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_text,
  [141] = 1,
    ACTIONS(44), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_text,
  [148] = 1,
    ACTIONS(46), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_AT,
      sym_text,
  [155] = 3,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_attributes,
  [165] = 2,
    ACTIONS(54), 1,
      anon_sym_EQ,
    ACTIONS(52), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [173] = 1,
    ACTIONS(56), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [178] = 2,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      aux_sym_quoted_attribute_value_token1,
  [185] = 2,
    ACTIONS(58), 1,
      anon_sym_DQUOTE,
    ACTIONS(62), 1,
      aux_sym_quoted_attribute_value_token2,
  [192] = 1,
    ACTIONS(64), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [197] = 1,
    ACTIONS(66), 2,
      anon_sym_RBRACK,
      sym_attribute_name,
  [202] = 1,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
  [206] = 1,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
  [210] = 1,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
  [214] = 1,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
  [218] = 1,
    ACTIONS(76), 1,
      sym_tag_name,
  [222] = 1,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
  [226] = 1,
    ACTIONS(80), 1,
      anon_sym_SQUOTE,
  [230] = 1,
    ACTIONS(80), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 41,
  [SMALL_STATE(5)] = 61,
  [SMALL_STATE(6)] = 81,
  [SMALL_STATE(7)] = 92,
  [SMALL_STATE(8)] = 99,
  [SMALL_STATE(9)] = 110,
  [SMALL_STATE(10)] = 123,
  [SMALL_STATE(11)] = 134,
  [SMALL_STATE(12)] = 141,
  [SMALL_STATE(13)] = 148,
  [SMALL_STATE(14)] = 155,
  [SMALL_STATE(15)] = 165,
  [SMALL_STATE(16)] = 173,
  [SMALL_STATE(17)] = 178,
  [SMALL_STATE(18)] = 185,
  [SMALL_STATE(19)] = 192,
  [SMALL_STATE(20)] = 197,
  [SMALL_STATE(21)] = 202,
  [SMALL_STATE(22)] = 206,
  [SMALL_STATE(23)] = 210,
  [SMALL_STATE(24)] = 214,
  [SMALL_STATE(25)] = 218,
  [SMALL_STATE(26)] = 222,
  [SMALL_STATE(27)] = 226,
  [SMALL_STATE(28)] = 230,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, .production_id = 4),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, .production_id = 4), SHIFT_REPEAT(25),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, .production_id = 4), SHIFT_REPEAT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, .production_id = 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 1, .production_id = 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(15),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, .production_id = 6),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, .production_id = 5),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1, .production_id = 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__start_tag, 2, .production_id = 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_attribute_value, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__start_tag, 3, .production_id = 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [78] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
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
