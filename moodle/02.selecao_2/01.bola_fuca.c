#include <stdio.h>

int main() {
    char saque;
    int forca, poder;
    scanf("%c %d", &saque, &forca);

    if (saque == 'b') poder = ((forca * 20) - 80) / 10;
    else poder = ((forca * 18) - 80) / 10;

    if (poder < 150) printf("Fraco, nem passou\n");
    else if (poder >= 150 && poder < 180) printf("Perfeito\n");
    else if (poder >= 180 && poder < 210) printf("Satisfeito\n");
    else printf("Muito forte, bola fora\n");
    
}