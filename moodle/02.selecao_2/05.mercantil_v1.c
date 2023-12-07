#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor, primeiro, segundo;
    scanf("%d%d%d", &valor, &primeiro, &segundo);

    if (abs(valor - primeiro) < abs(valor - segundo)) {
        printf("primeiro\n");
    } else if (abs(valor - primeiro) > abs(valor - segundo)) {
        printf("segundo\n");
    } else {
        printf("empate\n");
    }
}