#include <token.h>
Token_t new_token(Token_type_t type, char* lexeme, char* literal, int line){
    Token_t token;
    token.type=type;
    token.lexeme=lexeme;
    token.literal=literal;
    token.type=line;
    return token;
}