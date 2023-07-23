#include <stdio.h>
#include <string.h>

int main() {
    char word1[51], word2[51];
    scanf("%s%s", word1, word2);

    for (int i = strlen(word1) - 1; word1[i] == word2[0] && i >= 0; i--) {
        word1[i] = '\0';
        for (int j = 0; word2[j] != '\0'; j++) word2[j] = word2[j + 1];
    }
    printf("%s%s\n", word1, word2);
}
