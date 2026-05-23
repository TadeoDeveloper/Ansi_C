/*
    Tadeo Alejandro Cruz Magallanes
    15/04/2026
    Programa en c que usa arreglos para poder hacer varias operaciones con ellos
    como imprimir el arreglo, sacar su promedio y comparar la edad del usuario con
    el arreglo
*/

#include <stdio.h>

// Prototipo de la función
void imprimirArreglo(int n[], int capacidad);
float promedio(int n[], int capacidad);
void comparacion(int n[], int capacidad);

int main()
{
    int edades[5] = {19, 20, 18, 15, 40}; // Arreglo inicializado en 5

    imprimirArreglo(edades, 5); // Llamada ala función

    float resultado = promedio(edades, 5); // Llamada ala función
    printf("El promedio de las edades es: %.2f\n", resultado); 

    comparacion(edades, 5); // Llamada ala función

    return 0;
}

// Funciones 
void imprimirArreglo(int n[], int capacidad)
{
    printf("Edades en el arreglo:\n");

    for (int i = 0; i < capacidad; i++)
    {
        printf("Indice %d: %d\n", i, n[i]);
    }
}

float promedio(int n[], int capacidad)
{
    int suma = 0;
    
    for (int i = 0; i < capacidad; i++)
    {
        suma += n[i]; // Sumamos cada edad: suma = suma + n[i]
    }
    
    return (float)suma / capacidad;
}

void comparacion(int n[], int capacidad)
{
    int edad = 0;
    int contador = 0; // Se necesita contar cuántas veces aparece

    printf("¿Cual es tu edad? \n");
    scanf("%d", &edad);

    for (int i = 0; i < capacidad; i++)
    {
        // Se compara la edad del usuario con el contenido del arreglo n[i]
        if (edad == n[i])
        {
            contador++; // Si coincide, se aumenta el contador
        }
    }
    printf("Alumnos que tienen tu edad: %d\n", contador);
}
