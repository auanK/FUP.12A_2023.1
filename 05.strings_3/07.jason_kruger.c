#include <stdio.h>
#include <string.h>

int is_vowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        char str[52];
        char enc_vocal[52];
        int largest_enc_vocal_len = 0;

        scanf(" %[^\n]s", str);
        int str_len = strlen(str);

        for (int i = 0; i < str_len; i++) {
            int aux = 0;
            int j = i;

            char aux_enc_vocal[52];
            while (is_vowel(str[j]) && j < str_len) aux_enc_vocal[aux++] = str[j++];
            aux_enc_vocal[aux] = '\0';

            if (aux > largest_enc_vocal_len) {
                largest_enc_vocal_len = aux;
                strcpy(enc_vocal, aux_enc_vocal);
            }
        }

        printf("%s\n", enc_vocal);
    }
}
