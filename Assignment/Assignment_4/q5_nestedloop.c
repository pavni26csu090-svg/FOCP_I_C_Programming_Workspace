#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, a[100];
    int min;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    min = abs(a[0] - a[1]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int diff = abs(a[i] - a[j]);

            if (diff < min)
                min = diff;
        }
    }

    printf("%d", min);

    return 0;
}