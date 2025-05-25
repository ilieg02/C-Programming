#include <stdio.h>

/*using multiple functions, say hi , askname and welcome functions*/
void sayHi() {
    printf("Hello!\n");
}

void askName() {
    printf("What is your name?\n");
}

void welcome(char name[]) { /*here the parameter takes a string value which you input when the main() is run*/
    printf("Welcome %s!\n", name);
}

void age(int age) { /*Now same for int*/
    printf("What age are you?\n");
}
int main() {
    char name[20];
    int agee;
    sayHi();
    askName();
    scanf("%s", &name);
    welcome(name); /*the function takes the value of the inputted thing*/
    age(agee);
    scanf("%d", agee);
    return 0;
}

