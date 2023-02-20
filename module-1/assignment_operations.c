#include <stdio.h>
int main()
{
    int a = 2, c;

    c = a;   
    printf("c = %d\n", c);
    c += a;    
    printf("c = %d\n", c);
    c -= a;    
    printf("c = %d\n", c);
    c *= a;     
    printf("c = %d\n", c);
    c /= a;     
    printf("c = %d\n", c);
    c %= a;     
    printf("c = %d\n", c);

    return 0;
}
