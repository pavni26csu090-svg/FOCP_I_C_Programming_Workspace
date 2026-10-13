
#include <stdio.h>

int main(void) {
    int m1, m2, m3, m4, m5, total;
    float percentage;

    printf("Enter marks in five subjects: ");
    scanf("%d %d %d %d %d",
          &m1, &m2, &m3, &m4, &m5);

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    printf("Total Marks = %d/500\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
