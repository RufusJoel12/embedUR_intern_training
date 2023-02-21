#include <stdio.h>

int main()
{
    auto int number=5;
    {
        auto int number=20;
        printf("inner number:%d\n", number);
    }
    
    printf("outer number:%d",number);
    return 0;
}
