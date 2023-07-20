#include <stdio.h>
int main(){
    char text[100], letter;
    scanf("%[^\n] %c", text, &letter);
    int count = 0;
    for(int i = 0; text[i] != '\0'; i++) if(text[i] == letter || text[i] == letter - 32) count++;

    printf("%d\n", count);
}