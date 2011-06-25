
//
// parser.h
//
// Copyright (c) 2011 TJ Holowaychuk <tj@vision-media.ca>
//

#ifndef __LUNA_PARSER__
#define __LUNA_PARSER__

#include "lexer.h"
#include "ast.h"

/*
 * Parser struct.
 */

typedef struct {
  char *ctx;
  char *err;
  luna_token_t *la;
  luna_lexer_t *lex;
} luna_parser_t;

// protos

void
luna_parser_init(luna_parser_t *self, luna_lexer_t *lex);

luna_block_node_t *
luna_parse(luna_parser_t *self);

#endif /* __LUNA_PARSER__ */