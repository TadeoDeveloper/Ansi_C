/*
    27/Mayo/2026
    Tadeo Alejandro Cruz Magallanes
    strings, cadenas
*/
#define TAM 32
#include <stdio.h>
#include <string.h>
typedef char cadena[TAM]; // Definicion tipo de dato cadena

int main(int argc, char* argv[])
{
    cadena frase;

    int tam; 

    printf("Cual es tu frase: \n");
    scanf("%s", frase);

    printf("Hola tu frase es: %s\n", frase);

    tam = strlen(frase); // Mide el tamaño del string
    printf("%s Tiene: %d letras de tamaño\n", frase, tam);

    printf("La primera letra de tu frase es: %c\n", frase[0]); // Imprime el caracter 0 del string
    return 0;
} 