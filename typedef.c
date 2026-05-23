// Estructuras
#include <stdio.h>
#include <string.h>

#define TAM 32
typedef char cadena[TAM];

typedef struct Estudiante 
{
    cadena nombre;
    int id;
    int edad;
    float promedio;

}Estudiante;

// Prototipos o Encabezados
void capturarEstudiantes(Estudiante e[], int n);
void imprimirEstudiantes(Estudiante e[], int n);

int main(int argc, char* argv[])
{
    int n;
    printf("Cuantos estudiantes tienes: ");
    scanf("%d", &n);

    Estudiante estudiantes[n];

    capturarEstudiantes(estudiantes, n);
    imprimirEstudiantes(estudiantes, n);
  
    return 0;
}

void capturarEstudiantes(Estudiante e[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        e[i].id = i + 1;
        printf("Capturando estudiante %d\n", i+1);
        printf("Nombre: ");
        scanf("%s", e[i].nombre);

        printf("Edad: ");
        scanf("%d", &e[i].edad);

        printf("Promedio: ");
        scanf("%f", &e[i].promedio);
    }
}

void imprimirEstudiantes(Estudiante e[], int n)
{
    int i;
    printf("*** Impresion de lista de alumnos ***\n");
    for(i = 1; i < n; i++)
    {
        printf("Nombre: %s\n", e[i].nombre);
        printf("ID: %d\n", e[i].id);
        printf("Edad: %d\n", e[i].edad);
        printf("Promedio: %.2f\n", e[i].promedio);
    }
}

