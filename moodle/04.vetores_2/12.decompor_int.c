#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    int v[8], i = 0;
    while(num > 0){
        v[i] = num % 10;
        num /= 10;
        i++;
    }

    for(int j = i - 1; j > 0; j--) printf("%d ", v[j]);
    printf("%d", v[0]);
    printf("\n");
}