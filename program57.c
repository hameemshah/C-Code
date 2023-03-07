#include <stdio.h>
int* getRandomNumber() {
  static int r = 10;
  return &r;
}

int main() {
  int* ptr;
  ptr = getRandomNumber();
  printf("Random number is: %d\n", *ptr);
  return 0;
}

