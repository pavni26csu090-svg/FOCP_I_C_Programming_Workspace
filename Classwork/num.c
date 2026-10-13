#include <stdio.h>

int main(void){
    int num;
    printf("enter any random number");
    scanf("%d",&num);
    if (num>0){
        printf("the number is positive");
    }
    else if (num==0){
        printf("The number is 0");
    }
    else{
        printf("the number is negative");
    }
    return 0;
}