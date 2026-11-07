#include <stdio.h>
int main(){
    int n, stars, gap;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        if (i <= (n + 1) / 2)
            stars = i;
        else
            stars = n - i + 1;

        for (int j = 1; j <= stars; j++){
            printf("*");
        }
        gap = 2 * (n - stars) + 1;
        for (int j = 1; j <= gap; j++){
            printf(" ");
        }
        for (int j = 1; j <= stars; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
