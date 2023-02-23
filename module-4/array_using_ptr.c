#include <stdio.h>
#define SIZE 5

int main()
{
    int arr[SIZE]={10, 20, 30, 40, 50};
    int *ptr=NULL;
    int count=0;

    ptr = &arr;
    printf("Accessing array elements using pointer \n");
    while(count < SIZE)
    {
        printf("arr[%d] = %d %p \n", count, *ptr, ptr);
        ptr++;
        count++;
    }
    return 0;
}
