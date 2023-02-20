#include <stdio.h>
int main()
{
  int a;
  float f;
  char c;
  double d;
  printf("Enter the values of int,float,char,double:");
  scanf("%d %f %c %lf", &a,&f,&c,&d);
  printf("The values entered are:%d %f %c %lf",a,f,c,d);
  return 0;
}
