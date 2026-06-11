#ifndef Monitoreo_h
#define Monitoreo_h
#include <stdio.h>

// Tipo de dato estructura 
typedef struct Monitoreo {
    int id;
    float temperatura;
    float humedad;
    char fecha[20];
} Monitoreo;

// Funcion para capturar los datos de la estación
void capturar(Monitoreo *M)
{
    printf("ID: ");
    scanf("%d", &M->id);

    printf("Temperatura: ");
    scanf("%f", &M->temperatura);

    printf("Humedad: ");
    scanf("%f", &(*M).humedad); 

    printf("Fecha: ");
    scanf("%s", M->fecha);
}

// Funcion para imprimir los datos de la estacion
void imprimir(Monitoreo *M)
{
    printf("ID: %d\n", M->id);
    printf("Temperatura: %.2f\n", M->temperatura);
    printf("Humedad: %.2f\n", M->humedad);
    printf("Fecha: %s\n", M->fecha);
}

// Ordenamiento con bubble sort
void ordenar(Monitoreo monitoreo[], int n)
{
    Monitoreo temporal; // Variable de apoyo para el intercambio

    // Ciclo externo: usa 'n' para saber cuántas vueltas dar
    for(int i = 0; i < n - 1; i++) {
        // Ciclo interno: usa 'n' y le resta 'i' por optimización
        for (int j = 0; j < n - i - 1; j++) { 
            
            if (monitoreo[j].temperatura > monitoreo[j+1].temperatura) {
                temporal = monitoreo[j]; 
                monitoreo[j] = monitoreo[j+1]; 
                monitoreo[j+1] = temporal; 
            }
        }
    }
}

#endif