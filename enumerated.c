#include <stdio.h>

int main (void) {

  enum color {red, green = 6, blue, white = 6};

  enum color frog;

  frog = green;

  printf("%i", frog == white );

}
