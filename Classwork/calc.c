
#include <stdio.h>

int main(void) {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Your grade is A");
    }
    else if (marks >= 80) {
        printf("Your grade is B");
    }
    else if (marks >= 70) {
        printf("Your grade is C");
    }
    else if (marks >= 60) {
        printf("Your grade is D");
    }
    else {
        printf("Your grade is E");
    }

    return 0;
}
