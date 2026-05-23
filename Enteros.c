/* 
Programa que pide una input y determina mediante
if y else si el numero es par o impar
*/
#include <stdio.h>

int main()
{
    int num = 0;
    printf("Pon un numero el cual quieras saber si es par o impar: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("El numero %d es par\n", num);
    }
    else
    {
        printf("El numero %d es impar\n", num);

    }
    return 0;
}