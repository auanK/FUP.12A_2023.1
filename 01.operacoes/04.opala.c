#include <stdio.h>

int main() {
    float speed, min, cons;
    scanf("%f%f%f", &speed, &min, &cons);
    float perf = (speed * (min / 60)) / cons;
    printf("%.02f\n", perf);
}