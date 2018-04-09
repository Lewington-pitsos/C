#include <stdio.h>


#define YES(num,num2) num + (num2 ## 2)

int main (void) {

  char ans = YES(2, 2);

  printf("%i", ans );

}
