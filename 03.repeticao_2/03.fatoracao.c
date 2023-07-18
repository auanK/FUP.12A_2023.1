#include <stdio.h>

int main(){
    int n, cont;
    scanf("%d", &n);
    int i = 2;
    while(n > 1){
        cont = 0;
        while(n % i == 0){
            cont++;
            n /= i;
        }
        if(cont > 0) printf("%d %d\n", i, cont);
        i++;
    }
}