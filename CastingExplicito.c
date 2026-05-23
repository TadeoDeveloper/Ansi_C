#include <stdio.h>

int main() {
    // Variable original
    double temperature = 98.6;
    // Casting explícito: convertir double a int
    int whole_part = (int) temperature;

    // Imprimir temperature antes del casting
    printf("Original temperature: %.1f\n", temperature);
    // Imprimir temperature despues del casting
    printf("Whole part: %.d\n", whole_part);
    return 0;
}