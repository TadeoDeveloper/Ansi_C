#include <stdio.h>

int main() 
{
    float celsius = 25.0f;
    double fahrenheit;
    fahrenheit = (celsius * 9.0/5.0) + 32.0; // Formula para convertir Celsius a Fahrenheit

    printf("%.1f degrees Celsius is equal to %.1f degrees Fahrenheit", celsius, fahrenheit); // Imprime las variables  
    return 0;
}