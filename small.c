#include <stdio.h>
 /*given how many numbers we will input we can find the smallest by loopings*/
int main() {
    int many;
    int small;
    scanf("%d", &many);
    scanf("%d", &small);
    for (int i = 1; i < many; i++) {
        int anoter;
        scanf("%d", &anoter);
        if (anoter < small) {
            small = anoter;
        }
    }
    printf("%d", small);
    return 0;
}