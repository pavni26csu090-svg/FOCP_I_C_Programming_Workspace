#include <stdio.h>

int  main(void){
    int i;
    int a[5];
    int b;
    for(int i=0;i<5;i++){
        printf("enter the element");
        scanf("%d",&b);
        a[i]=b;
    }
    for (i=0;i<5;i++){
        printf("%d",a[i]);
    }
}