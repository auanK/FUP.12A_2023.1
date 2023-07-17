#include <stdio.h>

int main() {
    int dia, hora, min;
    scanf("%d%d%d", &dia, &hora, &min);

    if (dia == 1) printf("NAO\n");
    else if (dia > 1 && dia < 7)
        if (hora >= 8 && hora < 12 || hora >= 14 && hora < 18) printf("SIM\n");
        else printf("NAO\n");
    else
        if (hora >= 8 && hora < 12) printf("SIM\n");
        else printf("NAO\n");
}