#include <stdio.h>

typedef struct Estudiante {
char nombre[20];
int edad;
float promedio;
} Estudiante;

void capturar(Estudiante *E);
void imprimir(Estudiante *E);


int main(int argc, char* argv[])
{
    Estudiante alumno;
    capturar(&alumno);
    imprimir(&alumno);

    return 0;
}

void capturar(Estudiante *E)
{
    printf("Dame los datos: \n");

    printf("Nombre: ");
    scanf("%s", (*E).nombre);

    printf("Edad: ");
    scanf("%d", &(*E).edad);

    printf("Promedio: ");
    scanf("%f", &(*E).promedio); // scanf("%f" ,&E->promedio)
}

void imprimir(Estudiante *E)
{
    printf("Los datos son: ");
    printf("Nombre: %s\n", E->nombre);
    printf("Edad: %d\n", E->edad);
    printf("Promedio: %f\n", E->promedio);
}

