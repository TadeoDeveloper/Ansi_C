/*
    Tadeo Alejandro Cruz Magallanes
    25/03/2026
    Este código usa funciones para calcular el area de un circulo
    un rectangulo y un triangulo.
*/

#include <stdio.h>

// Prototipos de funciones (encabezado)
void saludo();
float AreaCirculo(float radio);
float areaRectangulo(float base, float altura);
float areaTriangulo(float base, float altura);

int main()
{
    float resultado, base, altura, radio;

    printf("Dame el radio de tu circulo: ");
    scanf("%f", &radio); // Pedida de datos

    printf("Dame la base de tu rectangulo: ");
    scanf("%f", &base); // Pedida de datos
    printf("Dame la altura de tu rectangulo: ");
    scanf("%f", &altura); // Pedida de datos

    printf("Dame la base de tu triangulo: ");
    scanf("%f", &base); // Pedida de datos
    printf("Dame la altura de tu triangulo: ");
    scanf("%f", &altura); // Pedida de datos

    saludo(); // Llamada a la función de saludo

    resultado = AreaCirculo(radio); // Llamada a la función de area del circulo
    printf("El area de tu circulo es: %.2fcm2\n", resultado);

    resultado = areaRectangulo(base, altura); // Llamada a la función de area del rectangulo
    printf("El area de tu rectangulo es: %.2fcm2\n", resultado);

    resultado = areaTriangulo(base, altura); // Llamada a la función de area del triangulo
    printf("El area de tu triangulo es: %.2fcm2\n", resultado);


    return 0;
}

// Funciones
void saludo()
{
    printf("Hola, ¿Como estas? \n");
}

float AreaCirculo(float radio)
{
    float area;
    return area = 3.14159 * (radio * radio);
}

float areaRectangulo(float base, float altura)
{
    float area;
    return area = base * altura;
}

float areaTriangulo(float base, float altura)
{
    float area;
    return area = (base * altura) / 2;
}