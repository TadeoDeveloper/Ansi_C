/*
Dado n artículos pedir para cada uno de ellos la cantidad
y el precio y calcular el total a pagar.
*/
#include <stdio.h>

int main() {
    int n = 0; // Articulos
    int i = 0; // Indice
    int cantidad = 0;
    float precio = 0.0f;
    float total = 0.0f;
    

    printf("¿Cuántos artículos desea ingresar?\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Artículo %d cantidad: \n", i);
        scanf("%d", &cantidad);
        printf("Artículo %d precio: \n", i);
        scanf("%f", &precio);
        
        total += cantidad * precio;
    }

    printf("Total a pagar: $%.3f\n", total);

    return 0;
}