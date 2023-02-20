#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter side a: ");
    scanf("%d", &a);

    printf("Enter side b: ");
    scanf("%d", &b);

    printf("Enter side c: ");
    scanf("%d", &c);

    if (a == b) {
        if (b == c) {
            printf("This is an equilateral triangle.\n");
        } else {
            printf("This is an isosceles triangle.\n");
        }
    } else {
        if (b == c || a == c) {
            printf("This is an isosceles triangle.\n");
        } else {
            printf("This is a scalene triangle.\n");
        }
    }

    return 0;
}
