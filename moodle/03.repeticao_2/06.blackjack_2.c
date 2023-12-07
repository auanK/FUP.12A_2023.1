#include <stdio.h>

int main(){
    int n, soma = 0, card, as = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &card);
        if(card > 10 && card < 14) soma += 10;
        else if(card == 1) {
            soma += 11;
            as++;
        }
        else soma += card;

        if(card == 1 && soma > 21) soma -= (10 * as);
    }

    printf("%d\n", soma);
}