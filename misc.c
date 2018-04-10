#include <stdio.h>
#include <stdlib.h>

int main (void) {

  int *intPtr;

  intPtr = (int *) calloc(1atom , 10);

  printf("%i", *intPtr);

}
