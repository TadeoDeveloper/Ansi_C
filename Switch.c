#include <stdio.h>

int main() {
    int grade;
    printf("Introduce tu calificacion: ");
    scanf("%d", &grade);
    
    switch(grade / 10)
    {
        case 10:
        printf("A\n");
        break;
        case 9:
        printf("A\n");
        break;
        case 8:
        printf("B\n");
        break;
        case 7:
        printf("C\n");
        break;
        case 6:
        printf("D\n");
        break;
        default:
        printf("F\n");
    }
    
    return 0;
}