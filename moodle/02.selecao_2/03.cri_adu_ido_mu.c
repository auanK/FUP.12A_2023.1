#include <stdio.h>

int main() {
    char nome[100];
    int idade;

    scanf("%s %d", nome, &idade);

    if (idade < 12) printf("%s eh crianca\n", nome);
    else if (idade < 18) printf("%s eh jovem\n", nome);
    else if (idade < 65) printf("%s eh adulto\n", nome);
    else if (idade < 1000) printf("%s eh idoso\n", nome);
    else printf("%s eh mumia\n", nome);
}