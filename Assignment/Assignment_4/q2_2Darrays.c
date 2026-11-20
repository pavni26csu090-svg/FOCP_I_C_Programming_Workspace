#include <stdio.h>

int main() {
    int n, a[100][100];
    int flag = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}