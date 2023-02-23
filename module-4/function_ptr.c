#include <stdio.h>

int add(int a, int b) 
{
  return a+b;
}

int subtract(int a, int b) 
{
  return a-b;
}

int main() 
{
  int (*func_ptr)(int, int); 

  func_ptr = add; 
  printf("Result of add function: %d\n",func_ptr(2, 3));
  func_ptr = subtract; 
  printf("Result of subtract function: %d\n",func_ptr(5, 2));
  return 0;
}
