#include <stdio.h>

int main(){
    char text[200];
    scanf("%[^\n]", text);

    for(int i = 0; text[i] != '\0'; i++){
        if(text[i] == ' ' && text[i + 1] == ' ') {
            i++;
            if(text[i] == ' ' && text[i + 1] != ' ') printf("%c", text[i]);
        } else printf("%c", text[i]);
    }
    printf("\n");
}