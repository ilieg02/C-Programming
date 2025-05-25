#include <stdio.h>


/*fgets can be used as a subtitute to scanf, but it take the whole line of input and it adds a newline*/
int main() {
    char name[20];
    printf("Hi, please enter your name:\n");
    fgets(name, 20, stdin);
    printf("Your name is %s", name);
    return 0;
}