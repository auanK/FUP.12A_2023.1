#include <stdio.h>

int main(){
    int n, x;
    scanf("%d%d", &n, &x);

    int participantes[n];
    for(int i = 0; i < n; i++) participantes[i] = 1;

    for(int i = 0; i < n - 1; i++){
        participantes[x%n] = 0;
        while(participantes[x%n] == 0){
            x++;
            x %= n;
        } 
        x++;
        x %= n;
        while(participantes[x%n] == 0){
            x++;
            x %= n;
        }
    }

    for(int i = 0; i < n; i++) {
        if(participantes[i] == 1) {
            printf("%d\n", ++i);
            break;
        }
    }
}