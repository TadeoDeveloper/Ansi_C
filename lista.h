// Libreria que contiene el nodo y la lista

#ifndef lista_h
#define lista_h

#include "folios.h"

typedef struct Nodo
{
   Folios folios; // Esto es el contenido de cada nodo
   struct Nodo* siguiente; // Apuntador al siguiente nodo ->
    
}Nodo;

typedef struct Lista 
{
    Nodo* cabeza; // Apuntador a la cabeza de la lista
    int itam; // Tamaño de la lista
}Lista;

// Prototipos
void insertarInicio(Lista* lista, Folios* folios);
Nodo * CrearNodo(Folios* folios);
void imprimeLista(Lista* lista);
void insertarFinal(Lista* lista, Folios* folios, int n);

#endif