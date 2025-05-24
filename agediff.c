#include <stdio.h>

int main() {

    const int myage = 19;
    int yourage;
    
    printf("HI, how old are you?\n");
    scanf("%d", &yourage);

    int difference = (myage - yourage);
    if (difference >= 0) {
        printf("Difference is %d", difference);
    }  else if (difference < 0) {
        printf("Difference is %d", difference * -1);
    }  
    return 0;
}