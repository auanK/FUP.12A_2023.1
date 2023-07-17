#include <stdio.h>

int main() {
    int num, count = 0, fator = 2;

    scanf("%d", &num);

    while (num > 1) {
        if (num % fator == 0) {
            num /= fator;
            count++;
        } else {
            if (count > 0) printf("%d %d\n", fator, count);
            count = 0;
            fator++;
        }
    }

    printf("%d %d\n", fator, count);
}