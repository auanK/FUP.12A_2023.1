#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int vault[n], digits[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < n; i++) scanf("%d", &vault[i]);

    for (int i = 0; i < m; i++) {
        int read, init, goal;
        scanf("%d", &read);

        if (i == 0) {
            digits[vault[read - 1]]++;
            init = read - 1;
            continue;
        } else {
            goal = read - 1;
            if (init < goal) {
                for(int j = init + 1; j <= goal; j++) digits[vault[j]]++;
            } else {
                for (int j = init - 1; j >= goal; j--) digits[vault[j]]++;
            }
            init = goal;
        }
    }

    printf("[");
    for (int i = 0; i < 10; i++) printf(" %d", digits[i]);
    printf(" ]\n");
}
