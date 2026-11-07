#include <stdio.h>
int add(int x, int y){
    return x+y;
}

int main (void){
    int x,y;
    x=10;
    y=20;
    int result=add(x,y);
    printf("%d\n",result);
    printf("%d\n",add(12,5));
    return 0;
}