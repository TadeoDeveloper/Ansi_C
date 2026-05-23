#include <stdio.h>

int main(int argc, char* argv[])
{
    FILE *archivo; // Apuntador a un archivo
    char caracter; // Para leer los archivos
    int i = 0;
    int arreglo[50]; // Arreglo para guardar datos

    archivo = fopen("Examen.txt", "r"); // Abre para leer

    if (archivo == NULL)
    {
        printf("Error fatal :( el archivo no existe\n");
        return 1; // Finaliza el programa
    }

    // Mientras no llegue al final
    while((fscanf(archivo, "%d", &arreglo[i]))!=EOF)
    {
        i++;
    }

    for (i = 0; i < 50; i++)
    {
        printf("%d\n", arreglo[i]);
    }

    return 0;
}