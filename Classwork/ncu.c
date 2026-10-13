#include <stdio.h>

int main(void) {
    char name[]="Pavni";
    int age=18;
    float percentage= 98.5748;
    printf("==========================\n");
    printf("    Student Details \n");
    printf("Name      :%10s \n",name);
    printf("Age       :%10d \n",age);
    printf("Progress  :%10.2f \n",percentage);
    printf("==========================\n");
    return 0;
}

