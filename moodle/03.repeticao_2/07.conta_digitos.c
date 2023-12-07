#include <stdio.h>

int main(){
    int a, b, count = 0;
    scanf("%d%d", &a, &b);

    while(b > 0){
        if(b % 10 == a) count++;
        b /= 10;
    }

    printf("%d\n", count);
}