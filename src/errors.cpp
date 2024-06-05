#include "error.hpp"
#include <errors.hpp>
Error mt_end_string = Error(1,true,"Terminación ilegal en una cadena");
Error mt_end_file = Error(2,true,"Final del archivo inesperado");
Error mt_ilegal_lexeme = Error(3,true,"Error de lexico");