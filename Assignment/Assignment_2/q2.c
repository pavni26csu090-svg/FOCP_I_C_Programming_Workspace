
#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Enter three different integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a > b && a < c) || (a < b && a > c)) {
        printf("Middle = %d\n", a);
    } else if ((b > a && b < c) || (b < a && b > c)) {
        printf("Middle = %d\n", b);
    } else {
        printf("Middle = %d\n", c);
    }

    return 0;
}
