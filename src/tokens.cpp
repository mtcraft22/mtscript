/*
    Copyright (C) 2024  mtcraft22

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/
#include <string>
#include <tokens.hpp>
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
{"MAYOR",MAYOR},
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