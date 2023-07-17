#include <stdio.h>

int main() {
    int hora, min, dist;
    char sentido;

    scanf("%d%d %c%d", &hora, &min, &sentido, &dist);

    dist %= 72;
    if (sentido == 'H') {
        hora = (hora * 6 + min / 10 + dist) / 6;
        min = (min + dist * 10) % 60;
    } else {
        hora = ((hora * 6 + min / 10 - dist) / 6);
        min = ((hora * 6 + min) - dist * 10) % 60;
        if (min < 0) {
            min += 60;
            hora--;
        }
    }

    if (hora < 0) hora = 12 + hora;

    printf("%02d %02d\n", hora%12, min);
}

