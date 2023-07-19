#include <stdio.h>

int main(){
    int num, v[30], cont = 0;
    char c;

    do{
        scanf("%d%c", &num, &c);
        v[cont] = num;
        cont++;
    } while (c != '\n');
    
    printf("[ ");
    for(int i = cont - 1; i >= 0; i--) printf("%d ", v[i]);
    printf("]\n");
}