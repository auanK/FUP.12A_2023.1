#include <stdio.h>

int main(){
    char name[100];
    scanf("%[^\n]", name);

    int sum = 0;
    for(int i = 0; name[i] != '\0'; i++) sum += name[i];

    int letter = 50 - (sum%50) + 50; 
    if(letter < 97) letter += 50;

    if(letter <= 122 && letter >= 97) printf("%s%c\n", name, letter);
    else printf("sem sorte\n");
}