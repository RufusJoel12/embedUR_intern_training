#include <stdio.h>

#define SQUARE(x) ((x) * (x))

int main() {
  int num = 5;
  
  int s = SQUARE(num);
  printf("%d squared is %d\n",num,s);
  return 0;
}
