/*
    Tadeo Alejandro Cruz Magallanes
    13/05/2026
    Código en c que crea un fichero y encripta un mensaje
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    FILE *archivo_origen;
    FILE *archivo_destino;
    char caracter;
    int clave = 3; // Desplazamiento para el cifrado

    // 1. Abrir archivo de lectura y validar
    archivo_origen = fopen("mensaje.txt", "r");

    if (archivo_origen == NULL) 
    {
        printf("Error: No se pudo abrir mensaje.txt\n");
        return 1;
    }

    // 2. Abrir archivo de escritura y validar
    archivo_destino = fopen("cifrado.txt", "w");
    if (archivo_destino == NULL) 
    {
        printf("Error: No se pudo crear cifrado.txt\n");
        fclose(archivo_origen); // Cerrar el ya abierto
        return 1;
    }

    printf("\nCifrando archivo....\n");

    // 3. Leer carácter por carácter hasta el fin del archivo (EOF)
    while ((caracter = fgetc(archivo_origen)) != EOF)
    {
        // Cifrar solo letras mayúsculas
        if (caracter >= 'A' && caracter <= 'Z') 
        {
            caracter = ((caracter - 'A' + clave) % 26) + 'A';
        }
        // Cifrar solo letras minúsculas
        else if (caracter >= 'a' && caracter <= 'z') 
        {
            caracter = ((caracter - 'a' + clave) % 26) + 'a';
        }
        // Escribir el carácter (cifrado o no) en el destino
        fputc(caracter, archivo_destino);
    }

    // 4. Cerrar ambos flujos de datos
    fclose(archivo_origen);
    fclose(archivo_destino);

    printf("Archivo generado con exito....\n");

    return 0;
}
