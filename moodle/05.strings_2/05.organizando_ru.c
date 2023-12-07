#include <stdio.h>

char typer_letter(char letter){
    if(letter == ' ') return 0;
    else if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') return 1;
    else return 2;
}

int main(){
    char text[101];
    scanf("%[^\n]", text);

    for(int i = 0; text[i] != '\0'; i++) if(typer_letter(text[i]) == 1) printf("%c", text[i]);
    printf("\n");
    for(int i = 0; text[i] != '\0'; i++) if(typer_letter(text[i]) == 2) printf("%c", text[i]);
    printf("\n");
}