#include <stdio.h>
#include <math.h>

/*return 1 for error. works like break in python. return 0 for success*/
/*use single quotes instead of double*/
int main() {
    double nr1, nr2;
    char operator;
    double final;
    printf("Please enter the operator\n");
    scanf(" %c", &operator);
    printf("Please enter two numbers!\n");
    scanf("%lf", &nr1);
    scanf("%lf", &nr2);
    if (operator == '+') {
        final = nr1 + nr2;
    }   else if (operator == '-') {
        final = nr1 - nr2;
    }   else if (operator == '*') {
        final = nr1 * nr2;
    }   else if (operator == '/') {
        final = nr1 / nr2;
    }   else if (operator == '^') {
        final = pow(nr1, nr2);
    }   else {
        printf("Invalid Operator!\n");
        return 1;
    }
    printf("%lf", final);
    return 0;
}