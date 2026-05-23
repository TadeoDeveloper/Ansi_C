// Usa la formula de gauss para calcular el numero de visitantes
#include <stdio.h>
 
int main()
{
    int sum;        

    sum = 30 * (30 + 1) / 2 + 200; // formula de gauss
    printf("Visitantes: %d\n", sum);
    
    return 0;
}