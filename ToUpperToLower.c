/*
    Tadeo Alejandro Cruz Magallanes
    2/06/2026
    Programa en c que usa la libreria <ctype.h> para
    poder convertir una cadena de caracteres a
    minusculas o mayusculas, segun la entrada del
    usuario.
*/

#include <stdio.h>
#include <ctype.h> // Libreria que incluye las funciones: toupper y tolower
#define TAM 32
typedef char cadena[TAM];

// Plantillas (prototipos) de funciones
void upperCase(cadena string);
void lowerCase(cadena string);

int main()
{
    int opcion = 0;
    cadena string;

    printf("***** Menu *****\n");
    printf("1. Mayusculas\n");
    printf("2. Minusculas\n");
    printf("3. Salir\n");
    printf("Introduce el numero de la opcion que quieras escoger\n");
    scanf("%d", &opcion);

    if (opcion == 3)
    {
        return 1;
    }

    printf("Pon la cadena que quieras convertir: ");
    scanf("%s", string);

    if (opcion == 1) 
    {
        upperCase(string);
    }
    else if (opcion == 2) 
    {
        lowerCase(string);
    }
    else {
        printf("Porfavor pon una opcion valida");
    }

    return 0;
}

// Funcion que convierte una cadena de caracteres a mayusculas
void upperCase(cadena string)
{
    // Recorre la cadena original para convertirla a mayusculas
    for (int i = 0; string[i] != '\0'; i++) 
    {
        string[i] = toupper(string[i]);
        printf("%c", string[i]);
    }
}

// Funcion que convierte una cadena de caracteres a minusculas
void lowerCase(cadena string)
{
    // Recorre la cadena original para convertirla a mminusculas
    for (int i = 0; string[i] != '\0'; i++) 
    {
        string[i] = tolower(string[i]);
        printf("%c", string[i]);
    }
}

