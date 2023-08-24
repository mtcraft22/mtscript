#pragma once


typedef enum token_type{
    //-----Palabras clave----
    A,
    ARRAY,
    CADENA,
    CARACTER,
    COMO,
    COMENZAR,
    COMIENZA,
    CORESPONDE,
    DEFINE,
    DEPENDENCIAS,
    DEVUELVE,
    EN,
    ENTRADA,
    ES,
    ESCRIBE,
    ESTRUCTURA,
    FIN,
    FICHERO,
    FUNCIONES,
    LINEA,
    MIENTRAS,
    NUMERO,
    IO,
    PARA,
    PARAMETROS,
    PROGRAMA,
    SALIDA,
    SECCION,
    STD_IO,
    SI,
    SINO,
    SIGIENTE,
    TERMINA,
    TERMINAR,
    USANDO,
    VARIABLES,
//---chars----
    ASTERISK ,
    COMMA ,
    COLON ,
    DOT ,
    DOUBLE_QUOTATION ,
    EQUAL ,
    LESS_THAN,
    MINUS,
    GREATER_THAN,
    L_ROUND_BRAKET,
    PLUS,
    R_ROUND_BRAKET,
    L_SQUARE_BRAKET,
    R_SQUARE_BRAKET,
    SLASH,
    TAB,
//------double chars---------
    ASTERISK_EQUAL,
    PLUS_EQUAL,
    MINUS_EQUAL,
    SLASH_EQUAL,
    END_OF_FILE,
    IDENTIFIER,
    NUMBER,
    STRING,
}token_type_t;

typedef struct Token{
    token_type_t type;
    char* meta;
    int line;
    int caracter;
}Token_t;
Token_t new_token(token_type_t ty, char* meta,int line, int caracter);