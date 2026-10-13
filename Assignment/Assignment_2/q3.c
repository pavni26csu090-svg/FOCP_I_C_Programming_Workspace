
#include <stdio.h>

int main(void) {
    int units;
    float bill;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units < 0) {
        printf("Invalid units\n");
    } else if (units <= 100) {
        bill = units * 2.0;
        printf("Bill = %.2f\n", bill);
    } else if (units <= 200) {
        bill = 100 * 2.0 + (units - 100) * 3.0;
        printf("Bill = %.2f\n", bill);
    } else {
        bill = 100 * 2.0 + 100 * 3.0
               + (units - 200) * 5.0;
        printf("Bill = %.2f\n", bill);
    }

    return 0;
}
