#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int matriz[n][n];
    int max = 0, col = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
            int tmp = 0;
            for (int k = 0; k <= i; k++) tmp += matriz[k][j] * matriz[k][j];
            if (tmp > max) {
                max = tmp;
                col = j;
            }
        }
    }

    printf("%d\n", col);
}
