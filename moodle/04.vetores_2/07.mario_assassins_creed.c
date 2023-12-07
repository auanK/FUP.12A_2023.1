#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int v[n];
    for(int i = 0; i < n; i++) scanf("%d", &v[i]);

    int parkour = 0;
    for(int i = 1; i < n; i++){
        if(v[i] - v[i - 1] > 1 || v[i - 1] - v[i] > 1) parkour++;
    }

    printf("%d\n", parkour);
}