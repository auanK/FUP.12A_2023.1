#include <stdio.h>

int main() {
    int n, a, b, jog = -1, m = 0;
    scanf("%d", &n);

    int aux;
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &a, &b);
        aux = a - b;
        if (aux < 0) aux *= -1;
        if ((a >= 10) && (b >= 10)) {
            if ((jog == -1) || (aux < m)) {
                jog = i;
                m = aux;
            }
        }
    }

    if (jog == -1) printf("sem ganhador\n");
    else printf("%d\n", jog);  
}