#include <stdio.h>
#include <scanner.h>
#include <token.h>
#include <list.h>

#define tabulation 9

Lista_t token_list;

void scan (Scanner_t sc){
    char * c;
    Token_type_t token_type;
    Token_t t;
    while (1) {
        if(getc(sc.archivo)==EOF){break;}
        switch (peek(sc)) {
            case 'A':
                c = "ARRAY";
                token_type=ARRAY;
                t = new_token(token_type,c , 0, 1);
                Insertar_final(&token_list, &t);
                break; 
            case '=':
                c = "EQUAL";
                token_type=EQUAL;
                t = new_token(token_type,c , 0, 1);
                Insertar_final(&token_list, &t);
                break;
            case '+':
                switch (peekfar(1, sc)) {
                    case '=':
                        c = "PLUS_EQUAL";
                        token_type=PLUS_EQUAL;
                        t = new_token(token_type,c , 0, 1);
                        Insertar_final(&token_list, &t);
                        advance(&sc);
                        break;
                    default:
                        c = "PLUS";
                        token_type=PLUS;
                        t = new_token(token_type,c , 0, 1);
                        Insertar_final(&token_list, &t);
                }
                break;
            case tabulation:
                c = "TAB";
                token_type=TAB;
                t = new_token(token_type,c , 0, 1);
                Insertar_final(&token_list, &t);
                break;
            default:
                printf("[LEXICAL ERROR] ilegal indentifier at caracter %d\n", sc.cursor);

        }
        advance(&sc);
    }   
}

void imprime(Token_t* t){
    printf("%d\n",t->type);
}

int main(int argc, char**argv){
    if (argv[1]){
        Scanner_t scaner; 
        scaner.archivo=fopen(argv[1], "r");
        scan(scaner);
        por_cada(&token_list, imprime);
        destructor(&token_list);
    }else {
        while (1) {
            char linea[BUFSIZ];
            printf("mtscript>");
            fgets(linea,BUFSIZ, stdin);
            if(linea[0]==10){
                break;
            }else {
                printf("ok> %s",linea);
            }
        }
    }
    return 0;
}

