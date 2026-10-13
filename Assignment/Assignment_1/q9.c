
#include <stdio.h>

int main(void) {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("Temperature = %.2f F\n", fahrenheit);

    return 0;
}
