#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    
    int vector[n]; 
    for(int i = 0; i < n; i++) scanf("%d", &vector[i]);
    
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(vector[i] * -1 == vector[j]){
                count++;
                break;
            }
        }
    }
    printf("%d\n", count/2);
}