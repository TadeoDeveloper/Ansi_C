#define TAM 32
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
typedef char cadena[TAM]; // Definicion tipo de dato cadena

int main(int argc, char* argv[])
{
    cadena password;
    cadena secreto;

    strcpy(secreto, "hola123");

    printf("Dame tu password: ");
    scanf("%s", password);

    if(strcmp(secreto, password))
    printf("Acceso denegado\n");

    else
    printf("Adelante!!\n");

    return 0;

}
