#include <stdio.h>

int main() {
    int n, d, a, x;
    scanf("%d%d%d", &n, &d, &a);

    if (a > d) x = n - a + d;
    else x = d - a;

    printf("%d\n", x);
}