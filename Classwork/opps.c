#include <stdio.h>

int main(void){
    int a;
    int b;
    char op;
    printf("enter two numbers a and b");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("enter the operator [+,-,*,/,%%]");
    scanf(" %c",&op);
    if ( op=='+'){
        printf("result=%d\n",a+b);
    }
    else if ( op=='-'){
        printf("result=%d\n",a-b);
    }
    else if ( op=='*'){
        printf("result=%d\n",a*b);
    }
    else if ( op=='/'){
        printf("result=%d\n",a/b);
    }
    else if ( op=='%'){
        printf("result=%d\n",a%b);
    }
    else{
        printf("enter values");
    }
    return 0;

    
