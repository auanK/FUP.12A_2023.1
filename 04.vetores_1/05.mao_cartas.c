#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int cartas[n];
    for(int i = 0; i < n; i++) scanf("%d", &cartas[i]);

    printf("[");
    for(int i = 0; i < n; i++){
        if(cartas[i] == 1) printf("A");
        else if(cartas[i] == 11) printf("J");
        else if(cartas[i] == 12) printf("Q");
        else if(cartas[i] == 13) printf("K");
        else printf("%d", cartas[i]);
        if(i < n - 1) printf(", ");
    }
    printf("]\n");
}