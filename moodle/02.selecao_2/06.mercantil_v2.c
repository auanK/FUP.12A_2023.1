#include <stdio.h>

int main() {
    float chute, valor;
    char escolha;

    scanf("%f %c%f", &chute, &escolha, &valor);

    if (chute > valor && escolha == 'm' || chute < valor && escolha == 'M') {
        printf("segundo\n");
    } else {
        printf("primeiro\n");
    }
}