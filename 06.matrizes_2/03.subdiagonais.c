#include <stdio.h>

int main(){
    int matriz[5][5];
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++) scanf("%d", &matriz[i][j]);
    }
    
    int result = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == j) result += matriz[i][j];
            if(i + j == 5 - 1) result -= matriz[i][j];
        }
    }
    printf("%d\n", result);
}