#include <stdio.h>

int main (void){
    int marks;
    printf("enter your marks\n");
    scanf("%d",&marks);
    if (marks>=90 && marks<=100){
        printf("Your Grade is A+");
    }
    else if (marks>=70 && marks<90 ){
        printf("Your Grade is B");
    }
    else if (marks>=30 && marks<70){
        printf("Your grade is B");
    }
    else{
        printf("Your grade is C");
    }
    return 0;
}