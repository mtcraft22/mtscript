#pragma once
#include <stdio.h>
typedef struct scanner{
    int bufer[BUFSIZ];
    int cursor;
}Scanner_t ;

int peek(Scanner_t sc);
void advance(Scanner_t* sc);
int peekfar(int off, Scanner_t sc);
void peek_until_space(Scanner_t *sc, char* cadena);