#include <stdio.h>

int main(){
    int n, m;
    scanf("%d%d", &n, &m);

    int a = n, b = m, r;

    while(b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    printf("%d\n", n * m / a);
}