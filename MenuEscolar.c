/*
    Alumnos: Tadeo Alejandro Cruz Magallanes, José Juan Ramírez Jauregui
    Progama prototipo en el que solo diseñamos la interfaz del programa 
    y por el momento no tiene funcionalidad.
*/

#include <stdio.h>

// Prototipos de funciones (encabezado)
void menu();
void menu_alta();

int main()
{
    int opcion;
    menu(); // Llamada a la función menu
    menu_alta(); // Llama a la función menu alta

    return 0;
}

void menu() // Función con tipo de retorno void, por que no devuelve ningun valor y solo imprime el menu
{
    int opcion;

    printf("Menú de opciones\n");
    printf("1. Alta de estudiantes\n");
    printf("2. Baja de estudiantes\n");
    printf("3. Modificaciones de estudiantes\n");
    printf("4. Búsquedas de estudiantes\n");
    printf("5. Salir\n\n");

    printf("Seleccione una opción entre [1…5]: ");
    scanf("%d", &opcion);
    printf("\n\n");
}

void menu_alta() // Función con tipo de retorno void, por que no devuelve ningun valor y solo imprime el menu despegable
{
    printf("Ingrese la matricula del estudiante: \n");
    printf("Ingrese el nombre\n");
    printf("Ingrese al apellido paterno\n");
    printf("Ingrese el apellido materno\n");
    printf("Ingrese la carrera\n");
    printf("Ingrese el correo electrónico\n");
    printf("Ingrese el teléfono\n");
}
