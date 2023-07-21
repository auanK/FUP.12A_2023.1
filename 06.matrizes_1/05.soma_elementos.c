#include <stdio.h>

int main(){
    int matriz[2][3];
    int sum = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
            sum += matriz[i][j];
        }
    }

    printf("%d\n", sum);
}