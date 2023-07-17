#include <stdio.h>

int main() {
    int n, num, jedi = 0, sith = 0;
    scanf("%d", &n);

    for (int i = 0; i < n / 2; i++) {
        scanf("%d", &num);
        jedi += num;
    }

    for (int i = n / 2; i < n; i++) {
        scanf("%d", &num);
        sith += num;
    }

    if (jedi > sith) printf("Jedi\n");
    else if (sith > jedi) printf("Sith\n");
    else printf("Empate\n");
}