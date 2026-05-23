#include <stdio.h>

void modifica(int *a, int *b);

int main(int argc, char*argv[])
{
    int x = 666;
    int y;

    printf("X = %d, y esta en %p, Y = %d y esta en %p\n", x, &x, y, &y);

    modifica(&x, &y);

    printf("X = %d, Y = %d\n", x, y);


    return 0;
}

void modifica(int *a, int *b)
{
    *a = 777;
    *b = 123;
}