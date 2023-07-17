#include <math.h>
#include <stdio.h>

int main() {
    float x1, y1, x2, y2;
    scanf("%f%f%f%f", &x1, &y1, &x2, &y2);

    float dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("%.2f\n", dist);
}