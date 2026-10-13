# include <stdio.h>

int main() {
    int a;
    printf("enter the number1:");
    scanf("%d", &a);

    int b;
    printf("enter the number2:");
    scanf("%d", &b);

    int sum = a+b;
    printf("The sum of the two numbers is %d", sum);
    return 0;
}