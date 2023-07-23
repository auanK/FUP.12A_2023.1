#include <stdio.h>

int main() {
    int n_lin, n_col;
    
    scanf("%d%d", &n_lin, &n_col);
    
    int matriz_1[n_lin][n_col];
    for (int i = 0; i < n_lin; i++) {
        for (int j = 0; j < n_col; j++) scanf("%d", &matriz_1[i][j]); 
    }
    
    int matriz_2[n_lin][n_col];
    for (int i = 0; i < n_lin; i++) {
        for (int j = 0; j < n_col; j++) scanf("%d", &matriz_2[i][j]);
    }
    
    for (int i = 0; i < n_lin; i++) {
        printf("[ ");
        for (int j = 0; j < n_col; j++) {
            printf("%d", matriz_1[i][j] + matriz_2[i][j]);
            if (j < n_col - 1) printf(" ");
            
        }
        printf(" ]\n");
    }  
}