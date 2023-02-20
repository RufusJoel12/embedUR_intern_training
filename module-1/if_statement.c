#include <stdio.h>

int main() {
    float temperature;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temperature);

    if (temperature > 25.0) 
    {
        printf("The temperature is too high. Turning on the air conditioner.");
    }
    else 
    {
        printf("The temperature is normal.");
    }

    return 0;
}
