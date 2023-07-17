#include <stdio.h>

int main() {
    int n, ida = 0, volta = 0;
    scanf("%d", &n);

    int trilha[n];

    for (int i = 0; i < n; i++) scanf("%d", &trilha[i]);

    for (int i = 0; i < n; i++)
        if (trilha[i + 1] - trilha[i] > 0)
            if (i != n - 1) ida += trilha[i + 1] - trilha[i];

    for (int i = n - 1; i > 0; i--)
        if (trilha[i - 1] - trilha[i] > 0)
            if (i != 0) volta += trilha[i - 1] - trilha[i];

    if (volta < ida) printf("%d\n", volta);
    else printf("%d\n", ida);
}