#pragma once
#include <string>
typedef enum token {
    A,
    ARRAY,
    CADENA,
    CARACTE,
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
    COMMA,
    COLON,
    DOT,
    DOUBLE_QUOTATION,
    EQUAL,
    LESS_THAN,
    MINUS,
    GREATER_THAN,
    LPARENT,
    PLUS,
    RPARENT,
    SLASH,
    TAB,
//------double chars---------
    ASTERISK_EQUAL,
    PLUS_EQUAL,
    MINUS_EQUAL,
    SLASH_EQUAL,
    END_OF_FILE,
    
//-----LITERALS-------

    IDENTIFIER,
    NUMBER,
    STRING,
}Token_t;
class Token {
    private:
        const Token_t type;
        const std::string lexeme;
        const void* literal;
        const int line;
    Token(const Token_t type,const std::string lexeme,const void* literal,const int line);
    std::string to_string();
}