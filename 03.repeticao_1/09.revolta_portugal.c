#include <stdio.h>

int main(){
    int n, num, rebeldes = 0, soldados = 0;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        if(num % 2 != 0) soldados += num;
        else rebeldes += num;
    }

    if(soldados > rebeldes) printf("soldados\n");
    else if(rebeldes > soldados) printf("rebeldes\n");
    else printf("empate\n");
}