#include <stdio.h>

int main() {
    int size_alb, size_joa, count = 0, aux;
    
    scanf("%d%d", &size_alb, &size_joa);

    int alb_joa[size_joa];
    for (int i = 0; i < size_joa; i++) scanf("%d", &alb_joa[i]);

    int alb[size_alb];
    for (int i = 0; i < size_alb; i++) alb[i] = i + 1;
    
    int faltam[size_alb];
    for (int i = 0; i < size_alb; i++) {
        aux = 0;
        for (int j = 0; j < size_joa; j++) {
            if (alb[i] == alb_joa[j]) {
                aux = 1;
                break;
            }
        }
        if (aux == 0) {
            faltam[count] = alb[i];
            count++;
        }
    }

    if (count == 0) printf("nenhum\n");
    else {
        for(int i = 0; i < count - 1; i++) printf("%d ", faltam[i]);
            printf("%d\n", faltam[count - 1]);
    }
    
}