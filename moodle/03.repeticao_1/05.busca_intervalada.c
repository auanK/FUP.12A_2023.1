#include <stdio.h>

int main(){
    int n, inf, sup, num, count = 0;
    scanf("%d%d%d", &n, &inf, &sup);
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        if(num >= inf && num <= sup) count++;
    }

    printf("%d\n", count);
}