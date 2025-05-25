#include <stdio.h>
#include <stdlib.h>

/*using multiple functions, say hi , askname and welcome functions*/
void sayHi() {
    printf("Hello!\n");
}

void askName() {
    printf("What is your name?\n");
}

void welcome(char name[]) { /*here the parameter takes a string value which you input when the main() is run*/
    printf("Welcome %s!", name);
}
int main() {
    char name[20];
    sayHi();
    askName();
    scanf("%s", &name);
    welcome(name); /*the function takes the value of the inputted thing*/
    return 0;
}

