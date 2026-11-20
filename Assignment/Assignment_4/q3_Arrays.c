#include <stdio.h>

int main() {
    char str[1000];
    int count;

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        count = 1;

        while (str[i] == str[i + 1] && str[i] != '\0') {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    return 0;
}