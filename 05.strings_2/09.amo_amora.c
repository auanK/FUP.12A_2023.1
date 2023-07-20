#include <stdio.h>
#include <string.h>

int main(){
    char text[101], part[21];
    scanf("%[^\n] %s", text, part);

    int count, found;
    for(int i = 0; i <= strlen(text) - strlen(part); i++){
        int found = 1;
        for(int j = 0; j < strlen(part); j++){
            if(text[i + j] != part[j]) {
                found = 0;
                break;
            }
        }
        if(found) count++;
    }
    printf("%d\n", count);
}