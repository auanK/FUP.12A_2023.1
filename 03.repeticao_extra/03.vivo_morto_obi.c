#include <stdio.h>

int main() {
    int num_participantes, num_rodadas, teste = 1;
    scanf("%d%d", &num_participantes, &num_rodadas);

    while (num_participantes != 0 && num_rodadas != 0) {
        int fila[num_participantes], grito, reacao, num_reacoes;
        for (int i = 0; i < num_participantes; i++) scanf("%d", &fila[i]);
        for (int i = 0; i < num_rodadas; i++) {
            scanf("%d%d", &num_reacoes, &grito);
            for (int j = 0, k = 0; j < num_reacoes; j++, k++) {
                while (fila[k] == -1) k++;
                scanf("%d", &reacao);
                if (reacao != grito) fila[k] = -1;
            }
        }
        printf("Teste %d\n", teste);
        for (int i = 0; i < num_participantes; i++) if (fila[i] != -1) printf("%d\n", fila[i]);
        teste++;
        scanf("%d%d", &num_participantes, &num_rodadas);
    }
}