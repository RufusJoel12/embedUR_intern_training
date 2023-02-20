

#include <stdio.h>
int main()
{
    int a = 1, b = 2, c = 3, r;
    r = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", r);

    r = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", r);

    r = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", r);

    r = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", r);

    r = !(a != b);
    printf("!(a != b) is %d \n", r);

    r = !(a == b);
    printf("!(a == b) is %d \n", r);

    return 0;
}
