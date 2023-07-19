#include <stdio.h>

int main(){
    int n, aux;
    scanf("%d", &n);

    int vetor[n];

    for(int i = 0; i < n; i++) scanf("%d", &vetor[i]);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    for(int i = 0; i < n - 1; i++) printf("%d ", vetor[i]);
    printf("%d\n", vetor[n - 1]);
}