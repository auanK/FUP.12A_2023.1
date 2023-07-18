#include <stdio.h>

int main() {
    int p, s, e, h = 0;
    scanf("%d%d%d", &p, &s, &e);

    do {
        printf("%d ", h);
        if (h < 0) {
            printf("morreu\n");
            return 0;
        }
        h += s;
        s -= 10;
        if (s < 0) s = 0;
        if (h >= p) break;
        printf("%d\n", h);
        h -= e;
    } while (1);

    printf("saiu\n");
}