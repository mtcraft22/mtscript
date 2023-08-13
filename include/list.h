#ifndef list
#define list 
#include "token.h"

typedef struct nodo
{
	Token_t v;
	struct nodo* siguiente;	
}Nodo_t;

typedef struct li
{
	Nodo_t* cabeza;
    int Longitud;
	
}Lista_t;

Nodo_t* crear_nodo(Token_t* dato);

void destruir_nodo(Nodo_t* nodo);
void Insertar_pricipio(Lista_t* lista, Token_t* dato);
void Insertar_final(Lista_t* lista, Token_t* dato);
void Insertar_Despues(int n, Lista_t* lista, Token_t* dato);

Token_t* obtener(Lista_t* Lista, int n);

int Longitud(Lista_t* lista);
void Elimina_final(Lista_t* lista);
void Elimina_enmedio(Lista_t* lista, int n);

void por_cada(Lista_t* lista , void(*funcion)(Token_t* dato));
void destructor(Lista_t *lista);



#endif //final list