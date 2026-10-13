#include <stdio.h>

int main(void) {
    int age;
    float height;
    char grade;

    printf("Enter age, height and grade: ");
    scanf("%d %f %c", &age, &height, &grade);

    printf("Age: %d\n", age);
    printf("Height: %.2f meters\n", height);
    printf("Grade: %c\n", grade);

    return 0;
}