#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int fila[n];
    for(int i = 0; i < n; i++) scanf("%d", &fila[i]);

    printf("[ ");
    for(int i = 0; i < n; i++) if(fila[i] % 2 != 0) printf("%d ", fila[i]);
    printf("]\n");
    
    printf("[ ");
    for(int i = 0; i < n; i++) if(fila[i] % 2 == 0) printf("%d ", fila[i]);
    printf("]\n");
}