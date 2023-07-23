#include <stdio.h>
#include <string.h>

int main(){
    char broken, number[100];    
    scanf("%c %s", &broken, number);

    char new_number_s[100];
    int new_number = 0, j = 0;
    for(int i = 0; i < strlen(number); i++){
        if(number[i] == broken) continue;
        new_number_s[j] = number[i];
        j++;
    }
    
    for(int i = 0; i < strlen(new_number_s); i++){
        new_number *= 10;
        new_number = new_number + (new_number_s[i] - '0');
    }
    printf("%d\n", new_number);
}