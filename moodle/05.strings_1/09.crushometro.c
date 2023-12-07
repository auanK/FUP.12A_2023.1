// 50% ...

#include <stdio.h>
#include <string.h>

char is_vogal(char letter) {
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' ||
        letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' ||
        letter == 'O' || letter == 'U')
        return 1;
    return 0;
}

int main(){
    int percent = 0, vogal_name = 0, vogal_crush = 0;
    char name[100], crush[100];
    scanf("%s %s", name, crush);
    int size_name = strlen(name), size_crush = strlen(crush);

    if(name[0] == crush[0]) percent += 20;
    if(size_name == size_crush) percent += 30;

    for(int i = 0; i < size_name; i++) if(is_vogal(name[i])) vogal_name++;
    for(int i = 0; i< size_crush; i++) if(is_vogal(crush[i])) vogal_crush++;
    if(vogal_name == vogal_crush) percent += 30;

    if(is_vogal(name[size_name - 1]) == is_vogal(crush[size_crush - 1])) percent += 20;
    else{
        percent -= 10;
        if(percent < 0) percent = 0;
    }

    printf("As chances do crush te dar bola sao: %d%%!\n", percent);
}