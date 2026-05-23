#include <stdio.h>
 
int main()
{
    int i = 0; // Indice y condicion inicial
    int num;

    printf("***** Este programa da las tablas de multiplicar *****\n");

    printf("Dime que tabla quieres: ");
    scanf("%d", &num);
    while (i < 11)
    {
        printf("%d x %d = %d\n", i, num, i * num);
        i++;
    }
    return 0;
}