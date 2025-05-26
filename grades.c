#include <stdio.h>

int main() {;
    char grade;
    printf("Please enter Your Grade!\n");
    scanf("%c", &grade);
    switch (grade) {   /*switches and cases.. kinda like it in python and very like a lot of if statements but lifesavers*/
        case 'A':
            printf("Excellent");
            break; /* breaks the code once there is a match*/
        case 'B':
            printf("Great");
            break;
        case 'C':
            printf("Good");
            break;      
        case 'D':
            printf("Pass");
            break;
        case 'F':
            printf("Failed");
            break;
        default : /*this is like else*/
            printf("Invalid Grade");
            break;
    }        
    return 0; 
}