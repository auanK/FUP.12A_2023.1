#include <stdio.h>

int main() {
    int mon, a, b;
    scanf("%d%d%d", &mon, &a, &b);
    int c = mon - (a + b);
    int maior = a > b ? a : b;
    maior = maior > c ? maior : c;
    printf("%d\n", maior);
}