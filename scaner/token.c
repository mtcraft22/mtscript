#include <token.h>
Token_t new_token(token_type_t ty, char* meta,int line , int caracter){
    Token_t token;
    token.type=ty;
    token.meta=meta;
    token.line=line;
    token.caracter=caracter;
    return token;
}