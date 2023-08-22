#include <scanner.h>
#include <stdio.h>
#include <token.h>
#include <list.h>
#include <string.h>
#include <scanner_switch.h>

#define tabulation 9
#define end_line 10
#define space 32
#define Advance advance(&sc);       

Lista_t token_list;

void scan (Scanner_t sc){
    Token_t token;
    while (1) {
        if (peek(sc)==EOF){
            break;
        }
        switch (peek(sc)) {
            case tabulation:
                token = new_token(TAB ,0, 0, 0);
                Insertar_final(&token_list, &token);
                Advance
                break;
            default:
                Advance
        }
    }
}