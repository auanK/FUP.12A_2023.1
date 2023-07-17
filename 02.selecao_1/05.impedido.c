#include <stdio.h>

int main() {
    int l, r, d;
    scanf("%d%d%d", &l, &r, &d);

    if (r > 50 && l < r && r > d) {
        printf("S\n");
    } else {
        printf("N\n");
    }
}