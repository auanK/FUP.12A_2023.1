#include <stdio.h>

int main(){
    int num_casas, num_caminhoes;
    scanf("%d%d", &num_casas, &num_caminhoes);

    int a, b, l, casas[num_casas];

    for(int i = 0; i < num_casas; i++) casas[i] = 0;

    for(int i = 0; i < num_caminhoes; i++){
        scanf("%d%d%d", &a, &b, &l);
        for(int j = a; j <= b; j++) casas[j] += l;
    }

    for(int i = 0; i < num_casas - 1; i++) printf("%d ", casas[i]);
    printf("%d\n", casas[num_casas - 1]); 
}