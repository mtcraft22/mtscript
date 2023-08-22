#include <stdio.h>
#include <stdlib.h>
#include <list.h>
#include <token.h>

Nodo_t* crear_nodo(Token_t* dato){
	Nodo_t* nodo = (Nodo_t*)malloc(sizeof(Nodo_t));
	nodo->v = *dato;
	return nodo;
}

void destruir_nodo(Nodo_t* nodo){
	free(nodo);
}

void Insertar_pricipio(Lista_t* lista, Token_t* dato){
	Nodo_t* nodo=crear_nodo(dato);
	nodo->siguiente=lista->cabeza;
	lista->cabeza=nodo;
	lista->Longitud++;
}

void Insertar_final(Lista_t* lista, Token_t* dato){
	Nodo_t* nodo=crear_nodo(dato);
	if (lista->cabeza==NULL){
		lista->cabeza= nodo;
	}else{
		Nodo_t* actual=lista->cabeza;
		while (actual->siguiente)
		{
			actual=actual->siguiente;
		}
		actual->siguiente=nodo;
	}
	lista->Longitud++;
}

void Insertar_Despues(int n, Lista_t* lista, Token_t* dato){
	Nodo_t* nodo=crear_nodo(dato);
	if (lista->cabeza==NULL){
		lista->cabeza= nodo;
	}else{
		int contador=0;
		Nodo_t* actual=lista->cabeza;
		while (actual->siguiente && contador<n )
		{
			actual=actual->siguiente;
			contador++;
		}
		nodo->siguiente=actual->siguiente;
		actual->siguiente=nodo;
	}
	lista->Longitud++;

}

Token_t* obtener(Lista_t* lista, int n){
	if (lista->cabeza==NULL){
		return NULL;
	}else{
		int contador=0;
		Nodo_t* actual=lista->cabeza;
		while (actual->siguiente && contador<n )
		{
			actual=actual->siguiente;
			contador++;
		}
		if (contador!=n){
			return NULL;
		}else{
			return &actual->v;
		}
	}
}

int Longitud(Lista_t* lista){return lista->Longitud;}
void Elimina_pricipio(Lista_t* lista){
	if (lista->cabeza){
		Nodo_t* eliminar = lista->cabeza;
		lista->cabeza=eliminar->siguiente;
		destruir_nodo(eliminar);
		lista->Longitud--;
	}
	
}

void Elimina_final(Lista_t* lista){
	if (lista->cabeza){
		if (lista->cabeza->siguiente){
			Nodo_t* actual=lista->cabeza;
			while (actual->siguiente->siguiente)
			{
				actual=actual->siguiente;
			}
			Nodo_t* eliminado = actual->siguiente;
			actual->siguiente=NULL;
			destruir_nodo(eliminado);
		}else{
			Nodo_t* eliminado= lista->cabeza;
			lista->cabeza=NULL;
			destruir_nodo(eliminado);
		}
	}
	lista->Longitud--;
}

int Elimina_enmedio(Lista_t* lista, int n){
	if(lista->cabeza){
		if (n==0){
			Elimina_pricipio(lista);
			return 1;
		}else if (n<Longitud(lista)){
			Nodo_t* actual=lista->cabeza;
			int contador=0;
			while (actual->siguiente && contador<(n-1))
			{
				actual=actual->siguiente;
				contador++;
			}
			Nodo_t* eliminado = actual->siguiente;
			actual->siguiente=eliminado->siguiente;
			destruir_nodo(eliminado);
			lista->Longitud--;
			return 1;
		}else {
			return 0;
		}
	}else {
		return 0;
	}
}

void por_cada(Lista_t* lista , void(*funcion)(Token_t* dato)){
	Nodo_t* actual=lista->cabeza;
	while (actual->siguiente)
	{
		funcion(&actual->v);
		actual=actual->siguiente;
	}
	funcion(&actual->v);
}

/*
	desalocate the tokens list
*/
void destructor(Lista_t *lista){
	Nodo_t* actual=lista->cabeza;
	int i=0;
	while (Longitud(lista)>0) {
		Elimina_pricipio(lista);
	}		
}

