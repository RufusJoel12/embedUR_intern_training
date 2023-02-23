#include <stdio.h>

#define MAX_SIZE 100 

void selection_sort(int arr[], int n) 
{
    int i,j,min_idx,temp;
      for(i=0;i<n-1;i++) 
      {
        min_idx=i;
        for(j=i+1;j<n;j++) 
        {
            if(arr[j]<arr[min_idx]) 
            {
                min_idx=j;
            }
        }
        temp=arr[min_idx];
        arr[min_idx]=arr[i];
        arr[i]=temp;
    }
}

int main() 
{
    int arr[MAX_SIZE];
    int n,i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements of the array: ", n);
    for (i=0;i<n;i++) 
    {
        scanf("%d", &arr[i]);
    }

    selection_sort(arr,n);

    printf("After sorting: ");
    for (i=0;i<n;i++) 
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
