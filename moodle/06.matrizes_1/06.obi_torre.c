#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int board[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) scanf("%d", &board[i][j]);
    }
    
    int max = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int sum = 0;
            for(int k = 0; k < n; k++) if(k != j) sum += board[i][k];
            for(int k = 0; k < n; k++) if(k != i) sum += board[k][j];
            if(sum > max) max = sum;
        }
    }
    printf("%d\n", max);
}