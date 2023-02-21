#include <stdio.h>

int main() 
{
    char str[100]={0};
    int i=0,j=0, len=0;
    int flag=1;
    
    printf("Enter a string:");
    scanf("%s",str);
    
    while(str[len]!=0) 
    {
        len++;
    }
    
    for(i=0,j=len-1;i<j;i++,j--) 
    {
      if(str[i]!=str[j]) 
      {
         flag=0;
         break;
      }
   }

    if (flag==1) 
    {
        printf("%s is a palindrome\n",str);
    } 
    else 
    {
        printf("%s is not a palindrome\n",str);
    }
    
    return 0;
}
