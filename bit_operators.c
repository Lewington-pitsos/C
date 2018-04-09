#include <stdio.h>

void print_backwards(int length, int digits[] ) {
  while (length > 0) {
    length--;
    printf("%i", digits[length]);
  }
}

void print_binary(int num) {
  int digit;
  int alldigits[16] = {};
  int index = 0;

  while(num > 0) {
    digit = num % 2;
    alldigits[index] = digit;
    num = num / 2;
    index++;
  }

  print_backwards(16, alldigits);
  printf("\n");
}

int is_odd(int num) {
  return (num & 1);
}

int main (void) {

  int a = 301;
  int b = 0;

  print_binary(a);
  print_binary(a >> (8 - 3));
  print_binary((a << 3));
  print_binary((a << 3) | (a >> (8 - 3)) );

}
