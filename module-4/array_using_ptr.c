#include <stdio.h>

int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for (int i=0;i<n;i++) 
    {
        scanf("%d",&arr[i]);
    }
    int *ptr=arr; 
    printf("The elements of the array are:\n");
    for (int i=0;i<n;i++) 
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}
