#include <stdio.h>

int main(){
    char name[100];
    scanf("%s", name);
    int sum = 0;

    for(int i = 0; name[i] != '\0'; i++) sum += name[i];
    
    printf("%d\n", sum%50);
}