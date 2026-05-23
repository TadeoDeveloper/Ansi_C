#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    FILE *archivo; // Apuntador a un archivo
    char caracter; // Para leer los archivos
    int i;
    int numero;

    archivo = fopen("datos.txt", "w"); // Abre para escribir

    if (archivo == NULL)
    {
        printf("Error fatal :(\n");
        return 1; // Finaliza el programa
    }

    printf("Escribiendo archivo....\n");
    fprintf(archivo, "ID: Dato\n");
    fprintf(archivo, "--------\n");

    for(i = 0; i < 100; i++)
    {
        numero = rand()%100;
        fprintf(archivo, "%d %d\n", i, numero);
    }

    printf("Archivo generado con exito....\n");

    return 0;
}