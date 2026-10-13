
#include <stdio.h>

int main(void) {

    int age;
    char nationality;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you Indian? Enter I for Indian: ");
    scanf(" %c", &nationality);

    if (age >= 18 && nationality == 'I') {
        printf("You are eligible to vote");
    }
    else {
        printf("You are not eligible to vote");
    }

    return 0;
}
