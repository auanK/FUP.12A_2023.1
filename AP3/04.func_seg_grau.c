#include <math.h>
#include <stdio.h>

int funcseggrau(double a, double b, double c, double *r1, double *r2) {
    double delta = pow(b, 2) - 4 * a * c;
    if (delta < 0) {
        *r1 = 0;
        *r2 = 0;
        return 0;
    } else if (delta == 0) {
        *r1 = -b / (2 * a);
        *r2 = 0;
        return 1;
    } else {
        *r1 = (-b + sqrt(delta)) / (2 * a);
        *r2 = (-b - sqrt(delta)) / (2 * a);
        return 2;
    }
}