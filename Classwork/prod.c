#include <stdio.h>

int main(void) {

    char product_name[30];

    printf("Enter the Product Name: ");
    scanf("%s", product_name);

    int quantity;
    printf("Enter the quantity: ");
    scanf("%d", &quantity);

    int unit_price;
    printf("Enter the unit price: ");
    scanf("%d", &unit_price);

    char category_code;
    printf("Enter the Category Code: ");
    scanf(" %c", &category_code);

    unsigned int stock_count;
    printf("Enter the stock count: ");
    scanf("%u", &stock_count);

    printf("=========================\n");
    printf("      Product Details\n");
    printf("=========================\n");

    printf("Product       : %8s\n", product_name);
    printf("=========================\n");

    printf("Quantity      : %8d\n", quantity);
    printf("=========================\n");

    printf("Unit Price    : %8d\n", unit_price);
    printf("=========================\n");

    printf("Category Code : %8c\n", category_code);
    printf("=========================\n");

    printf("Stock Count   : %8u\n", stock_count);
    printf("=========================\n");

    return 0;
}