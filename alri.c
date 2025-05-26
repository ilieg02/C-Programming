#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*these are similar to classes in python...kinda like oop but better*/
struct Student
{
    int age;
    char name[20];
    char hobby[20];
    int favnr;
};

int main() {
    struct Student student1;
    student1.age = 19;
    student1.favnr = 2;
    strcpy( student1.name, "Ilie"); /*must use <string.h> for  these strcpy*/
    strcpy( student1.hobby, "Cycling");
    printf("%s", student1.name);


    struct Student student2;
    student2.age = 19;
    student2.favnr = 2;
    strcpy(student2.name, "ilie");
    strcpy(student2.hobby, "table tennis");
    printf("%s", student2.hobby);  /*very easy to create a second object*/
    return 0;

}

