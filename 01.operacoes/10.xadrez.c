#include <stdio.h>

int main() {
    int l, c;
    scanf("%d%d", &l, &c);

    printf("%d\n", (l + c) % 2 == 0 ? 1 : 0);
}