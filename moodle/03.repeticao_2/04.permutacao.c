#include <stdio.h>

int main(){
    int a, b, cont_a = 0, cont_b = 0;;
    scanf("%d%d", &a, &b);

    for(int i = 0; i < 10; i++){
        int aux_a = a, aux_b = b;
        while(aux_a > 0){
            if(aux_a % 10 == i) cont_a++;
            aux_a /= 10;
        }
        while(aux_b > 0){
            if(aux_b % 10 == i) cont_b++;
            aux_b /= 10;
        }
        if(cont_a != cont_b){
            printf("False\n");
            return 0;
        }
    }
    printf("True\n");
}