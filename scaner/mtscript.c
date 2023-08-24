#include <stdio.h>
#include <scanner.h>
#include <token.h>
#include <list.h>
#include <string.h>
#include <stdint.h>
#include <scanner_switch.h>

char* string_token[58]={
    "A",
    "ARRAY",
    "CADENA",
    "CARACTE",
    "COMO",
    "COMENZAR",
    "COMIENZA",
    "CORESPONDE",
    "DEFINE",
    "DEPENDENCIAS",
    "DEVUELVE",
    "EN",
    "ENTRADA",
    "ES",
    "ESCRIBE",
    "ESTRUCTURA",
    "FIN",
    "FICHERO",
    "FUNCIONES",
    "LINEA",
    "MIENTRAS",
    "NUMERO",
    "IO",
    "PARA",
    "PARAMETROS",
    "PROGRAMA",
    "SALIDA",
    "SECCION",
    "STD_IO",
    "SI",
    "SINO",
    "SIGIENTE",
    "TERMINA",
    "TERMINAR",
    "USANDO",
    "VARIABLES",
//---chars----
    "ASTERISK ",
    "COMMA",
    "COLON",
    "DOT",
    "DOUBLE_QUOTATION",
    "EQUAL",
    "LESS_THAN",
    "MINUS",
    "GREATER_THAN",
    "LPARENT",
    "PLUS",
    "RPARENT",
    "SLASH",
    "TAB",
//------double chars---------
    "ASTERISK_EQUAL",
    "PLUS_EQUAL",
    "MINUS_EQUAL",
    "SLASH_EQUAL",
    "END_OF_FILE",
    "IDENTIFIER",
    "NUMBER",
    "STRING",
};

extern Lista_t token_list;

void imprime(Token_t* t){
    printf("token: %s \n",string_token[t->type]);
}

int main(int argc, char**argv){
    if (argv[1]){
        Scanner_t scaner;
        FILE* source=fopen(argv[1], "r");
        int pos = 0;
        for (pos;pos<BUFSIZ;pos++){
            scaner.bufer[pos]=0;
        }
        pos=0;
        while (1) {
            int ch=getc(source);
            if (ch==EOF) {
                scaner.bufer[pos]=EOF;
                break;
            }else{
                scaner.bufer[pos]=ch;
                pos++;
            }
        }
        fclose(source);
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