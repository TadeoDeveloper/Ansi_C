/*
    22/04/2026
    Tadeo Alejandro Cruz Magallanes
    Programa que genera una curp
*/

#define TAM 32
#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Libreria para el rand
#include <time.h> // Libreria para el tiempo
typedef char cadena[TAM]; // Definicion tipo de dato cadena

// Prototipos de funciones
void apellido1(cadena apellido1);
void apellido2(cadena apellido2);
void nombre(cadena nombre);
void año(cadena año);
void mes(cadena mes);
void dia(cadena dia);
void genero(cadena genero);
void codigo(cadena codigo);
char obtenerVocal(char palabra[]);

int main(int argc, char* argv[])
{
    char v, consonante;
    int cont;
    int tam;
    int num;
    cadena ap1, ap2, nombre1, año1, mes1, dia1, genero1, codigo1, random;

    printf("Recordatorio: Todos los caracteres van en mayusculas!!\n");

    // Llamadas a las funciones
    apellido1(ap1);  
    apellido2(ap2);
    nombre(nombre1);
    año(año1);
    mes(mes1);
    dia(dia1);
    genero(genero1);
    codigo(codigo1);

    // Print initials before concatenation for clarity
    printf("Tu curp es: ");
    printf("%c%c%c", ap1[0], ap1[1], ap2[0]);
    strcat(ap1, ap2);
    printf("%c", nombre1[0]);
    printf("%c%c", año1[2], año1[3]);
    printf("%c%c", mes1[0], mes1[1]);
    printf("%c%c", dia1[0], dia1[1]);
    printf("%c", genero1[0]);
    printf("%c%c", codigo1[0], codigo1[1]);

    for(int i = 0; i <strlen(ap1); i++)
    {
        v = ap1[i];
        if(v == 'a'||v =='e'||v =='i'||v =='o'||v =='u')
            printf(".");
        else
        {
            cont++;
        if (cont == 2)
            consonante = ap1[i];
        }
    }

    for(int i = 0; i <strlen(ap2); i++)
    {
        v = ap2[i];
        if(v == 'a'||v =='e'||v =='i'||v =='o'||v =='u')
            printf(".");
        else
        {
            cont++;
        if (cont == 2)
            consonante = ap2[i];
        }
    }

    for(int i = 0; i <strlen(nombre1); i++)
    {
        v = nombre1[i];
        if(v == 'a'||v =='e'||v =='i'||v =='o'||v =='u')
            printf(".");
        else
        {
            cont++;
        if (cont==2)
            consonante = nombre1[i];
        }
    }
    
    srand(time(NULL)); // Semilla
    int numero = rand() % 99;
    printf("%d", numero);
}

// Funciones
void apellido1(cadena apellido1)
{
    printf("Cual es tu primer apellido: ");
    scanf("%s", apellido1);
    printf("Primeras dos letras: %c%c\n", apellido1[0], apellido1[1]);
}

void apellido2(cadena apellido2)
{
    printf("Cual es tu segundo apellido: ");
    scanf("%s", apellido2);
    printf("Primera letra: %c\n", apellido2[0]);
}

void nombre(cadena nombre)
{
    printf("Cual es tu nombre: ");
    scanf("%s", nombre);
    printf("Primera letra: %c\n", nombre[0]);
}

void año(cadena año)
{
    printf("Cual es tu año de nacimiento: ");
    scanf("%s", año);
    printf("Ultimos dos dígitos: %c%c\n", año[2], año[3]);
}

void mes(cadena mes)
{
    printf("Cual es tu mes de nacimiento: ");
    scanf("%s", mes);
    printf("Primeros dos dígitos: %c%c\n", mes[0], mes[1]);
}

void dia(cadena dia)
{
    printf("Cual es tu dia de nacimiento: ");
    scanf("%s", dia);
    printf("Primeros dos dígitos: %c%c\n", dia[0], dia[1]);
}

void genero(cadena genero)
{
    printf("Cual es tu genero: ");
    scanf("%s", genero);
    printf("Letra del genero: %c\n", genero[0]);
}

void codigo(cadena codigo)
{
    printf("Cual es el código de tu entidad federativa: ");
    scanf("%s", codigo);
    printf("Código de identidad federativa: %c%c\n", codigo[0], codigo[1]);
}



