#include <stdio.h>

int main(){
    char num[21];
    scanf("%s", num);

    int pairs = 0, odds = 0, n;

    for(int i = 0; num[i] != '\0'; i++){
        n = num[i] - '0';
        if(i % 2) odds += n;
        else pairs += n;
    }

    if((pairs - odds) % 11) printf("nao\n");
    else printf("sim\n");
}