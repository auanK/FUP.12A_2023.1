#include <stdio.h>

int main(){
    int capacidade, passageiros, num = 0;
    scanf("%d", &capacidade);

    while(num < capacidade * 2){
        scanf("%d", &passageiros);
        num += passageiros;
        if(num == 0) printf("vazio\n");
        else if(num < capacidade) printf("ainda cabe\n");
        else if(num < capacidade * 2) printf("lotado\n");
    }
    printf("hora de partir\n");
}

    