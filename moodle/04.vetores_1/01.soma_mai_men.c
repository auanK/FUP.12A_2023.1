#include <stdio.h>

int main(){
    int v[5];

    for(int i = 0; i < 5; i++) scanf("%d", &v[i]);

    int maior = v[0], menor = v[0];
    for(int i = 1; i < 5; i++){
        if(v[i] > maior) maior = v[i];
        if(v[i] < menor) menor = v[i];
    }

    printf("%d\n", menor + maior);
}