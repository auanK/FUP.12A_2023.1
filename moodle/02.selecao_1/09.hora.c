#include <stdio.h>

int main() {
    int hora, minuto, segundo;
    scanf("%d%d%d", &hora, &minuto, &segundo);

    if (segundo == 59) {
        segundo = 0;
        if (minuto == 59) {
            minuto = 0;
            if (hora == 23) {
                hora = 0;
            } else {
                hora++;
            }
        } else {
            minuto++;
        }
    } else {
        segundo++;
    }

    printf("%02d %02d %02d\n", hora, minuto, segundo);
}