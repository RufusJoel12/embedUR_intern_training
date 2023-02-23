#include <stdio.h>
#include <stdlib.h>

int main() 
{
  char ch=0;
  
  printf("Enter a character: ");
  scanf("%c", &ch);
  
  if (isdigit(ch)) 
  {
    printf("%c is a digit.\n", ch);
  }
  
  if (isalpha(ch)) 
  {
    printf("%c is a letter.\n", ch);
  }
  
  if (isspace(ch)) 
  {
    printf("%c is a whitespace character.\n", ch);
  }
  
  return 0;
}
