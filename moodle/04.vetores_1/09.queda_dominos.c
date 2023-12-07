#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int fileira[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &fileira[i]);
        if(i != 0 && fileira[i] < fileira[i - 1]) {
            printf("precisa de ajuste\n");
            return 0;
        }
    }
    printf("ok\n");
}