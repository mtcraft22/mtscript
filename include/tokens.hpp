#pragma once
#include <string>
#include <map>
typedef enum token {
    A,
    ARRAY,
    CADA,
    CADENA,
    CARACTER,
    COMO,
    COMENZAR,
    COMIENZA,
    CORESPONDE,
    DECIMAL,
    DIFERENTE,
    DEFINE,
    DEPENDENCIAS,
    DEVUELVE,
    EN,
    ENTERO,
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
    IGUAL,
    POR,
    PARA,
    PARAMETROS,
    PROGRAMA,
    PROCEDIMIENTO,
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
    BANG,
    COMMA,
    COLON,
    DOT,
    DOUBLE_QUOTATION,
    EQUAL,
    END_LINE,
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
    BANG_EQUAL,
    CONTINUE_LINE,
    PLUS_EQUAL,
    MINUS_EQUAL,
    SLASH_EQUAL,
    DOUBLE_EQUAL,
    END_OF_FILE,
    
//-----LITERALS-------

    IDENTIFIER,
    NUMBER,
    STRING,
}Token_t;
extern std::map<std::string, Token_t> key_words ;

class Token {
    private:
        const Token_t type;
        const std::string lexeme;
        const std::string literal;
        const int line;
    public:
        Token(const Token_t type,const std::string lexeme,const int line);
        Token(const Token_t type,const std::string lexeme,std::string literal,const int line);
        std::string To_string();
};