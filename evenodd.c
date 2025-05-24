#include <stdio.h>

int main() {
    int number;
    printf("Please input a number\n");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d is an Even number!", number);
    } else if (number % 2 == 1) {
        printf("%d is an Odd number!", number);  
    }
    return 0;
}