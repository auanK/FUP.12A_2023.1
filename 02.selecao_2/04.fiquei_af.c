#include <stdio.h>

int main() {
    float nota1, nota2, media, final, mediaFinal;
    scanf("%f%f", &nota1, &nota2);
    media = (nota1 + nota2) / 2;

    if (media >= 7) printf("aprovado\n");
    else if (media < 4) printf("reprovado\n");
    else {
        scanf("%f", &final);
        mediaFinal = (media + final) / 2;
        if (mediaFinal >= 5) printf("aprovado\n");
        else printf("reprovado\n");
    }
}