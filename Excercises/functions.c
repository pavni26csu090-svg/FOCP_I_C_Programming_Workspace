#include <stdio.h>

float toFahrenheit(float c){
    return c*1.8f+32;
}

int main(void){
    float c;
    printf("enter the temperature in celsius");
    scanf("%f", &c);
    printf("%f\n",toFahrenheit(c));
    return 0;
}