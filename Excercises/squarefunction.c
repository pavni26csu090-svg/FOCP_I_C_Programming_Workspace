#include <stdio.h>

int arsquare(int a);
int arcircle(int b);
int arrectangle(int c,int d);

int main (void){
    int a,b,c,d;
    int square,circle,rectangle;
    printf("Enter the sides, radius, length and breadth ");
    scanf("%d,%d,%d,%d", &a,&b,&c,&d);
    square= arsquare(a);
    circle=arcircle(b);
    rectangle=arrectangle(c,d);
    printf("The area of square circle and rectangle is:", square,circle,rectangle);
    return 0;
}
int arsquare(int a){
    return a*a;
}
int arcircle(int b){
    return 3.14*b*b;
}
int arrectangle(int c,int d){
    return c*d;
}

