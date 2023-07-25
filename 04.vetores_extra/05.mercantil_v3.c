#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);

    float valores[n];
    for (int i = 0; i < n; i++) scanf("%f", &valores[i]);
    
    float chutes[n];
    for (int i = 0; i < n; i++) scanf("%f", &chutes[i]);
    
    char escolhas[n];
    for (int i = 0; i < n; i++) scanf(" %c", &escolhas[i]); 
    
    int vitorias_jogador1 = 0; 
    int vitorias_jogador2 = 0; 
    for (int i = 0; i < n; i++) {
        if ((chutes[i] > valores[i] && escolhas[i] == 'm') || (chutes[i] < valores[i] && escolhas[i] == 'M')) {
            vitorias_jogador2++;
        } else vitorias_jogador1++;
        
    }

    if (vitorias_jogador1 > vitorias_jogador2) printf("primeiro\n");
    else if (vitorias_jogador1 < vitorias_jogador2) printf("segundo\n");
    else printf("empate\n");
}
