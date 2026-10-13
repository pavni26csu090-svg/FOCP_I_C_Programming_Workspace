#include <stdio.h>

int main(void) {
    int studentID = 101;
    int age = 18;
    float percentage = 85.50;
    char grade = 'A';

    printf("Student ID: %d\n", studentID);
    printf("Age: %d\n", age);
    printf("Percentage: %.2f\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}