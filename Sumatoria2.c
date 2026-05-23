// Programa que usar for para calcular los visitantes en 30 dias
#include <stdio.h>

int main() {
    int visitantes = 200;
    int total = 0;

    for (int i = 0; i < 30; i++) {
        total += visitantes;
        visitantes++; // aumenta en 1 cada día
    }

    printf("Total de visitantes en 30 dias: %d\n", total);

    return 0;
}