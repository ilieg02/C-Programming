#include <stdio.h>

/* define the person struct here using the typedef syntax */
struct person {
	char * name;
    int age;
};
int main() {
    struct person Ilie;

    /* testing code */
    Ilie.name = "Ilie";
    Ilie.age = 19;
    printf("%s is %d years old.", Ilie.name, Ilie.age);
}