#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if ((a % 3 == 0 && b % 3 == 0) || (a % 5 == 0 && b % 5 == 0)) {
        printf("sim\n");
    } else {
        printf("nao\n");
    }
}