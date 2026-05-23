/*
    Tadeo Alejandro Cruz Magallanes
    18/04/2026
    Programa en C que usa la recursividad para calcular
    el número vectorial establecido.
*/

#include <stdio.h>

// Prototipo de función, (Uso de long para poder guardar numeros grandes)
long factorial(int n);

int main() 
{
    int numero = 10;
    printf("Factorial de %d es: %ld\n", numero, factorial(numero));
    return 0;
}

// Función recursiva para calcular el factorial,  (Uso de long para poder guardar numeros grandes)
long factorial(int n) 
{
    // 1. Caso Base: La recursión se detiene cuando n es 0 o 1
    if (n <= 1) 
    {
        return 1;
    }
    // 2. Paso Recursivo: La función se llama a sí misma
    else 
    {
        return n * factorial(n - 1);
    }
}
