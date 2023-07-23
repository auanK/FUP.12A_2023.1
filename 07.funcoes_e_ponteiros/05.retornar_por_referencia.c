#include <stdio.h>

void converte_tempo(int segundos, int *hor, int *min, int *seg){
    *hor = segundos / 3600;
    *min = (segundos % 3600) / 60;
    *seg = (segundos % 3600) % 60;
}

int main(){
    int tempo, h, m, s;
    scanf("%d", &tempo);

    converte_tempo(tempo, &h, &m, &s);
    printf("%d:%d:%d\n", h, m, s);
}