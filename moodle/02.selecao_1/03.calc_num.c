#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);

    char op;
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            printf("%d\n", a / b);
            break;
    }
}