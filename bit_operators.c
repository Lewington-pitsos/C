#include <stdio.h>

void print_backwards(int length, int digits[] ) {
  while (length > 0) {
    length--;
    printf("%i", digits[length]);
  }
}

void print_binary(int num) {
  int digit;
  int alldigits[100];
  int index = 0;

  while(num > 0) {
    digit = num % 2;
    alldigits[index] = digit;
    num = num / 2;
    index++;
  }

  print_backwards(index, alldigits);
  printf("\n");
}

int main (void) {

  int a = 8;
  int b = 9;

  print_binary(a);
  print_binary(b);
  print_binary(b << 3);

}
