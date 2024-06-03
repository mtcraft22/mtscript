#include <string>
#include <tokens.hpp>
#include <sstream>
Token::Token(const Token_t type,const std::string lexeme,const int line):type(type),lexeme(lexeme),line(line){
    
}
Token::Token(const Token_t type,const std::string lexeme,const void* literal,const int line):type(type),lexeme(lexeme),literal(literal),line(line){
    
}
std::string Token::To_string(){
    
    return "Type: " + std::to_string(this->type) + "Lexeme : " + 
    this->lexeme + "Literal value : " + (char *)this->literal + " at line: " + std::to_string(this->line) + '\n';
}