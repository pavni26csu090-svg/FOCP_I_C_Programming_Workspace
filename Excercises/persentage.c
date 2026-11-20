#include <stdio.h>

float percentage(int sanskrit, int physics, int maths);

int main(void) {
    int s, p, m;
    float percent;

    printf("Enter the marks scored in the three subjects: ");
    scanf("%d %d %d", &s, &p, &m);

    percent = percentage(s, p, m);

    printf("Percentage = %.2f%%\n", percent);

    return 0;
}

float percentage(int sanskrit, int physics, int maths) {
    int total = sanskrit + physics + maths;
    float avg = (total / 300.0) * 100;
    return avg;
}