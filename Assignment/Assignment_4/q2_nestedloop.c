#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main() {
    int n, m, count = 0;
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= m; i++) {
        if (gcd(i, n) == 1) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}