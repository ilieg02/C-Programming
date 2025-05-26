#include <stdio.h>

double cube(double nr) {  /*use double or int because the return type will also be double or int*/
    double result = nr * nr * nr;
    return result; /*only return double if indeed the type is*/
}

void sayhi() {
    printf("Hello\n");
}


int main() {
    double num;
    sayhi();
    scanf("%lf", &num);
    printf("Cube is %.2f ", cube(num)); /*rounded to two decimal places*/
}