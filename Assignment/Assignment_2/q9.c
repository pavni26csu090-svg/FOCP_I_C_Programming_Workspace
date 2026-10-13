
#include <stdio.h>

int main(void) {
    float marks, attendance;

    printf("Enter marks and attendance percentage: ");
    scanf("%f %f", &marks, &attendance);

    if (marks >= 90 && attendance >= 70) {
        printf("Special Scholarship\n");
    } else if (marks >= 75 && attendance >= 75) {
        printf("Eligible\n");
    } else {
        printf("Not Eligible\n");
    }

    return 0;
}
