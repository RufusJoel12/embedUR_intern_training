#include<stdio.h>

int main()
{
    int arr[100], size, i, sum = 0;
    printf("Enter array size:");
    scanf("%d",&size);
  
    for(i=0;i<size;i++)
    {
          scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
          sum=sum+arr[i]; 
    }
    printf("Sum of array=%d\n",sum);
    return 0;
}
