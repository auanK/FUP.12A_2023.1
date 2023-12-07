#include <stdio.h>

int main(){
    int n, t1 = 0, t2 = 1, prox, soma = 0;
    scanf("%d", &n);

    while(t1 + t2 <= n){
        prox = t1 + t2;
        t1 = t2;
        t2 = prox;
        if(prox % 2 == 0) soma += t2;
    }
        printf("%d\n", soma);
}