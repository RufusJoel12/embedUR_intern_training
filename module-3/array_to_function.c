#include <stdio.h>

void printArray(int arr[], int size) 
{
  for (int i=0;i<size;i++) 
  {
    printf("%d ",arr[i]);
  }
  
}

int main() 
{
  int nums[]={1,2,3,4,5};
  int size=5;

  printf("The array is: ");
  printArray(nums,size);
  return 0;
}
