#include <stdio.h>

int main()
{
    // 0xc (12 en hexadecimal)
    int num = 12; 

    // Pnum es un puntero a un entero, y se le asigna la dirección de num
    int *Pnum = &num;

    // Imprime el valor de num
    printf("Valor de num: %d\n", num);

    // Imprime la dirección de memoria almacenada en Pnum (dirección de num)
    printf("Valor de Pnum: %p\n", (void*)Pnum); 

    // Nuevo valor del puntero
    *Pnum = 10;
    printf("Nuevo valor: %d\n", *Pnum);
    return 0;
}