#include <stdio.h>

int main(){
    int a, b, c, meio;
    scanf("%d%d%d", &a, &b, &c);
    
    meio = a;

    if(meio < b && b < c || c < b && b < meio) meio = b;
    else if(meio < c && c < b || b < c && c < meio) meio = c;

    printf("%d\n", meio);
}