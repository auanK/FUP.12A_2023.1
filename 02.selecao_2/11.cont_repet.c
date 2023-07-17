#include <stdio.h>

int main() {
    int a, b, c, iguais = 0;
    scanf("%d%d%d", &a, &b, &c);

    if (a == b && b == c) iguais = 3;
    else if (a == b || a == c || b == c) iguais = 2;

    printf("%d\n", iguais);

}
