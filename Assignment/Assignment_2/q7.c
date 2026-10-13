
#include <stdio.h>

int main(void) {
    int pin, amount, balance = 5000;

    printf("Enter PIN: ");
    scanf("%d", &pin);

    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    if (pin != 1234) {
        printf("Invalid PIN\n");
    } else {
        if (amount <= 0 || amount % 100 != 0) {
            printf("Invalid Amount\n");
        } else {
            if (amount > balance) {
                printf("Insufficient Balance\n");
            } else {
                balance = balance - amount;
                printf("Withdrawal Successful\n");
                printf("Remaining Balance = %d\n", balance);
            }
        }
    }

    return 0;
}
