#include <stdio.h>

int area(int length, int width) {
    return length * width;
}

int main() {
    int length, width;
    scanf("%d %d", &length, &width);

    printf("%d", area(length, width));

    return 0;
}