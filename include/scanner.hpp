#pragma once
#include <iostream>
#include <vector>
#include "tokens.hpp"
class scaner {
    private:
        std::vector<Token> tokens;
        std::string src;
        int start = 0;
        int current = 0;
        int line = 1;
    public:
        std::vector<Token> getTokens();
        bool isFinal();
        char advance();
        char peek();
        void addtoken(Token_t token);
        void addliteraltoken(Token_t token, void* literal);
        void scan();
    
};