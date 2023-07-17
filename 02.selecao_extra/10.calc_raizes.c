#include <math.h>
#include <stdio.h>

int main() {
    float a, b, c, rd;

    scanf("%f%f%f", &a, &b, &c);

    rd = sqrt(pow(b, 2) - (4 * a * c));

    if (rd > 0) {
        printf("%.2f\n", (-b + rd) / (2 * a));
        printf("%.2f\n", (-b - rd) / (2 * a));
    } else if (rd == 0) printf("%.2f\n", (-b + rd) / (2 * a));
    else printf("nao ha raiz real\n");
}
