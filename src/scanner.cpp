#include <string>
#include <vector>
#include <tokens.hpp>
#include <scanner.hpp>


std::vector<Token> scaner::getTokens(){return this->tokens;}
bool scaner::isFinal(){return current> this->src.length();}
char scaner::advance(){return this->src.at(current ++);}
char scaner::peek(){return this->src.at(current );}
void scaner::addtoken(Token_t token){
    Token este = Token(token,this->src.substr(this->start,this->current),this->line);
    this->tokens.push_back(este);
};
void scaner::addliteraltoken(Token_t token, void* literal){
    Token este = Token(token,this->src.substr(this->start,this->current),literal,this->line);
    this->tokens.push_back(este);
};
void scaner::scan(){
    this->start = this->current;
    char caracter = this->advance();
    switch (caracter) {
        case '*':
            this->addtoken(ASTERISK);
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
        case '"':
            this->addtoken(DOUBLE_QUOTATION);
            break;
        case '=':
            this->addtoken(EQUAL);
            break;
        case '\n':
            this->addtoken(END_LINE);
            this->line ++;
            break;
        case '<':
            this->addtoken(LESS_THAN);
            break;
        case '-':
            this->addtoken(MINUS);
            break;
        case '>':
            this->addtoken(GREATER_THAN);
            break;
        case '(':
            this->addtoken(LPARENT);
            break;           
    }
}