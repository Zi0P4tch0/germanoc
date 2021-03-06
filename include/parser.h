
#ifndef PARSER_H
#define PARSER_H

#include <glib.h>

#include <mpc.h>

#include "macros.h"

typedef enum {
    G_VARIANT_STRING_TYPE_IDENTIFIER,
    G_VARIANT_STRING_TYPE_LITERAL
} GVariantStringType;

struct Parser {
    GPtrArray *_subparsers;
    mpc_parser_t *_parser;
    mpc_val_t *output;
    mpc_err_t *error;
};

TYPEDEF_STRUCT(Parser);

ParserRef ParserCreate();
void      ParserDelete(ParserRef parser);
void      ParserParseFile(ParserRef parser, const gchar *filename);

#endif //PARSER_H
