/*
Este programa usa un bucle for para contar numeros del 
1 al 70 y determina mediante if y else, si el numero es 
par o impar.
*/
#include <stdio.h>

int main()
{
    int i;
    printf("Este programa cuenta del 1 al 70 e imprime si es par o impar");

    for(i = 0; i <= 70; i++)
    {
    if (i % 2 == 0)
    {
        printf("El numero es par: %d\n", i);
    }
    else
    {
        printf("El numero es impar: %d\n", i);

    }
    }

    
    return 0;
}