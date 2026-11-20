#include <stdio.h>

int fact(int n);

int main (void){
    printf("the factorial is: %d", fact(5));
    return 0;
}
int fact(int n){
    if (n==1){
        return 1;
    }
    int factNm1= fact(n-1);
    int fact2 = factNm1 * n;

    return fact2;
}