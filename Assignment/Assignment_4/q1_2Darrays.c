#include <stdio.h>

int main() {
    int r, c, a[100][100];

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Row sums
    for (int i = 0; i < r; i++) {
        int sum = 0;

        for (int j = 0; j < c; j++) {
            sum += a[i][j];
        }

        printf("%d ", sum);
    }

    printf("\n");

    // Column sums
    for (int j = 0; j < c; j++) {
        int sum = 0;

        for (int i = 0; i < r; i++) {
            sum += a[i][j];
        }

        printf("%d ", sum);
    }

    return 0;
}