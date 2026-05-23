#include <stdio.h>

// Prototipos de funciones (encabezado)
void portada();
int suma(int num1, int num2);
int resta(int num1, int num2);
float division(float num1, float num2);

int main()
{
    int resultado, num1, num2;
    float resultado1;
    printf("Dame a: ");
    scanf("%d", &num1);
    printf("Dame b: ");
    scanf("%d", &num2);

    printf("Dame a: ");
    scanf("%d", &num1);
    printf("Dame b: ");
    scanf("%d", &num2);

    printf("Dame a: ");
    scanf("%d", &num1);
    printf("Dame b: ");
    scanf("%d", &num2);

    portada();
    resultado = suma(num1, num2);
    printf("La suma es: %d\n", resultado);

    resultado = resta(num1, num2);
    printf("La resta es: %d\n", resultado);

    resultado = division(num1, num2);
    printf("La division es: %.2f\n", resultado1);


    return 0;
}

void portada()
{
    printf("Hola\n");
}

int suma(int num1, int num2)
{
    int suma;
    return suma = num1 + num2;
}

int resta(int num1, int num2)
{
    int resta;
    return resta = num1 - num2;
}

float division(float num1, float num2)
{
    float division;
    return division = num1 / num2;
}