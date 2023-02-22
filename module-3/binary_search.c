#include <stdio.h>

int binarySearch(int arr[],int size,int key) 
{
    int low=0,high=size-1,mid;
    while(low<=high) 
    {
        mid=(low+high)/2;
        if(arr[mid]==key) 
        {
            return mid; 
        } 
        else if (arr[mid]>key) 
        {
            high=mid-1; 
        } 
        else 
        {
            low=mid+1;
        }
    }
    return -1; 
}

int main() 
{
    int size=0, i=0, key=0, index=0;
    
    printf("Enter array size:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements:\n");
    for (i=0;i<size;i++) 
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter key to search:");
    scanf("%d",&key);
    index=binarySearch(arr,size,key);
    if (index==-1) 
    {
        printf("Key not found in the array\n");
    } else 
    {
        printf("Key found at index %d\n",index);
    }
    return 0;
}
