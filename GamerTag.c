/*
    Tadeo Alejandro Cruz Magallanes
    29/Mayo/2026
    Programa en c propuesto por mi para usar la manipulación
    de strings para generar un gamerTag.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Define un TAM de tamaño 100
#define TAM 100
// Cree el tipo de dato cadena con el valor de TAM(100)
typedef char cadena[TAM];

int main()
{
    int num;
    int indice;
    int tam = 10;
    cadena nombre, color, fechaDeNacimiento;

    // Array
    cadena gamerTag[5] = {"Crypto", "Hacker", "Papu", "Draco", "Satan"};

    printf("Cual es tu nombre: ");
    scanf("%s", nombre);
    
    printf("Cual es tu color favorito: ");
    scanf("%s", color);

    printf("Cual es tu año de nacimiento: ");
    scanf("%s", fechaDeNacimiento);
    printf("\n");

    // Uni nombre y color en un solo string
    strcat(nombre, color);

    srand(time(NULL)); // Semilla

    // Bucle for que genera 10 gamerTags
    for (int i = 0; i < tam; i++)
    {
        // Escoge numero semiAleatorios
        num = rand()%500;

        // Indice para escoger un string aleatorio de mi lista(array): gamerTag
        indice = rand()%5;

        printf("GamerTag: %s", nombre);
        printf("%c%c", fechaDeNacimiento[2], fechaDeNacimiento[3]);
        printf("%d", num);
        printf("%s\n", gamerTag[indice]); // Imprime un gamerTag aleatorio de mi lista (array)
    }

    
    return 0;
}