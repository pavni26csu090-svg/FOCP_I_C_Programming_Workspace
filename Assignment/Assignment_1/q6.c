
#include <stdio.h>

int main(void) {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (b != 0) {
        printf("Quotient = %d\n", a / b);
        printf("Remainder = %d\n", a % b);
    } else {
        printf("Division by zero is not possible.\n");
    }

    return 0;
}
