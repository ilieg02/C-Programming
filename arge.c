#include <stdio.h>


/*this code wwill take on one or multiple arguments vectors when run*/
/*int argc is the amount of args and char *argv[] is an array of args*/
/**/

int main(int argc, char *argv[]) {
    int i = 1; /*start from 1 so it will not output the scripts location*/
    for (i; i < argc; i++ ) { /*all separated by ";" */
        printf("Arg %d: %s\n", i, argv[i]); /*now just looping with i and printing i*/
    }
    return 0;
}


