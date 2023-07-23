#include <stdio.h>

struct Pos{
    int x, y;
};

void atualizar_cobra(struct Pos cobra[], int size, char direcao) {
    int dx = 0, dy = 0;
    switch (direcao) {
        case 'L':
            dx = -1;
            break;
        case 'R':
            dx = 1;
            break;
        case 'U':
            dy = -1;
            break;
        case 'D':
            dy = 1;
            break;
        default:
            printf("Direção inválida\n");
            return;
    }

    for (int i = size - 1; i >= 1; i--) {
        cobra[i].x = cobra[i - 1].x;
        cobra[i].y = cobra[i - 1].y;
    }

    cobra[0].x += dx;
    cobra[0].y += dy;
}

int main() {
    int Q;
    char D;
    scanf("%d %c", &Q, &D);

    struct Pos cobra[Q];
    for (int i = 0; i < Q; i++) scanf("%d %d", &cobra[i].x, &cobra[i].y);

    atualizar_cobra(cobra, Q, D);
    for (int i = 0; i < Q; i++) printf("%d %d\n", cobra[i].x, cobra[i].y);
}
