#include <stdio.h>

int main(){
    int count;
    char text[100], c;
    scanf("%[^\n] %c", text, &c);

    for(int i = 0; text[i] != '\0'; i++) if(text[i] == c) count++;

    printf("%d\n", count);
}