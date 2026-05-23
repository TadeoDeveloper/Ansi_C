#include <stdio.h>

int main()
{
    for(int i = 1; i <= 10; i++)
    {
        int sum = i * (i + 1) / 2;
        printf("Suma: %d\n", sum);
    }

    return 0;
}