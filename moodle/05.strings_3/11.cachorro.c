#include <stdio.h>

int main(){
    char text[100];
    scanf("%[^\n]", text);
    
    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] == ' ' && text[i+1] == ' ') continue;
        else printf("%c", text[i]);
    }
    printf("\n");
}