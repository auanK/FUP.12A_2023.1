#include <stdio.h>
#include <string.h>

char type_letter(char charactere) {
    if (charactere >= 'a' && charactere <= 'z') return 'm';
    else if (charactere >= 'A' && charactere <= 'Z') return 'M';
    return 0;
}

int main() {
    char text[100], f;

    scanf("%[^\n]s", text);
    scanf(" %c", &f);

    switch (f) {
        case 'M':
            for (int i = 0; i < strlen(text); i++)
                if (type_letter(text[i]) == 'm') text[i] -= 32;
            break;
            
        case 'm':
            for (int i = 0; i < strlen(text); i++)
                if (type_letter(text[i]) == 'M') text[i] += 32;
            break;

        case 'p':
            for (int i = 0; i < strlen(text); i++) {
                if (type_letter(text[i]) == 'm' && !(type_letter(text[i - 1]))) text[i] -= 32;
                if (type_letter(text[i]) == 'M' && text[i + 1] == ' ') text[i] += 32;
            }
            break;

        case 'i':
            for (int i = 0; i < strlen(text); i++)
                if (type_letter(text[i]) == 'm') text[i] -= 32;
                else if (type_letter(text[i]) == 'M') text[i] += 32;
            break;
    }
    printf("%s\n", text);
}