#include <stdio.h>

void character(int *attack, int *life) { *life -= *attack; }

int main() {
    int life_1, attack_1, life_2, attack_2;
    scanf("%d%d%d%d", &life_1, &attack_1, &life_2, &attack_2);

    while (life_1 > 0 && life_2 > 0) {
        character(&attack_1, &life_2);
        character(&attack_2, &life_1);
    }
    
    if (life_1 > 0) printf("Personagem 1\n");
    else if (life_2 > 0) printf("Personagem 2\n");
    else printf("Empate\n");
}
