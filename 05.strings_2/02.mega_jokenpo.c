#include <stdio.h>
#include <string.h>

int opt(char option[10]) {
    char opt[9][30] = {"rock", "fire", "scissors", "human", "sponge", "paper", "air", "water", "gun"};
    for (int i = 0; i < 9; i++) {
        if (!strncmp(option, opt[i], 3)) {
            return i;
        }
    }
    return -1;
}

int main(){
    char jog1[10], jog2[10];
    scanf("%s %s", jog1, jog2);

    int j1 = opt(jog1);
    int j2 = opt(jog2);
    int dif = (j1 - j2 + 9) % 9;

    if(!dif) printf("empate\n");
    else if (dif <= 4) printf("jog2\n");
    else printf("jog1\n");
}