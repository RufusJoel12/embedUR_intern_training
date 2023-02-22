#include <stdio.h>
#include <string.h>

int main() 
{
   char str1[20] = "Hello";
   char str2[20] = "World";
   char str3[20]={0};
   
   strcpy(str3, str1);
   printf("strcpy(str3, str1): %s\n", str3);

   strcat(str1, str2);
   printf("strcat(str1, str2): %s\n", str1);

   printf("strlen(str1): %d\n", strlen(str1));

   if (strcmp(str1, str2) == 0) 
   {
      printf("str1 and str2 are equal\n");
   } 
   else 
   {
      printf("str1 and str2 are not equal\n");
   }

   return 0;
}
