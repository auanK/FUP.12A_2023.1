#include <stdio.h>

int main(){
    int matriz[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) scanf("%d", &matriz[i][j]);
    }

    int sum = 0;
    for(int i = 0; i < 3; i++) sum += matriz[0][i];

    for(int i = 0; i < 3; i++){
        int tmp = 0;
        for(int j = 0; j < 3; j++) tmp += matriz[i][j];
        if(tmp != sum){
            printf("nao\n");
            return 0;
        }
    }
    printf("sim\n");
}