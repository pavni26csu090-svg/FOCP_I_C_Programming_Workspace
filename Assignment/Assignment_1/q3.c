#include <stdio.h>

int main(void) {
    float price, total;
    int quantity;

    printf("Enter price and quantity: ");
    scanf("%f %d", &price, &quantity);

    total = price * quantity;

    printf("Total Bill: %.2f\n", total);

    return 0;
}