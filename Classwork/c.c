#include <stdio.h>
#include <stdbool.h>

int main(void){
    int dayno;
    char isholiday='n';
    printf("enter week day:");
    scanf("%d", &dayno);
    printf("is holiday(y|n)");
    scanf(" %c",&isholiday);

        if (dayno==2 || dayno==3 && isholiday=='n'){
           printf("focp class scheduled\n");
        }
        else{
             printf("no focp scheduled\n");
        }
        return 0;
        
}
