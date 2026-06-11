#include <stdio.h>
#include <stdlib.h>
#define TAM 32
typedef char cadena[TAM]; // Definicion tipo de dato cadena


// Prototipo de la función
void registrarProducto();
void consultar_inventario();

int main(int argc, char* argv[])
{
    printf("--- Registro de Inventario ---\n");
    registrarProducto();
    
    return 0;
}

void registrarProducto()
{
    FILE * archivo; // Apuntador a un archivo
    int cantidad;
    float precio;
    cadena nombre;

    archivo = fopen("Inventario", "a");

    if (archivo == NULL)
    {
        printf("Error: el archivo no existe:(\n");
        return;
    }

    // Leer desde la entrada estándar
    printf("Ingrese el nombre del producto: ");
    if (fgets(nombre, sizeof(nombre), stdin) != NULL) {
    }

    printf("Ingresa la cantidad del producto: ");
    scanf("%d", &cantidad);

    printf("Ingresa el precio del producto: ");
    scanf("%.2f", &precio);

    printf("Escribiendo archivo....\n");
    fprintf(archivo, "Nombre del producto: %s", nombre);
    fprintf(archivo, "Nombre del producto: %d", cantidad);
    fprintf(archivo, "Nombre del producto: %f", precio);

    printf("Archivo generado con exito....\n");


    fclose(archivo);

}

void consultar_inventario()
{
    FILE * archivo; // Apuntador a un archivo

    archivo = fopen("Inventario", "r");

    if (archivo == NULL)
    {
        printf("Error: el archivo no existe:(\n");
        return;
    }


}
