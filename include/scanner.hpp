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
#pragma once
#include <string>
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
        scaner(std::string src);
        std::vector<Token> getTokens();
        bool isFinal();
        char advance();
        char peek();
        void addtoken(Token_t token);
        void addliteraltoken(Token_t token, std::string literal);
        void scan();
        bool match(char check);
    
};