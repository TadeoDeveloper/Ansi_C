/*
    Alumno: Tadeo Alejandro Cruz Magallanes
    Fecha: 08/04/2026
    Este es un programa en c que usa un bucle for para calcular el monto
    que da cada venta que tiene una tienda.
*/
#include <stdio.h>

// Prototipos de funciones
float mostrar(float total, float monto);
void mostrarResultados(float total, int ventasValidas);

int main() {
    int n = 0; // Ventas
    int i = 0;
    int ventasValidas = 0;
    float monto = 0.0f;
    float total = 0.0f;
    
    printf("¿Cuántos ventas desea ingresar?\n");
    scanf("%d", &n);

    // Bucle for
    for (i = 1; i <= n; i++) 
    {
       printf("Venta: %d\n", i);
       printf("Ingresa el monto: ");
       scanf("%f", &monto);
       /*
        Flujos de control que validan que el monto sea > 0
        y que de un error si intentas poner 0 de monto.
       */ 
       if (monto > 0)
       {
            total = mostrar(total, monto);
            ventasValidas++;
       }
       else if (monto == 0)
       {
           printf("Error: El monto no puede ser cero.\n");
       }
       else
       {
           printf("Error: El monto no puede ser negativo.\n");
       }
    }
    mostrarResultados(total, ventasValidas);

    return 0;
}

// Funciones 
float mostrar(float total, float monto)
{
    return total = total + monto;
}

void mostrarResultados(float total, int ventasValidas)
{
    printf("\n");
    printf("RESUMEN DE OPERACIONES\n");
    printf("Ventas mayores a 0: %d\n", ventasValidas);
    printf("Total recaudado: $%.2f\n", total);
}

