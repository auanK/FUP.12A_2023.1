#include <stdio.h>

char is_vogal(char letter) {
    if (letter == ' ')
        return ' ';
    else if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' ||
             letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' ||
             letter == 'O' || letter == 'U')
        return 'v';
    else
        return 'c';
}

int main(){
    char text[51];
    scanf("%[^\n]", text);

    for(int i = 0; text[i] != '\0'; i++) printf("%c", is_vogal(text[i]));
    printf("\n");
}