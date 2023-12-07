#include <stdio.h>

char is_vogal(char letter) {
    return (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' ||
            letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' ||
            letter == 'O' || letter == 'U');
}

int main() {
    char text[100];
    scanf("%[^\n]s", text);

    int i = 0;
    while (text[i] != '\0') {
        if (is_vogal(text[i]) && text[i + 2] == text[i]) {
            while (text[i + 1] == ' ' || text[i + 1] == text[i]) {
                i++;
                if (text[i + 1] != ' ') i++;
            }
        }
        printf("%c", text[i]);
        i++;
    }
    printf("\n");
}
