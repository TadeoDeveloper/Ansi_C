#include <stdio.h>

int main(int argc, char* argv[])
{
    FILE *archivo; // Apuntador a un archivo
    char caracter; // Para leer los archivos
    int i;
    int arreglo[50]; // Arreglo para guardar datos

    archivo = fopen("Examen.txt", "r"); // Abre para leer

    if (archivo == NULL)
    {
        printf("Error fatal :( el archivo no existe\n");
        return 1; // Finaliza el programa
    }

    // Mientras no llegue al final
    while((caracter = fgetc(archivo)!=EOF))
    {
        printf("%c", caracter);
    }

    return 0;
}