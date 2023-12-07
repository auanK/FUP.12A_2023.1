#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num > 0) {
        printf("positivo\n");
    } else if (num < 0) {
        printf("negativo\n");
    } else {
        printf("nulo\n");
    }
}