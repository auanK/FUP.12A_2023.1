#include <stdio.h>

int main(){
    char c;
    scanf("%c", &c);
    
    if(c >= 'A' && c <= 'Z') c += 32;
    else if(c >= 'a' && c <= 'z')  c -= 32;

    printf("%c\n", c);
}