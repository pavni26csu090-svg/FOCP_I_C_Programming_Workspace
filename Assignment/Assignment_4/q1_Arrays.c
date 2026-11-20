#include <stdio.h>

int main() {
    int n, a[100];
    int current = 1, max = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            current++;
        }
        else {
            current = 1;
        }

        if (current > max)
            max = current;
    }

    printf("%d", max);

    return 0;
}