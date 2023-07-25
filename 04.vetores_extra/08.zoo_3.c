#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int vector[n];
    for(int i = 0; i < n; i++) scanf("%d", &vector[i]);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(vector[j] > vector[j+1]){
                int aux = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = aux;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if(vector[i] != vector[i+1]) {
            printf("%d", vector[i]);
            if(i < n - 1) printf(" ");
        }
    }
    printf("\n");
}