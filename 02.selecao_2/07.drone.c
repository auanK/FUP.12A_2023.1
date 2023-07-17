#include <stdio.h>

int main() {
    int a, b, c, h, l;
    scanf("%d%d%d%d%d", &a, &b, &c, &h, &l);

    if (a <= h && b <= l || a <= h && c <= l || b <= h && a <= l ||
        b <= h && c <= l || c <= h && a <= l || c <= h && b <= l) {
        printf("S\n");
    } else {
        printf("N\n");
    }
}