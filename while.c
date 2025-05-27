#include <stdio.h>


/*up and down 10 while loop*/
int main() {
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int i = 0;
    while (i < sizeof(numbers) / sizeof(numbers[0])) { /*size of is the length for arrays in terms of memory size*/
        printf("%d  %d\n", numbers[i], numbers[(sizeof(numbers) / sizeof(numbers[1])) - i - 1]); /*so basically the byte size of all items in the array divide by first term size will give the items size because all items are of same size*/
        i ++;
    }
    return 0;

}