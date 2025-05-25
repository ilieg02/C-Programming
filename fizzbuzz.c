#include <stdio.h>

int main() {
    int nr;
    const int nr2 = 3;
    const int nr3 = 4;
    printf("Please enter a number!\n");
    scanf("%d", &nr);
    if (nr % nr2 == 0 & nr % nr3 == 0) {
        printf("FizzBuzz!");
    }   else if (nr % nr2 == 0) {
        printf("Fizz!");
    }   else if (nr % nr3 == 0) {
        printf("Buzz!");
    }   else {
        printf("Not a Fizz or Buzz or Fizzbuzz number!");
    }
    return 0;
}
