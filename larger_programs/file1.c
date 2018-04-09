#include <stdio.h>
#include "file2.c"

int main (void) {

  extern int num;
  plint();

  printf("%i", num);
}
