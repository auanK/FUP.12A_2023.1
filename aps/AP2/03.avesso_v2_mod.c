#include <stdio.h>
#include <stdlib.h>

int main (){
    
    int size, grito = 1;
    scanf("%d", &size);
    
    int vector_op[size];
    for(int i = 0; i < size; i++) scanf("%d", &vector_op[i]);
    
    while(grito != 0){
        scanf("%d", &grito);
        for(int i = 0; i < size; i++){
            if(abs(vector_op[i]) == grito){
                if((i - 1) >= 0) vector_op[(i - 1)] *= -1;
                if((i + 1) < size) vector_op[(i + 1)] *= -1;
                
            }
        }
    }

    printf("[");
    for(int i = 0; i < size - 1; i++) printf("%d, ", vector_op[i]);
    printf("%d]\n", vector_op[size - 1]);

}
