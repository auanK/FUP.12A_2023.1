#include <math.h>
#include <stdio.h>
int main() {
    char op;
    float num;
    scanf("%c %f", &op, &num);
    switch (op) {
        case 'r':
            printf("%d\n", (int)round(num));
            break;
        case 'f':
            printf("%d\n", (int)floor(num));
            break;
        case 'c':
            printf("%d\n", (int)ceil(num));
            break;
    }
}