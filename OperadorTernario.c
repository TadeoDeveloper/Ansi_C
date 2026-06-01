#include <stdio.h>

int main()
{
    int number;
    printf("Introduce un numero: ");
    scanf("%d", &number);

    char* result = (number > 0) ? "positive" : (number < 0 ? "negative" : "cero");
    
    printf("The number is %s\n", result);

    return 0;
}