
#include <stdio.h>

int main(void) {
    int productID, quantity;
    float price, discountPercent;
    float subtotal, discountAmount, finalAmount;

    printf("Enter product ID: ");
    scanf("%d", &productID);

    printf("Enter price, quantity and discount percentage: ");
    scanf("%f %d %f", &price, &quantity, &discountPercent);

    subtotal = price * quantity;
    discountAmount = subtotal * discountPercent / 100.0;
    finalAmount = subtotal - discountAmount;

    printf("\n--- INVOICE ---\n");
    printf("Product ID: %d\n", productID);
    printf("Subtotal: %.2f\n", subtotal);
    printf("Discount Amount: %.2f\n", discountAmount);
    printf("Final Payable Amount: %.2f\n", finalAmount);

    return 0;
}
