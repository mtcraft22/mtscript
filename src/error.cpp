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
#include <error.hpp>
#include <iostream>

Error::Error(long unsigned int code, bool fatal, std::string what) {
	this->code=code;
	this->fatal=fatal;
	this->what=what;
}
void Error::Throw(int line){
	std::cout << "[MT-" << this->code << "] " << this->what << " en la linea: " << line << std::endl;
	if(this->fatal){exit(-1);}
}