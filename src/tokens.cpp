#include <string>
#include <tokens.hpp>
#include <sstream>
std::map<std::string, Token_t> key_words = {
{"A", A },
{"ARRAY",ARRAY},
{"CADA",CADA},
{"CADENA",CADENA},
{"CARACTER",CARACTER},
{"COMO",COMO},
{"COMENZAR",COMENZAR},
{"COMIENZA",COMIENZA},
{"CORESPONDE",CORESPONDE},
{"DECIMAL",DECIMAL},
{"DIFERENTE",DIFERENTE},
{"DEFINE",DEFINE},
{"DEPENDENCIAS",DEPENDENCIAS},
{"DEVUELVE",DEVUELVE},
{"EN",EN},
{"ENTERO",ENTERO},
{"ENTRADA",ENTRADA},
{"ES",ES},
{"ESCRIBE",ESCRIBE},
{"ESTRUCTURA",ESTRUCTURA},
{"FIN",FIN},
{"FICHERO",FICHERO},
{"FUNCIONES",FUNCIONES},
{"LINEA",LINEA},
{"MIENTRAS",MIENTRAS},
{"NUMERO",NUMERO},
{"IO",IO},
{"IGUAL",IGUAL},
{"POR",POR},
{"PARA",PARA},
{"PARAMETROS",PARAMETROS},
{"PROGRAMA",PROGRAMA},
{"PROCEDIMIENTO",PROCEDIMIENTO},
{"SALIDA",SALIDA},
{"SECCION",SECCION},
{"STD_IO",STD_IO},
{"SI",SI},
{"SINO",SINO},
{"SIGIENTE",SIGIENTE},
{"TERMINA",TERMINA},
{"TERMINAR",TERMINAR},
{"USANDO",USANDO},
{"VARIABLES",VARIABLES}
};
Token::Token(const Token_t type,const std::string lexeme,const int line):type(type),lexeme(lexeme),line(line){
    
}
Token::Token(const Token_t type,const std::string lexeme,std::string literal,const int line):type(type),lexeme(lexeme),literal(literal),line(line){
    
}
std::string Token::To_string(){
    
    return " Type: " + std::to_string(this->type) + " Lexeme : " + 
    this->lexeme + " Literal value : " + this->literal + " at line: " + std::to_string(this->line) + '\n';
}