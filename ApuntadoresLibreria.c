#include <stdio.h>
#include "libreria.h"

int main(int argc, char* argv[])
{
    Estudiante alumno;
    capturar(&alumno);
    imprimir(&alumno);

    return 0;
}
