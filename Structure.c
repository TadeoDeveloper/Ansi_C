#include <stdio.h>
#include <string.h>

#define TAM 32
typedef char cadena[TAM];

// Estructura
typedef struct Estudiante 
{
    int matricula;
    cadena nombre;
    cadena carrera;
    float promedio;
    cadena direccion;

}Estudiante;

// Prototipos de 
void llenarDatos(Estudiante e[], int n);
void imprimirDatos(Estudiante e[], int n);

int main(int argc, char* argv[])
{
    int n;

    printf("Cuantos estudiantes deseas ingresar: "),
    scanf("%d", &n);

    Estudiante estudiante[n];

    llenarDatos(estudiante, n);
    imprimirDatos(estudiante, n);

    return 0;
}

void llenarDatos(Estudiante e[], int n)
{
    for (int i = 0; i < n; i++)
    {   
        e[i].matricula = i + 1;
        printf("Capturando estudiante %d\n", i+1);

        printf("Ingresa la matricula del estudiante: ");
        scanf("%d", &e[i].matricula);

        printf("Ingrese el nombre del estudiante: ");
        scanf("%s", e[i].nombre);

        printf("Ingresa la carrera del estudiante: ");
        scanf("%s", e[i].carrera);

        printf("Ingresa el promedio del estudiante: ");
        scanf("%f", &e[i].promedio);

        printf("Ingresa la direccion del estudiante: ");
        scanf("%s", e[i].direccion);
    }
}

void imprimirDatos(Estudiante e[], int n)
{
    printf("*** Impresion de lista de alumnos ***\n");
    for (int i = 0; i < n; i++)
    {
        printf("Nombre: %s\n", e[i].nombre);
        printf("Carrera: %s\n", e[i].carrera);
        printf("Promedio: %.2f\n", e[i].promedio);
        printf("Direccion: %s\n", e[i].direccion);
    }
}