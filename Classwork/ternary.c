#include <stdio.h>

/*int main (void){
    int x=10, y=10;
    if (x>y){
        printf("%d\n",x);
    }
    else{
        printf("%d\n",y);
    }
    return 0;
}*/
// curly braces are used when there are multiple statements 
int main (void){
    int x=10,y=20;
    (x>y)? printf("%d\n",x): printf("%d\n",y); //one way to write the same code

    int max=(x>y)? x: y; // the other way to write the same code 
    printf("%d\n",max);
    return 0;

}