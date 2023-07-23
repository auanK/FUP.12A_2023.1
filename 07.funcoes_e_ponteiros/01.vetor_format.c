#include <stdio.h>

void print_vet(int vector[], int size){
    printf("[");
    for(int i = 0; i < size; i++){
        printf("%d", vector[i]);
        if(i < size - 1) printf(", ");
    }
    printf("]\n");
}

int main(){
    int n;
    scanf("%d", &n);

    while(n--){
        int size;
        scanf("%d", &size);

        int vector[size];
        for(int i = 0; i < size; i++) scanf("%d", &vector[i]);
        print_vet(vector, size);
    }
}