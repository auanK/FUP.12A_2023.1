#include <stdio.h>

typedef struct op {
    int x, y;
    int som, subt, mult;
    float divi;
} operations;

int main() {
    operations op;
    scanf("%d %d", &op.x, &op.y);
    
    op.som = op.x + op.y;
    op.subt = op.x - op.y;
    op.mult = op.x * op.y;
    op.divi = (float)op.x / op.y;
    printf("%d %d %.1f %d\n", op.som, op.subt, op.divi, op.mult);
}