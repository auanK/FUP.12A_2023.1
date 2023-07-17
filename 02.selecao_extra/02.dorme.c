#include <stdio.h>

int main(){
    int hora_d, min_d, seg_d, hora_a, min_a, seg_a, hora, min, seg;
    scanf("%d%d%d%d%d%d", &hora_d, &min_d, &seg_d, &hora_a, &min_a, &seg_a);

    seg = seg_a - seg_d;
    if(seg < 0){
        seg += 60;
        min_d++;
    }

    min = min_a - min_d;
    if(min < 0){
        min += 60;
        hora_d++;
    }

    hora = hora_a - hora_d;
    if(hora < 0) hora += 24;

    printf("%02d %02d %02d\n", hora, min, seg);    
}