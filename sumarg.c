#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int i = 1;
    int sume = 0;
    for (i; i < argc; i ++) {
        sume += atoi(argv[i]); /*transform an arg into an int*/
    }
    printf("%d", sume);
    return 0;
}