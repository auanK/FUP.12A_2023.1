#include <stdio.h>

int main(){
    int angulo;
    scanf("%d", &angulo);

    angulo %= 360;

    if(angulo < 0) angulo += 360;
    printf("%d\n", angulo);
}