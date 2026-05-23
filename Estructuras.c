#include <stdio.h>

int main()
{
    int calificacion = 0;
    printf("Ingresa tu calificación: ");
    scanf("%d", &calificacion);

    if (calificacion == 10)
    {
        printf("Excelente\n");
    }
    else if (calificacion == 9)
    {
        printf("Muy bien\n");
    }
    else if (calificacion == 8)
    {
        printf("Bien\n");
    }
    else if (calificacion == 7)
    {
        printf("Regular\n");
    }
    else if (calificacion == 0 || calificacion <= 6)
    {
        printf("No acreditado\n");
    }
    else
    {
        printf("Error\n");
    }
    
    return 0;
}