#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * archivo;
    int numero;

    archivo = fopen("Examen.txt", "w");

    if (archivo == NULL)
    {
        printf("Error fatal :(\n");
        return 1;
    }

    printf("Escribiendo archivo...\n");
    fprintf(archivo, "Imprime numeros del 1 al 100: ");

    for (int i = 0; i < 101; i++)
    {
        numero = rand()%100;
        fprintf(archivo, "%d %d\n", i, numero);
    }

    printf("Archivo generado con exito...\n");

    return 0;
}