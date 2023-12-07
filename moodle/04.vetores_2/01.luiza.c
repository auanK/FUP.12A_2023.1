#include <stdio.h>

int main(){
    int n, num;
    scanf("%d", &n);

    int v[n];
    for(int i = 0; i < n; i++) scanf("%d", &v[i]);

    for(int i = 0; i < n; i++){
        num *= 10;
        num += v[i];
    }
    printf("%d\n", num);
}