#include <stdio.h>
#include <string.h>

int main(){
    char text[101], word[101], replace[101];
    scanf("%[^\n] %s %s", text, word, replace);

    for(int i = 0; i < strlen(text); i++){
        int found = 1;
        for(int j = 0; j < strlen(word); j++){
            if(text[i + j] != word[j]) {
                found = 0;
                break;
            }
        }
        if(found){
            for(int j = 0; j < strlen(replace); j++) printf("%c", replace[j]);
            i += strlen(word) - 1;
        } else printf("%c", text[i]);
    }
    printf("\n");
}