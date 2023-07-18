#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    long int a = 1, b = 1, termo;

    for(int i = 0; i < n - 2; i++){
        termo = a + b;
        a = b;
        b = termo;
    }

    printf("%ld\n", b);
}