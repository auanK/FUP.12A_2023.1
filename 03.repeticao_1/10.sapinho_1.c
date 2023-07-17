#include <stdio.h>

int main() {
    int p, s, e, i = 0;
    scanf("%d %d %d", &p, &s, &e);

    while (i < p) {
        printf("%d ", i);
        i += s;
        if (i >= p) break;
        printf("%d\n", i);
        i -= e;
    }
    printf("saiu\n");
}