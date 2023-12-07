#include <stdio.h>

int collatz(int n) {
    int c = 1;
    while (n != 1) {
        c++;
        if (n % 2 == 0) n /= 2;
        else n = 3 * n + 1;
    }
    return c;
}

int square(int n) {
    int i = 1;
    while (i * i <= n) {
        if (i * i == n) return 1;
        i++;
    }
    return 0;
}

int main() {
    int n, i, max = -1, maxIndex = -1;
    scanf("%d", &n);

    int e[n], c[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &e[i]);
        c[i] = collatz(e[i]) * square(e[i]);
        if (c[i] > max) {
            max = c[i];
            maxIndex = i;
        }
    }

    if (max > 0) printf("%d\n", e[maxIndex]);
    else printf("a porta nao existe\n");
}
