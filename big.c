#include <stdio.h>
 /*given how many numbers we will input we can find the biggest by loopings*/
int main() {
    int many;
    int big;
    scanf("%d", &many);
    scanf("%d", &big);
    for (int i = 1; i < many; i++) {
        int anoter;
        scanf("%d", &anoter);
        if (anoter > big) {
            big = anoter;
        }
    }
    printf("%d", big);
    return 0;
}