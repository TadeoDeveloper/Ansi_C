#include <stdlib.h>
#include "lista.h"

int main(int argc, char* argv[])
{
    int itam; // Para saber el tamaño de la lista
    int i;
    Lista lista; // Creo la lista
    Folios folios; // El contenio de la lista

    lista.itam = 0; // Inicio el tamaño de la listaen 0
    lista.cabeza = NULL; // La cabeza apunta a NULL ->

    imprimeLista(&lista); // Imprime la lista

    for(i = 0; i < 10; i++) {
        folios.ifolio = 10*i;
        insertarInicio(&lista, &folios); // Inserta nodo al inicio de la lista
    }

    for(i = 0; i < 10; i++) {
        folios.ifolio = 10*i;
        insertarFinal(&lista, &folios, i); // Inserta nodo al inicio de la lista
    }
    
    imprimeLista(&lista); // Imprime la lista

    return 0;
}

void imprimeLista(Lista* lista)
{
    printf("Imprimiendo la lista\n");
    int n = 0;

    if (lista->cabeza == NULL)
    {
        printf("No se puede imprimir esta vacia!!\n");
    } else {
        Nodo* puntero = lista->cabeza;
        while(puntero->siguiente) { // while()
            puntero = puntero->siguiente; // Lo recorro
            printf("[%d] -> %d\n", n++, puntero->folios.ifolio);
        }
    }
}

Nodo * CrearNodo(Folios* folios) 
{
    printf("Creando nodo de la nada...\n");
    Nodo* nodo = (Nodo*)malloc(sizeof(Nodo)); // Aparta memoria
    nodo->folios.ifolio = folios->ifolio; // Informacion
    nodo->siguiente = NULL; // Apuntador a nodo

    return nodo;
    printf("[Ok]\n");

}

void insertarInicio(Lista* lista, Folios* folios)
{
    printf("Insertando nodo al inicio...\n");
    Nodo* nodo = CrearNodo(folios); // Creo nodo de la nada
    nodo->siguiente = lista->cabeza; // Lo apunto a la cabeza
    lista->cabeza = nodo; // Recorro a la cabeza
    lista->itam++; // Incremento 
    printf("[Ok]\n");
}

void insertarFinal(Lista* lista, Folios* folios, int n)
{
    printf("Insertar nodo final\n");
    Nodo* nodo = CrearNodo(folios); // Si la lista está vacía, el nuevo nodo es la cabeza

    if (lista->cabeza == NULL) // Si la lista esta vacía, el nuevo nodo es la cabeza
    {
        lista->cabeza = nodo;
    } else { // Recorri hasta el ultimo nodo
        Nodo* puntero = lista->cabeza;
        while(puntero->siguiente != NULL) { // while()
            puntero = puntero->siguiente;
    }
        puntero->siguiente = nodo; // Apunto el último nodo al nuevo
    }
    lista->itam++; // Incrementa el tamaño
    printf("[Ok]\n");
}

