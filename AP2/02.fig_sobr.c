#include <stdio.h>

int main() {
    int size_joa, count = 0, cont = 0;
    scanf("%d", &size_joa);

    int alb_joa[size_joa];
    for (int i = 0; i < size_joa; i++) scanf("%d", &alb_joa[i]);

    for (int i = 0; i < size_joa; i++) {
        for (int j = 0; j < (size_joa - i - 1); j++) {
            if (alb_joa[j] > alb_joa[j + 1]) {
                int aux = alb_joa[j];
                alb_joa[j] = alb_joa[j + 1];
                alb_joa[j + 1] = aux;
            }
        }
    }

    for (int i = 1; i <= size_joa; i++) {
        if (alb_joa[i - 1] == alb_joa[i]) {
            count++;
            cont++;
        } else if (alb_joa[i - 1] != alb_joa[i]) {
            if (count != 0) {
                printf("%d ", alb_joa[i - 1]);
                printf("%d\n", count);
                count = 0;
            }
        }
    }
    if (cont == 0) printf("nenhum\n");
}