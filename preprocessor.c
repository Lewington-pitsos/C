#include <stdio.h>


#define YES(num) #num

int main (void) {

  char ans = YES(23333);

  printf("%c", ans );

}
