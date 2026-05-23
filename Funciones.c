#include <stdio.h>

void portada()
{
    printf("Hola\n");
}

int suma()
{
    int suma, num1, num2 = 0;

    printf("Dame a: ");
    scanf("%d", &num1);

    printf("Dame b: ");
    scanf("%d", &num2);
    return suma = num1 + num2;
}

int resta()
{
    int resta, num1, num2 = 0;

    printf("Dame a: ");
    scanf("%d", &num1);

    printf("Dame b: ");
    scanf("%d", &num2);
    return resta = num1 - num2;
}

int main()
{
    int resultado;

    portada();
    resultado = suma();
    printf("La suma es: %d\n", resultado);

    resultado = resta();
    printf("La resta es: %d\n", resultado);

    return 0;
}