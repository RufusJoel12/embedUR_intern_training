#include <stdio.h>
#include "functions.h"

int main() {
  int a = 5, b = 3;
  int result1 = add(a, b);
  int result2 = multiply(a, b);
  printf("Result1: %d\n", result1);
  printf("Result2: %d\n", result2);
  return 0;
}

