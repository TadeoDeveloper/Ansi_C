/*
    Tadeo Alejandro Cruz Magallanes
    06/05/2026
    Programa en C que usa funciones para obtener n
    calificaciones y poder hacer un promedio de estas.
*/

#include <stdio.h>

// Prototipo de funcion (encabezado).
void llenarArreglo(float p[], int n);
float promedio(float p[], int tam);

int main()
{
    // Tamaño n 
    int n;

    printf("Cuantas calificaciones desea ingresar: ");
    scanf("%d", &n);

    // Arreglo que toma el valor n ingresado por el usuario para definir su tamaño
    float prom [n]; 

    // Llamada a las funciones
    llenarArreglo(prom, n);
    float resultado = promedio(prom, n);
    printf("El promedio es: %.2f\n", resultado);

    return 0;
}

// Funcion que pide n calificaciones y las guarda.
void llenarArreglo(float p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese la calificacion %d: ", i + 1);
        scanf("%f", &p[i]); // Se guarda en la posición 'i
    }
}

// Funcion que saca el promedio de n calificaciones dadas por el usuario.
float promedio(float p[], int tam)
{
    float sum = 0;
    
    for (int i = 0; i < tam; i++)
    {
        sum += p[i];
    }
        
    return sum / tam;
}
