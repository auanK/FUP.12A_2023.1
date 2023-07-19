#include <stdio.h>

int main(){
    int n, i = 2;
    scanf("%d", &n);

    while(n % i != 0) i++;

    if(n == i) printf("1\n");
    else printf("0\n");
}