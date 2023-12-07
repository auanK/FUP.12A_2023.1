#include <stdio.h>
#include <string.h>

int is_str(char *text) {
    int i = 0;
    while (text[i] != '\0') {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')) return 1;
        i++;
    }
    return 0;
}

int is_int(char *text) {
    int i = 0;
    while (text[i] != '\0') {
        if (text[i] == '.') return 0;
        i++;
    }
    return 1;
}

int is_float(char *text) {
    int i = 0;
    while (text[i] != '\0') {
        if (text[i] == '.') return 1;
        i++;
    }
    return 0;
}

int main() {
    char text[100];
    scanf("%[^\n]", text);

    for (int i = 0; i < strlen(text); i++) {
        if (text[i] == ' ') printf(" ");
        else {
            char word[50];
            int j = 0;
            while (text[i] != ' ' && text[i] != '\0') {
                word[j] = text[i];
                i++;
                j++;
            }
            word[j] = '\0';
            if (is_str(word)) printf("str");
            else if (is_int(word)) printf("int");
            else if (is_float(word)) printf("float");

            if (text[i] != '\0') printf(" ");
        }
    }
    printf("\n");
}
