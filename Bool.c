#include <stdio.h>
#include <stdbool.h>

int main() {
    int number = 17;
    int remainder = number % 5;
    int is_even = (number % 2 == 0);
    
    printf("Number: %d\n", number);
    printf("Remainder when divided by 5: %d\n", remainder);
    printf("%d is even? %d\n", number, is_even);
    return 0;
}