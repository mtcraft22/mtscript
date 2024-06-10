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
#include "error.hpp"
#include <errors.hpp>
Error mt_end_string = Error(1,true,"Terminación ilegal en una cadena");
Error mt_end_file = Error(2,true,"Final del archivo inesperado");
Error mt_ilegal_lexeme = Error(3,true,"Error de lexico");