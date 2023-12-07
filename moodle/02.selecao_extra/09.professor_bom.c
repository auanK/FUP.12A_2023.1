#include <stdio.h>

int main() {
    float nota1, nota2, nota3, trabalho, media;
    scanf("%f%f%f%f", &nota1, &nota2, &nota3, &trabalho);

    if (nota2 <= nota1 && nota2 <= nota3) nota2 = nota1;
    else if (nota3 <= nota1 && nota3 <= nota2) nota3 = nota1;

    media = (nota2 + nota3 + trabalho) / 3;

    if (media >= 7) printf("Aprovado com %.1f\n", media);
    else printf("Final com %.1f\n", media);
}