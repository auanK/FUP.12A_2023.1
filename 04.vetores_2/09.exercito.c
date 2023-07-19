#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int v[n];
    for(int i = 0; i < n; i++) scanf("%d", &v[i]);
    
    int count = 0;

    if(v[0] == 0 && v[1] == 0) count++;
    for(int i = 1; i < n - 1; i++)
        if(v[i] == 0 && v[i - 1] == 0 && v[i + 1] == 0) count++;
    if(v[n - 1] == 0 && v[n - 2] == 0) count++;

    printf("%d\n", count);
}
