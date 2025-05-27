#include <stdio.h>


/*pointers are very easy.. Think of it like its another type of data. */
/*It is simply said the memory address of other type of data that you insert*/
/*each variable or int or double has a memory address attached to it once it is run on the computer*/

int main() {
  int n = 10;
  int * pointer_to_n = &n; /*using & sign will return the memory address of the n */
  /* your code goes here */
  *pointer_to_n += 1; /*using * in from of the memory address of n will change it back to int or to its type*/
  /* testing code */
  if (pointer_to_n != &n) return 1;
  if (*pointer_to_n != 11) return 1;

  printf("Done!\n");
  return 0;
}