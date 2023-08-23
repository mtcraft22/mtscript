#include <scanner.h>
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
        peek_until_space(&sc, cadena);
        switch (peek(sc)) {
            case 'A':
               
                   
                    if (strcmp(cadena,"ARRAY")==0){
                        token = new_token(ARRAY ,0, 0, 0);
                        Insertar_final(&token_list, &token);
                    }
                
                
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
