#include <stdio.h>

int main(){
    int id, id_inverso = 0, id_original, resto;
    scanf("%d", &id);
    id_original = id;

    while(id > 0){
        resto = id % 10;
        id_inverso = id_inverso * 10 + resto;
        id /= 10;
    }

    if(id_inverso == id_original) printf("1\n");
    else printf("0\n");
}