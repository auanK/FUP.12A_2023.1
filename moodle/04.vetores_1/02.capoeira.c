#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int v[n];

    for(int i = 0; i < n; i++) scanf("%d", &v[i]);

    printf("[ ");
    for(int i = n - 1; i >= 0; i--) printf("%d ", v[i]);
    printf("]\n");

}