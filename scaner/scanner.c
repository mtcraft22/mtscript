#include <stdio.h>
typedef struct scanner{
    FILE* archivo;
    int cursor;
}Scanner_t ;

int peek(Scanner_t sc){
    fseek(sc.archivo,sc.cursor, SEEK_SET);
    return fgetc(sc.archivo);
}
void advance(Scanner_t* sc){
    sc->cursor++;
}
char peekfar(int off, Scanner_t sc){
    fseek(sc.archivo,sc.cursor+off, SEEK_SET);
    return fgetc(sc.archivo);
}