#include <stdio.h>

int main() {
    int a[5], i, count = 0;

    printf("Enter 5 integers:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5; i++) {
        if (a[i] % 2 == 0) {
            count++;
        }
    }

    printf("Number of even elements = %d", count);

    return 0;
}