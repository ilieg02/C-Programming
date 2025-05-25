#include <stdio.h>

int main() {
    int nr;
    printf("Please enter a number!\n");
    scanf("%d", &nr);
    if (nr % 3 == 0 & nr % 4 == 0) {
        printf("FizzBuzz!");
    }   else if (nr % 3 == 0) {
        printf("Fizz!");
    }   else if (nr % 4 == 0) {
        printf("Buzz!");
    }   else {
        printf("Not a Fizz or Buzz or Fizzbuzz number!");
    }
    return 0;
}