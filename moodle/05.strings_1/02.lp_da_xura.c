#include <stdio.h>

int main(){
    char text[100];
    scanf("%[^\n]", text);
    int i = 0;
    while(text[i] != '\0') i++;

    for(int j = i-1; j >= 0; j--) printf("%c", text[j]);
    printf("\n");
}