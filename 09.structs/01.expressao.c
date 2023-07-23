#include <stdio.h>

struct expression {
    int x, y;
    char operation;
};

void calc(struct expression ep) {
    int result;
    switch (ep.operation) {
        case '+':
            result = ep.x + ep.y;
            break;
        case '-':
            result = ep.x - ep.y;
            break;
        case '*':
            result = ep.x * ep.y;
            break;
        case '/':
            result = ep.x / ep.y;
            break;
    }
    printf("%d\n", result);
}

int main() {
    struct expression calculation;
    scanf("%d%d %c", &calculation.x, &calculation.y, &calculation.operation);

    calc(calculation);
}