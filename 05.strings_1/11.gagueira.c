#include <stdio.h>
#include <string.h>

int main(){
    char text[100];
    scanf("%[^\n]", text);

    int count = 0;
    for(int i = 0; i <= strlen(text);i++){
        if(text[i] != ' ' && i <= strlen(text) - 1){
            printf("%c", text[i]);
            count++;
        }else{
            printf(" ");
            for(int j = i - count; j < i; j++) printf("%c", text[j]);
            if(i != strlen(text)) printf(" ");
            count = 0; 
        }
    }
    printf("\n");

}