#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);

    for (int i = 1; i * i <= num; i++) {
        if (i * i == num) {
            printf("sim\n");
            return 0;
        }
    }
    printf("nao\n");
}