#include <stdio.h>

int main() {
    char letter;
    int c;
    scanf("%c%d", &letter, &c);

    c = c % 26;
    letter += c;
    if (letter > 'z') letter = 'a' + (letter - 'z' - 1) % 26;
    if (letter < 'a') letter = 'z' - ('a' - letter - 1) % 26;
    printf("%c\n", letter);
}
