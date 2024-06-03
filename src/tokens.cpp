#include <string>
#include <tokens.hpp>
#include <sstream>
Token::Token(const Token_t type,const std::string lexeme,const int line):type(type),lexeme(lexeme),line(line){
    
}
Token::Token(const Token_t type,const std::string lexeme,const void* literal,const int line):type(type),lexeme(lexeme),literal(literal),line(line){
    
}
std::string Token::to_string(){
    std::string out;
    std::ostringstream sal = std::ostringstream(out);
    sal << "Type: " << this->type << "Lexeme : " << 
    this->lexeme << "Literal value : " << this->literal << " at line: " << this->line ;
    return sal.str();
}