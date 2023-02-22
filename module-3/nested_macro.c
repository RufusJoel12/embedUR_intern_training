#include <stdio.h>

#define ADD(a,b) ((a) + (b))
#define SQUARE(x) ((x) * (x))
#define ADD_SQUARES(a,b) SQUARE(ADD(a,b))

int main() 
{
  int num1=3,num2=4;
  
  int sum_squares=ADD_SQUARES(num1,num2);
  printf("The sum of squares of %d and %d is %d\n",num1,num2,sum_squares);
  return 0;
}
