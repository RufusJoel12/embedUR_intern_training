#include <stdio.h>

int main() 
{
    int b = 52;
    void *ptr = &b;
    printf("address of 'b'  :%p \n", &b);
    printf("address of 'ptr':%p \n", (int *)ptr);
    printf("value of 'ptr'  :%d", *(int *)ptr);
    return 0;
}
