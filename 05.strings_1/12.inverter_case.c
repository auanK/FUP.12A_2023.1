#include <stdio.h>

char letter_type(char letter){
    if(letter >= 'A' && letter <= 'Z') return 1;
    else if(letter >= 'a' && letter <= 'z') return 2;
    else return 0;
}

int main(){
    char text[100];
    scanf("%[^\n]", text);

    for(int i = 0; text[i] != '\0'; i++){
        if(letter_type(text[i]) == 1) printf("%c", text[i] + 32);
        else if(letter_type(text[i]) == 2) printf("%c", text[i] - 32);
        else printf("%c", text[i]);
    }
    printf("\n");
}