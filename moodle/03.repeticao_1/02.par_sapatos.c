#include <stdio.h>

int main() {
    int a, b, soma = 0;
    scanf("%d%d", &a, &b);

    if (a > b) printf("invalido\n");
    else{
        for (int i = a; i <= b; i++) if (i % 6 == 0) soma += i;
        printf("%d\n", soma);
    }
}