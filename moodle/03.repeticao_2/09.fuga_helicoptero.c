#include <stdio.h>

int main() {
    int h, p, f, d;
    scanf("%d%d%d%d", &h, &p, &f, &d);

    while (f != h && f != p) f += d;

    if (f == -1) f = 15;
    else if (f == 16) f = 0;

    if (f == h) printf("S\n");
    else printf("N\n");
}