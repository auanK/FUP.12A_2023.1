#include <stdio.h>

int main() {
    int angulo;
    scanf("%d", &angulo);

    if (angulo >= 0) {
        printf("%d\n", angulo % 360);
    } else {
        printf("%d\n", (360 + (angulo % 360)) % 360);
    }
}