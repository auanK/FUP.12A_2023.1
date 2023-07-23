#include <stdio.h>

void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int x = 0, y = 0;
    scanf("%d %d", &x, &y);

    troca(&x, &y);
    printf("%d %d\n", x, y);
}