#include <stdio.h>

int main(){
    char text[100];
    int index, length;
    scanf("%[^\n]%d%d", text, &index, &length);

    for(int i = index; i < index+length && text[i] != '\0'; i++) printf("%c", text[i]);
    printf("\n");
}