#include <stdio.h>

int main() {
    int num, menor = 31;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &num);
        if (num < menor) menor = num;
    }
    printf("%d\n", menor);
}