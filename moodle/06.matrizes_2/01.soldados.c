#include <stdio.h>

int main(){
    int n_lin, n_col;
    scanf("%d%d", &n_lin, &n_col);

    int quarter[n_lin][n_col];
    for(int i = 0; i < n_lin; i++){
        for(int j = 0; j < n_col; j++) scanf("%d", &quarter[i][j]);       
    }

    int count = 0;
    for(int i = 0; i < n_lin; i++){
        for(int j = 0; j < n_col; j++) {
            if(i != n_lin - 1) 
                if(quarter[i][j] > quarter[i + 1][j]) count++;
        }
    }
    printf("%d\n", count);
}