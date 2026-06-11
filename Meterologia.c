#include <stdio.h>
#include "Monitoreo.h" // Mi libreria

int main(int argc, char* argv[])
{
    int n = 3; // Cantidad de estaciones
    Monitoreo monitoreo[3];

    printf("--- CAPTURA DE DATOS ---\n");
    // 1. Ciclo para capturar las 3 estaciones
    for(int i = 0; i < n; i++) {
        printf("\nEstacion %d:\n", i + 1);
        // Le pasamos la dirección de memoria específica de cada posición
        capturar(&monitoreo[i]); 
    }

    // 2. Llamamos a la función para ordenar
    ordenar(monitoreo, n);

    printf("\n--- DATOS ORDENADOS POR TEMPERATURA ---\n");
    // 3. Ciclo para imprimir las 3 estaciones ya ordenadas
    for(int i = 0; i < n; i++) {
        imprimir(&monitoreo[i]);
        printf("\n"); // Un salto de línea para separar cada estación
    }

    return 0;
}

