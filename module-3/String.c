#include <stdio.h>

int main() {
    char message[100]={0};

    printf("Enter a sentence:");
    scanf("%[^\n]s",message);
    printf("You entered: %s\n",message);
    return 0;
}
