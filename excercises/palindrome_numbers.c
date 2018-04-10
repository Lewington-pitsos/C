#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(long int x) {
  long int num = x;
  if (x > 0 && x % 10 == 0) {
    return false;
  }
  long int front = 0;
  long int scale = 10;
  long int rem;

  while (num > 0) {
    if (num == front) {
      return true;
    }
    rem = num % scale;
    num /= scale;
    if (num == front) {
      return true;
    }
    front *= scale;
    front += rem;
  }

  return x == 0;
}

int main(void) {
  printf("%d\n", isPalindrome(-1));
}
