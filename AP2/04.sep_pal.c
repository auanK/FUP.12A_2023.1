#include <stdio.h>
#include <string.h>

// retorna 0 se for vogal, 1 se for consoante e 2 se for espaco.
int is_vogal(char letra) {
    if (letra == 'A' || letra == 'a' || letra == 'E' || letra == 'e' ||
        letra == 'I' || letra == 'i' || letra == 'O' || letra == 'o' ||
        letra == 'U' || letra == 'u')
        return 0;
    else if (letra == ' ') return 2;
    else return 1;
    
}

int main() {
    char frase[100];
    scanf("%[^\n]", frase);

    printf("%c", frase[0]);

    for (int i = 1; frase[i] != '\0'; i++) {
        if (is_vogal(frase[i - 1]) == 0 && is_vogal(frase[i]) == 1) printf("-");
        printf("%c", frase[i]);
    }
    printf("\n");
}