#define TAM 32
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
typedef char cadena[TAM]; // Definicion tipo de dato cadena

int main(int argc, char* argv[])
{
    cadena password;

    int i;
    int num;
    int tam;

    tam = atoi(argv[1]);

    srand(time(NULL)); // Semilla
    for (i = 0; i < tam; i++)
    {
        num = rand()%93 + 33;
        password[i] = num;
    }

    printf("Tu password sugerido es: %s\n", password);

    return 0;

}
