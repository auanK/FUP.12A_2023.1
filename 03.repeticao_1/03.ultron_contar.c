#include <stdio.h>

int main() {
    int x, n, count = 0;
    scanf("%d%d", &x, &n);

    int e;
    for (int i = 0; i < n; i++) {
        scanf("%d", &e);
        if (e == x) count++;
    }
    
    printf("%d\n", count);
}