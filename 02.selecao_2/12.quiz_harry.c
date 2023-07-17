#include <stdio.h>

int main() {
    char a, b, c, d;
    int acertos = 0;

    scanf("%c %c %c %c", &a, &b, &c, &d);

    if (a == 'd') acertos++;
    if (b == 'a') acertos++;
    if (c == 'c') acertos++;
    if (d == 'd') acertos++;

    switch (acertos) {
        case 0:
            printf("Nunca assistiu\n");
            break;
        case 1:
            printf("Ja ouviu falar\n");
            break;
        case 2:
            printf("Interessado no assunto\n");
            break;
        case 3:
            printf("Fa\n");
            break;
        case 4:
            printf("Super Fa\n");
            break;
    }
}