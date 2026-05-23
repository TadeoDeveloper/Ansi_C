#include <stdio.h>

int main() {
    int i;
    int sum = 0; // Importante: empezar en 0

    for(i = 1; i <= 10; i++) {
        sum += i; // Es lo mismo que: sum = sum + i;
        printf("Suma acumulada: %d\n", sum);
    }

    return 0;
}
