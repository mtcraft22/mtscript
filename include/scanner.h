#pragma once
#include <stdio.h>
typedef struct scanner{
    FILE* archivo;
    int cursor;
}Scanner_t ;

char peek(Scanner_t sc);
void advance(Scanner_t* sc);
char peekfar(int off, Scanner_t sc);