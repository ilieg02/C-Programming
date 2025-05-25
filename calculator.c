#include <stdio.h>
#include <math.h>

/*return 1 for error. works like break in python. return 0 for success*/
/*use single quotes instead of double*/
int main() {
    double nr1, nr2;
    char operator;
    double final;
    char operats[] = {'+','-','*','/','^'}; /*here we can use the char array method to make an array of operators. note single quote and no spaces between the operators*/
    printf("Please enter the operator\n");
    scanf(" %c", &operator);
    if ((operator == operats[0]) || (operator == operats[1]) || (operator == operats[2]) || (operator == operats[3]) | (operator == operats[4])) 
    { /*if no valid operator then exit*/
        printf("Please enter two numbers!\n");
        scanf("%lf", &nr1);
        scanf("%lf", &nr2);
        if (operator == operats[0]) { /*now we use the index of each operator in the operats array*/
            final = nr1 + nr2;
        }   else if (operator == operats[1]) {
            final = nr1 - nr2;
        }   else if (operator == operats[2]) {
            final = nr1 * nr2;
        }   else if (operator == operats[3]) {
            final = nr1 / nr2;
        }   else if (operator == operats[4]) {
            final = pow(nr1, nr2);
        }   else {
            printf("Invalid Operator!\n");
            return 1;
        }
        printf("%lf", final);
        return 0;
    }   else {
    printf("Please enter a Valid Operator!");
    return 1;
}   
}
