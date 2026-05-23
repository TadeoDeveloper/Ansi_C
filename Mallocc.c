#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;

    // Codigo para saber el tamaño de un tipo de dato
    // x = sizeof(int);

    // Tamaño de una variable entera
    a = (int*)malloc(sizeof(int));

    *a = 5;

    printf("%p", a);

    return 0;
}