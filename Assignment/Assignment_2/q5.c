
#include <stdio.h>

int main(void) {
    float a, b;
    char op;

    printf("Enter: number operator number: ");
    scanf("%f %c %f", &a, &op, &b);

    switch (op) {
        case '+':
            printf("Result = %.2f\n", a + b);
            break;

        case '-':
            printf("Result = %.2f\n", a - b);
            break;

        case '*':
            printf("Result = %.2f\n", a * b);
            break;

        case '/':
            if (b == 0) {
                printf("Cannot divide by zero.\n");
            } else {
                printf("Result = %.2f\n", a / b);
            }
            break;

        case '%':
            if (b == 0) {
                printf("Cannot divide by zero.\n");
            } else {
                printf("Remainder = %d\n",
                       (int)a % (int)b);
            }
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}
