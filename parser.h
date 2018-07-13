
#ifndef PARSER_H
#define PARSER_H

#include <glib.h>

#include <mpc.h>

struct Parser {
    GArray *_subparsers;
    mpc_parser_t *_parser;
    mpc_val_t *output;
    mpc_err_t *error;
};

typedef struct Parser  Parser;
typedef struct Parser* ParserRef;

ParserRef ParserCreate(mpc_err_t **error);
void      ParserDelete(ParserRef parser);
void      ParserParseFile(ParserRef parser, const gchar *filename);

#endif //PARSER_H