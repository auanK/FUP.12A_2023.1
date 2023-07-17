#include <stdio.h>

int main() {
    int n, x, y, s;
    char c;
    scanf("%d%d%d %c%d", &n, &x, &y, &c, &s);

    switch (c) {
        case 'U':
            y -= s;
            break;
        case 'D':
            y += s;
            break;
        case 'L':
            x -= s;
            break;
        case 'R':
            x += s;
            break;
    }

    printf("%d %d\n", (x % n + n) % n, (y % n + n) % n);
    return 0;
}
