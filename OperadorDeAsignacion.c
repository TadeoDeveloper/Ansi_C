#include <stdio.h>

int main() {
    int num = 10;

    num += 5;
    printf("After += 5: %d\n", num);

    num -= 3;
    printf("After -= 3: %d\n", num);

    num *= 2;
    printf("After *= 2: %d\n", num);

    num /= 3;
    printf("After /= 3: %d\n", num);
    // 5. Get the remainder of num divided by 4 using the %= operator and print the result
    // Remember to use %% in your printf statement to display the % symbol!
    num %= 4;
    printf("After %%= 4: %d\n", num);
    return 0;
}