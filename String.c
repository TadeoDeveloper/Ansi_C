/*
    strings, cadenas
*/
#define TAM 32
#include <stdio.h>
#include <string.h>
typedef char cadena[TAM]; // Definicion tipo de dato cadena

int main(int argc, char* argv[])
{
    cadena nombre, apellido;

    int tam; 

    printf("Como te llamas: \n");
    scanf("%s", nombre);

    printf("Cual es tu apellido: \n");
    scanf("%s", apellido);

    printf("Hola, %s %s\n", nombre, apellido);

    strcat(nombre, apellido);
    tam = strlen(nombre);
    printf("%s Tiene: %d de tamaño\n", nombre, tam);

    printf("La primera letra de tu nombre es: %c\n", nombre[0]);
    return 0;
}