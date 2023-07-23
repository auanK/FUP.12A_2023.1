#include <stdio.h>
#include <string.h>

int is_order(char *word1, char *word2) {
    int i;
    for (i = 0; word1[i] != '\0' && word2[i] != '\0'; i++) {
        if (word1[i] < word2[i]) return 1;
        else if (word1[i] > word2[i]) return 0;
    }

    return strlen(word1) < strlen(word2);
}

int main() {
    char text[101];
    char words[20][101];
    int order = 1, word_count = 0;

    scanf("%[^\n]s", text);

    int i, j;
    for (i = 0, j = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ') words[word_count][j++] = text[i];
        else {
            words[word_count++][j] = '\0';
            j = 0;
        }
    }
    words[word_count++][j] = '\0';

    for (i = 0; i < word_count - 1; i++) {
        if (!is_order(words[i], words[i + 1])) {
            order = 0;
            break;
        }
    }
    printf("%s\n", order ? "sim" : "nao");

}