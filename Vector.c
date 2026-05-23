#include <stdio.h>

#define TAM 50000

int main(int agrc, char *agrv[])
{
    int i;
    int arreglo[TAM];

    for(i = 0; i < TAM; i++)
    {
        arreglo[i] = i;
    }

    for(i = 0; i < TAM; i++)
    {
        printf("%d\n", arreglo[i]);
    }

}