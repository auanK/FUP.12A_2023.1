#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int me[n];

    for (int i = 0; i < n; i++) {
        int mt;
        scanf("%d", &mt);

        int ida = 0, volta = 0, atual, proximo;
        scanf("%d", &atual);

        for (int j = 1; j < mt; j++) {
            scanf("%d", &proximo);
            int diff = proximo - atual;
            (diff > 0) ? (ida += diff) : (volta -= diff);
            atual = proximo;
        }

        me[i] = (ida < volta) ? ida : volta;
    }

    int menor = me[0], imenor = 0;
    for (int i = 1; i < n; i++) {
        if (me[i] < menor) {
            menor = me[i];
            imenor = i;
        }
    }

    printf("%d\n", ++imenor);
    return 0;
}