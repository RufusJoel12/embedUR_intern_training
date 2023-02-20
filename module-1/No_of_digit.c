#include <stdio.h>

int main() {
    int num ;scanf("%d",&num);

    switch(num) {
        case 0 ... 9:
            printf("Single digit");
            break;
        case 10 ... 99:
            printf("Double digit");
            break;
        default:
            printf("Number is not single or double digit");
            break;
    }

    return 0;
}
