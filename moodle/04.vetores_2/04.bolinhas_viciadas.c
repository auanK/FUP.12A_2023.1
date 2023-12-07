#include <stdio.h>

int main(void) {
    int size;
    scanf("%d", &size);
    
    int vector[size];
    
    for (int i = 0; i < size; i++) scanf("%d", &vector[i]);
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (vector[j] > vector[j + 1]) {
                int aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
            }
        }
    }
    
    int counter_dif = 1, index = 0;
    for (int i = 1; i < size; i++) {
        if (vector[i - 1] != vector[i]) {
            counter_dif++;
        }
    }
    
    printf("%d\n", counter_dif);
    int vector2[counter_dif];
    
    vector2[0] = 1;
    for (int i = 1; i < size; i++) {
        if (vector[i] == vector[i - 1]) {
            vector2[index]++;
        } else {
            index++;
            vector2[index] = 1;
        }
    }
    
    int max = vector2[0], qtd_max = 1;

    for (int i = 1; i < counter_dif; i++) {
        if (vector2[i] > max) {
            max = vector2[i];
            qtd_max = 1;
        } else if (vector2[i] == max) {
            qtd_max++;
        }
    }
    
    int vec_max[qtd_max];
    int index_max = 0, soma = 0;
    
    for (int i = 0; i < counter_dif; i++) {
        soma += vector2[i];
        if (vector2[i] == max) {
            vec_max[index_max] = vector[soma - 1];
            index_max++;
        }
    }
    
    for (int i = 0; i < index_max - 1; i++) printf("%d ", vec_max[i]);
    printf("%d\n", vec_max[index_max - 1]);
}