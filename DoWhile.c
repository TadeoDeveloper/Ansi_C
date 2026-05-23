#include <stdio.h>
 
int main()
{
    int i = 0; // Indice y condicion inicial
    do
    {
        printf("Iteracion: %d\n", i);
        i++;
    } while (i < 100);
    
    return 0;
}