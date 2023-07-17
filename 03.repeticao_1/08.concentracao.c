#include <stdio.h>

int main(){
    int a, b;
    scanf("%d%d", &a, &b);

    printf("[ ");
    for(int i = a; i <= b; i++) printf("%d %d", i, (a+b) - i);
    printf(" ]\n");
}