#include <stdio.h>

void incrementar();

int main()
{
    incrementar();
    incrementar();

    return 0;
}

void incrementar() 
{
    static int x = 5;
    x++;
    printf("%d", x);
}