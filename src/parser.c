#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_AT = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_text = 4,
  sym__new_block = 5,
  sym_tag_name = 6,
  sym_document = 7,
  sym_p = 8,
  sym__node = 9,
  sym_tag = 10,
  aux_sym_document_repeat1 = 11,
  aux_sym_p_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_text] = "text",
  [sym__new_block] = "_new_block",
  [sym_tag_name] = "tag_name",
  [sym_document] = "document",
  [sym_p] = "p",
  [sym__node] = "_node",
  [sym_tag] = "tag",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_p_repeat1] = "p_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_text] = sym_text,
  [sym__new_block] = sym__new_block,
  [sym_tag_name] = sym_tag_name,
  [sym_document] = sym_document,
  [sym_p] = sym_p,
  [sym__node] = sym__node,
  [sym_tag] = sym_tag,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_p_repeat1] = aux_sym_p_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_p_repeat1] = {
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
  [8] = 6,
  [9] = 4,
  [10] = 7,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 13,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 16,
  [20] = 17,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(8);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(8);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(8);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(8);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(8);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(8);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(8);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(8);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__new_block);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__new_block);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '*') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_tag_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(18),
    [sym_p] = STATE(2),
    [sym__node] = STATE(5),
    [sym_tag] = STATE(5),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_p_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
  },
  [2] = {
    [sym_p] = STATE(3),
    [sym__node] = STATE(5),
    [sym_tag] = STATE(5),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_p_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(5),
    [sym_text] = ACTIONS(7),
  },
  [3] = {
    [sym_p] = STATE(3),
    [sym__node] = STATE(5),
    [sym_tag] = STATE(5),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_p_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_AT] = ACTIONS(13),
    [sym_text] = ACTIONS(16),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      sym_text,
    STATE(7), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [15] = 4,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(25), 1,
      sym_text,
    ACTIONS(27), 1,
      sym__new_block,
    STATE(6), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [30] = 4,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(32), 1,
      sym_text,
    ACTIONS(35), 1,
      sym__new_block,
    STATE(6), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [45] = 4,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    ACTIONS(39), 1,
      sym_text,
    STATE(8), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [60] = 4,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(41), 1,
      anon_sym_AT,
    ACTIONS(44), 1,
      sym_text,
    STATE(8), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [75] = 4,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      sym_text,
    STATE(10), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [90] = 4,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      sym_text,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    STATE(8), 3,
      sym__node,
      sym_tag,
      aux_sym_p_repeat1,
  [105] = 2,
    ACTIONS(55), 1,
      anon_sym_AT,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym_text,
  [113] = 1,
    ACTIONS(57), 3,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [119] = 1,
    ACTIONS(59), 3,
      anon_sym_AT,
      sym_text,
      sym__new_block,
  [125] = 2,
    ACTIONS(61), 1,
      sym_text,
    ACTIONS(57), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [133] = 2,
    ACTIONS(63), 1,
      sym_text,
    ACTIONS(59), 2,
      anon_sym_AT,
      anon_sym_RBRACE,
  [141] = 1,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
  [145] = 1,
    ACTIONS(67), 1,
      sym_tag_name,
  [149] = 1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
  [153] = 1,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
  [157] = 1,
    ACTIONS(73), 1,
      sym_tag_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 15,
  [SMALL_STATE(6)] = 30,
  [SMALL_STATE(7)] = 45,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 75,
  [SMALL_STATE(10)] = 90,
  [SMALL_STATE(11)] = 105,
  [SMALL_STATE(12)] = 113,
  [SMALL_STATE(13)] = 119,
  [SMALL_STATE(14)] = 125,
  [SMALL_STATE(15)] = 133,
  [SMALL_STATE(16)] = 141,
  [SMALL_STATE(17)] = 145,
  [SMALL_STATE(18)] = 149,
  [SMALL_STATE(19)] = 153,
  [SMALL_STATE(20)] = 157,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(17),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(17),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(6),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(20),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_p_repeat1, 2), SHIFT_REPEAT(8),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
