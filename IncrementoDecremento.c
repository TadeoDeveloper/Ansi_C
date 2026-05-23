#include <stdio.h>

int main() {
    int number = 10;
    int prefixResult = ++number;
    int postfixResult = number++;

    printf("Number: %d\n", number);
    printf("Prefix result: %d\n", prefixResult);
    printf("Postfix result: %d\n", postfixResult);

    return 0;
}