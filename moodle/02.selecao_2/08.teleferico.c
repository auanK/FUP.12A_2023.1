#include <stdio.h>

int main() {
    int c, a, viagens;

    scanf("%d%d", &c, &a);

    if (c > a) viagens = 1;
    else viagens = ((a - c) / c) + 2;

    printf("%d\n", viagens);
}