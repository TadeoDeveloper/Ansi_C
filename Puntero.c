#include <stdio.h>

void cambiar(int *);

int main()
{
    // Valor inicial
    int a = 20;

    // Puntero a int -> *
    int *Pa;

    // Usamos el puntero (Pa) para acceder a la dirección de memoria de a -> &
    Pa = &a;

    // Imprime el valor de la memoria
    printf("%p\n", Pa);
    printf("Valor original %d\n", a);
    cambiar(Pa);
    printf("Valor cambiado %d\n", a);

    return 0;
}

void cambiar(int *Pb)
{
    *Pb = 100;
}
