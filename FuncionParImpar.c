/*
    Tadeo Alejandro Cruz Magallanes
    06/05/2026
    Programa que usa una funcion para decidir 
    si un numero es par o impar en base a un
    array.
*/

#include <stdio.h>

// Prototipo de funcion (encabezado).
void numeroPar(int n[], int tam);

int main()
{
    int numeros [11] = {0, 1, 2, 3, 4, 5, 6, 7 ,8, 9, 10};
    numeroPar(numeros, 11);
    return 0;
}

// Funcion principal que decide si un numero es par o impar.
void numeroPar(int n[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        if (n[i] % 2 == 0)
        {
            printf("El numero %d es par\n", n[i]);
        } 
        else
        {
            printf("El numero %d es impar\n", n[i]);
        }
    }
}