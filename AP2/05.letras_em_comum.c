#include <stdio.h>
#include <string.h>

int main() {
    char frase[100];

    int num_palavras = 1, final_palavra = 0, palavra = 0, comum = 0, aux = 1;

    scanf("%[^\n]", frase);

    for (int i = 0; frase[i] != '\0'; i++) if (frase[i] == ' ') num_palavras++;

    for (final_palavra = 0; (frase[final_palavra] != ' ') && (frase[final_palavra] != '\0'); final_palavra++);
    final_palavra--;

    int tem[num_palavras - 1];
    for (int i = 0; i < (num_palavras - 1); i++) tem[i] = 0;

    for (int i = 0; i <= final_palavra; i++) {
        int letra = 1;
        for (int j = 0; j < i; j++) {
            if (frase[j] == frase[i]) letra = 0;
        }

        if (letra == 1) {
            for (int j = 0; j < (num_palavras - 1); j++) tem[j] = 0;
            palavra = 0;
            if (num_palavras > 1) {
                for (int j = (final_palavra + 2); frase[j] != '\0'; j++) {
                    if (frase[j] == ' ') palavra++;
                    if (frase[i] == frase[j]) tem[palavra] = 1;
                }
            }

            aux = 1;
            for (int j = 0; j < (num_palavras - 1); j++) {
                if (tem[j] == 0) {
                    aux = 0;
                    break;
                }
            }
            if (aux == 1) comum++;
        }
    }
    printf("%d\n", comum);
}