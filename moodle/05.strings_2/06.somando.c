#include <stdio.h>

int main() {
    int total = 0, number = 0;

    char text[101];
    scanf("%[^\n]", text);

    int i = 0;
    while (text[i] != '\0') {
        if (text[i] >= '0' && text[i] <= '9') {
            while (text[i] >= '0' && text[i] <= '9') {
                number = number * 10 + (text[i] - '0');
                i++;
            }
            total += number;
            number = 0;
        } else i++;
    }
    printf("%d\n", total);
}
