#include "scanner.h"
#include <stdlib.h>
#include <stdio.h>
#include <token.h>
#include <list.h>
#include <string.h>
#include <scanner_switch.h>

#define tabulation 9
#define end_line 10
#define space 32
   

Lista_t token_list;

void scan (Scanner_t sc){
    Token_t token;
    char cadena [80];

    printf("%c",0);//this prevent a segmentation fault, not erase please, im know this is very dirty solutionk, sorry
    
    while (1) {
        if (peek(sc)==EOF){break;}
        switch (peek(sc)) {
            case '*':
                if (peekfar(1, sc)=='='){
                    token = new_token(ASTERISK_EQUAL ,0, 0, 0);
                    Insertar_final(&token_list, &token);
                    advance(&sc);
                    advance(&sc);
                }else {
                    token = new_token(ASTERISK ,0, 0, 0);
                    Insertar_final(&token_list, &token);
                    advance(&sc);
                }
                break;
            case '/':
                if (peekfar(1, sc)=='='){
                    token = new_token(SLASH_EQUAL ,0, 0, 0);
                    Insertar_final(&token_list, &token);
                    advance(&sc);
                    advance(&sc);
                }else {
                    token = new_token(SLASH ,0, 0, 0);
                    Insertar_final(&token_list, &token);
                    advance(&sc);
                }
                break;
            case '-':
                if (peekfar(1, sc)=='='){
                    token = new_token(MINUS_EQUAL ,0, 0, 0);
                    Insertar_final(&token_list, &token);
                    advance(&sc);
                    advance(&sc);
                }else {
                    token = new_token(MINUS ,0, 0, 0);
                    Insertar_final(&token_list, &token);
                    advance(&sc);
                }
                break;
            case '+':
                if (peekfar(1, sc)=='='){
                    token = new_token(PLUS_EQUAL ,0, 0, 0);
                    Insertar_final(&token_list, &token);
                    advance(&sc);
                    advance(&sc);
                }else {
                    token = new_token(PLUS ,0, 0, 0);
                    Insertar_final(&token_list, &token);
                    advance(&sc);
                }
                break;
            case '=':
                token = new_token(EQUAL ,0, 0, 0);
                Insertar_final(&token_list, &token);
                advance(&sc);
                break;
            case ',':
                token = new_token(COMMA ,0, 0, 0);
                Insertar_final(&token_list, &token);
                advance(&sc);
                break;
            case ':':
                token = new_token(COLON ,0, 0, 0);
                Insertar_final(&token_list, &token);
                advance(&sc);
                break;
            case '.':
                token = new_token(DOT ,0, 0, 0);
                Insertar_final(&token_list, &token);
                advance(&sc);
                break;
            case '"':
                token = new_token(DOUBLE_QUOTATION ,0, 0, 0);
                Insertar_final(&token_list, &token);
                advance(&sc);
                break;
            case tabulation:
                token = new_token(TAB ,0, 0, 0);
                Insertar_final(&token_list, &token);
                advance(&sc);
                break;
            case -1:
                token = new_token(END_OF_FILE ,0, 0, 0);
                Insertar_final(&token_list, &token);
                advance(&sc);
                break;
            default:
                advance(&sc);
        }
    }
}
