#include <stdio.h>
#include <scanner.h>
#include <string.h>

int peek(Scanner_t sc){
    return sc.bufer[sc.cursor];
}
void advance(Scanner_t* sc){
    sc->cursor++;
}
int peekfar(int off, Scanner_t sc){
    int tmp_cursor = sc.cursor;
    tmp_cursor ++;
    return sc.bufer[tmp_cursor];

}
void peek_until_space(Scanner_t *sc, char * cadena){
    int count = 0;
    while (sc->bufer[sc->cursor+count]!=32) {
        count ++;
    }
    for (count; -1<count; count--){
        cadena[count]=sc->bufer[sc->cursor+count];
    }
}