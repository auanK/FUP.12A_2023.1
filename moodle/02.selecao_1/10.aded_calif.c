#include <stdio.h>

int main() {
    int soma;
    scanf("%d", &soma);

    if (soma) {
        printf("%c\n", (soma - 1) % 26 + 'a');
    } else {
        printf("joguem de novo\n");
    }
}