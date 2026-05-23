#include <stdio.h>
#define MAX_SCORE 100

int main() {
    int age = 25;
    float price = 19.99;
    char grade = 'A';

    // Calculate discounted price
    float discounted = price * 15 / 100;
    float discounted_price = price - discounted;
    
    // Convert to integer using casting
    int rounded_price = (int) discounted_price;

    printf("Age: %d\n", age);
    printf("Price: $%.2f\n", price);
    printf("Discounted Price: $%.2f\n", discounted_price);
    printf("Rounded Price: $%d\n", rounded_price);
    printf("Grade: %c\n", grade);
    printf("Max Score: %d\n", MAX_SCORE);
    
    return 0;
}