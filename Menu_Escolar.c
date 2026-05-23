/*
    Proyecto integrador 
    Alumnos: Tadeo Alejandro Cruz Magallanes, José Juan Ramírez Jauregui
    Progama: Altas y bajas de estudiantes.
*/

#include <stdio.h>
#define TAM 40

typedef char cadena [TAM];

// Definimos un nuevo tipo de estructura
typedef  struct Estudiantes{ 
    int Matricula;
    cadena Nombre;
    cadena ApellidoP;
    cadena ApellidoM; //La estructura reqiuiere todos estos datos
    cadena Carrera;
    cadena Correo;
    cadena Telefono;
}Estudiantes;


// Prototipos de funciones (encabezado)
int main();
void MenuAltas(Estudiantes Alumnos[], int *indice); 
void MenuBajas(Estudiantes Alumnos[], int *indice);

int main()
{
    int opcion;
    int indice = 0; //Indice para indicar la posicion del arreglo con la que se esta trabajando
    int a, i;

    Estudiantes Alumnos[50]; //Arreglo de tamaño 50, donde cada posicion guarda los datos necesarios de la estructura creada

// Esta parte del codigo se ejecutara siempre mientras que el usuario no pulse 5
do
{ 
    printf("Menú de opciones\n");
    printf("1. Alta de estudiantes\n");
    printf("2. Baja de estudiantes\n");
    printf("3. Modificaciones de estudiantes\n");
    printf("4. Búsquedas de estudiantes\n");
    printf("5. Salir\n\n");

    printf("Seleccione una opción entre [1…5]: ");
    scanf("%d", &opcion);
    printf("\n");

    if (opcion == 1){
        printf("Cuantos alumnos quieres dar de alta? ");
        scanf("%d", &a);

        for(i = 0; i < a; i++){
        MenuAltas(Alumnos, &indice);
        }
    }

    if (opcion == 2){
        MenuBajas(Alumnos, &indice);

    }
} while (opcion !=5); // Mientras la opcion sea  pulsada sea diferente de 5
return 0;
}

// Función con tipo de retorno void, que sirve para dar de alta nuevos estudiantes
void MenuAltas(Estudiantes Alumnos[], int *indice) 
{
    printf("\nIngrese la matricula del estudiante: ");
    scanf("%d", &Alumnos[*indice].Matricula);

    printf("Ingrese el nombre del estudiante: ");
    scanf("%s", Alumnos[*indice].Nombre);

    printf("Ingrese al apellido paterno: ");
    scanf("%s", Alumnos[*indice].ApellidoP);

    printf("Ingrese el apellido materno: ");
    scanf("%s", Alumnos[*indice].ApellidoM);

    printf("Ingrese la carrera: ");
    scanf("%s", Alumnos[*indice].Carrera);

    printf("Ingrese el correo electrónico: ");
    scanf("%s", Alumnos[*indice].Correo);

    printf("Ingrese el teléfono: ");
    scanf("%s", Alumnos[*indice].Telefono);

    (*indice)++;

    printf("Alumno registrado. \n\n");
}

// Funcion para dar de baja a un alumno
void MenuBajas(Estudiantes Alumnos[], int *indice){ 

int matricula;
int opciones;
int encontrado = 0; //Variable que funciona como contador
int i, j;

printf("Ingresa la matricula del alumno que quieras dar de baja: ");
scanf("%d", &matricula);

printf("Estas seguro que quieres eliminar al estudiante? 1/Si  2/No\n");
scanf("%d", &opciones);

for (int i = 0; i < *indice; i++) {
        if (Alumnos[i].Matricula == matricula) { // Valida si la matricula en esa posicion del arreglo es igual a la matricula ingresa

            printf("Estas seguro que quieres eliminar al estudiante? 1/Si  2/No\n");
            scanf("%d", &opciones);  
        
            if(opciones == 1){ // Si esta seguro de borrar al estudiante, entonces...
            for (int j = i; j < *indice - 1; j++) { // Desplaza los alumnos hacia atrás para eliminar el registro
                Alumnos[j] = Alumnos[j + 1];
            }
            (*indice)--; // Reduce el contador de alumnos
            encontrado = 1; // Una vez eliminado el contador es igual a 1
            printf("Alumno con matrícula %d eliminado.\n", matricula);
            break;
            }
            if (opciones == 2){ // Si no lo quiere borrar entonces...
                printf("Eliminacion cancelada.\n");
            }
        }
    }

    // Si no se encontro entonces "encontrado" es 0 por lo tanto es verdadero y se ejecuta lo de dentro del if
    if (!encontrado) { // Si no se encontro entonces "encontrado" es 0 por lo tanto es verdadero y se ejecuta lo de dentro del if
        printf("No se encontró un alumno con matrícula %d.\n", matricula);
    }
}