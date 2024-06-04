#include <cctype>
#include <cstdlib>
#include <iostream>
#include <ostream>
#include <stdexcept>
#include <string>
#include <vector>
#include <tokens.hpp>
#include <scanner.hpp>

scaner::scaner(std::string src){
    this->src = src;
}
std::vector<Token> scaner::getTokens(){return this->tokens;}
bool scaner::isFinal(){return current >= this->src.length();}
char scaner::advance(){char r = this->src.at(current); current ++; return r;}
char scaner::peek(){return !isFinal()?this->src.at(current ):'\0';}
void scaner::addtoken(Token_t token){
   std::string digito ="\0";
    Token este = Token(token,this->src.substr(this->start,this->current - this->start),digito,this->line);
    this->tokens.push_back(este);
}
void scaner::addliteraltoken(Token_t token, std::string literal){
    Token este = Token(token,this->src.substr(this->start,this->current - this->start),literal,this->line);
    this->tokens.push_back(este);
}
bool scaner::match(char check){
    if(isFinal()){return false;}
    if(this->src.at(this->current)!=check){
        return false;
    }else {
        current ++;
        return true;
    }
 
}
void scaner::scan(){

    while (!this->isFinal()) {
        this->start = this->current;
        char caracter = this->advance();
        switch (caracter) {
            case '*':
                this->addtoken(match('=')? ASTERISK_EQUAL: ASTERISK);
                break;
            case ',':
                this->addtoken(COMMA);
                break;
            case ':':
                this->addtoken(COLON);
                break;
            case '.':
                this->addtoken(DOT);
                break;
            case ' ':
                break;
            case '"':
                
                while (peek() != '"' && !isFinal() && peek() != '\n') {
                    advance();
                }
            
                if (peek() == '\n') {
                    std::cout << "[MT-01]Terminación ilegal en una cadena, en la linea: " << std::to_string(this->line) << std::endl;
                    exit(-1);
                }
                advance();
                if(isFinal()){
                    std::cout << "[MT-02]Final del archivo inesperado, en la linea: " << std::to_string(this->line) << std::endl;
                    exit(-1); 
                }else {
                    std::string texto = this->src.substr(this->start+1, (this->current-this->start)-2);
                    addliteraltoken(STRING, texto);
                }
                
                break;
            case '=':
                this->addtoken(match('=')? DOUBLE_EQUAL: EQUAL);
                break;
            case '\n':
                this->addtoken(END_LINE);
                this->line ++;
                break;
            case '<':
                this->addtoken(LESS_THAN);
                break;
            case '-':
                this->addtoken(match('=')? MINUS_EQUAL: MINUS);
                break;
            case '>':
                this->addtoken(GREATER_THAN);
                break;
            case '(':
                this->addtoken(LPARENT);
                break;
            case '+':
                this->addtoken(match('=')? PLUS_EQUAL: PLUS);
                break;
            case ')':
                this->addtoken(RPARENT);
                break;
            case '/':
                if (match('/')){
                    while (peek() != '\n' && !isFinal()) {
                        advance();
                    }
                   
                }else {
                    this->addtoken(SLASH);
                }
                break;
            case '\t':
                this->addtoken(TAB);
                break;
            case '!':
                this->addtoken(match('=')? BANG_EQUAL: BANG);
                break;
            default:
                if (std::isdigit(caracter)){
                
                    while(std::isdigit(peek()) && !isFinal()){
                        advance();
                    }
                    std::string texto =  this->src.substr(this->start, this->current-this->start);
                    addliteraltoken(NUMBER, texto);
                }else if(std::isalpha(caracter)) {
                    while(std::isalpha(peek()) && !isFinal()){
                        advance();
                    }
                    std::string texto =  this->src.substr(this->start, this->current-this->start);
                    
                    if (key_words.find(texto) != key_words.end()){
                        
                        addliteraltoken(key_words.find(texto)->second, texto);
                    }else {
                        addliteraltoken(IDENTIFIER, texto);
                    }
                   
                }else {
                    std::cout << "[MT-03] Eror de lexico" << std::endl;
                }
                break;
                
        }
    }
    
}