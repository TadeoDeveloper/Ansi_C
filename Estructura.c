/*
    Tadeo Alejandro Cruz Magallaness
    29/04/2026
    Programa en c que usa estructuras 
    para llenar los datos de un cliente
    e imprimirlos
    Actividad 02.03
*/
#include <stdio.h>
#include <string.h>

#define TAM 32
typedef char cadena[TAM];

// Estructura
typedef struct Cliente 
{
    int id;
    cadena nombre;
    int edad;
    float prestamos;
    float saldo;

}Cliente;

// Prototipos o Encabezados
void llenarDatos(Cliente c[], int n);
void imprimirDatos(Cliente c[], int n);

int main(int argc, char* argv[])
{
    int n;
    printf("Cuantos clientes tienes: ");
    scanf("%d", &n);

    // Creación del "objeto"
    Cliente clientes[n];

    //Llamada a las funciones
    llenarDatos(clientes, n);
    imprimirDatos(clientes, n);
  
    return 0;
}

void llenarDatos(Cliente c[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        c[i].id = i + 1;
        printf("Capturando estudiante %d\n", i+1);
        printf("Nombre: ");
        scanf("%s", c[i].nombre);

        printf("Edad: ");
        scanf("%d", &c[i].edad);

        printf("Prestamo: ");
        scanf("%f", &c[i].prestamos);

        printf("Saldo: ");
        scanf("%f", &c[i].saldo);
        printf("\n");
    }
}

// Funciones
void imprimirDatos(Cliente c[], int n)
{
    int opcion;
    int i = 0;

    printf("*** Menu *** \n");
    printf("1. Nombre\n");
    printf("2. ID\n");
    printf("3. Edad\n");
    printf("4. Prestamos\n");
    printf("5. Saldo\n\n");
    printf("Cual dato quieres consultar: ");
    scanf("%d", &opcion);
        
    if (opcion == 1)
    {
        printf("Nombre: %s\n", c[i].nombre);
    }
    else if (opcion == 2)
    {
        printf("Id: %d\n", c[i].id);
    }
    else if (opcion == 3)
    {
        printf("Edad: %d\n", c[i].edad);
    }
    else if (opcion == 4)
    {
        printf("Prestamo: %.2f\n", c[i].prestamos);
    }
    else if (opcion == 5)
    {
        printf("Saldo: %.2f\n", c[i].saldo);
    }
    else
    {
        printf("Por favor pon una opcion valida");
    }   
}



