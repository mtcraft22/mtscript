#pragma once
typedef enum token_type{
    //-----Palabras clave----
    A,
    ARRAY,
    CADENA,
    CARACTER,
    COMO,
    COMENZAR,
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
    PARA, //FOR
    PARAMETROS,
    PROGRAMA,  
    SALIDA,
    SECCION,
    STD_IO, 
    SI, //IF
    SINO,//ELIF(python)
    SIGIENTE, //CONTINUE
    TERMINAR, //BREAK
    USANDO,
    VARIABLES,
    //-----char tokens------
    ASTERISK,
    COMMA,
    COLON,
    DOT,
    DOUBLE_QUOTATION,
    EQUAL,
    MINOR,
    MINUS,
    GREATER,
    LPARENT,
    PLUS,
    RPARENT,
    SLASH,
    TAB,
    //------duble char tokens--------
    ASTERISK_EQUAL,
    PLUS_EQUAL,
    MINUS_EQUAL,
    SLASH_EQUAL,
    //------Literales.-------
    END_OF_FILE,
    IDENTIFIER, 
    NUMBER,
    STRING, 
    
    
}Token_type_t;
typedef struct Token{
    Token_type_t type;
    char* lexeme;
    char* literal;
    int line;
}Token_t;
Token_t new_token(Token_type_t type, char* lexeme, char* literal, int line);