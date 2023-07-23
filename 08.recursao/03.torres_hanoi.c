#include <stdio.h>

void hanoi(int n, char source, char destination, char aux) {
    if (n == 1) {
        printf("%c -> %c\n", source, destination);
        return;
    }
    hanoi(n - 1, source, aux, destination);
    printf("%c -> %c\n", source, destination);
    hanoi(n - 1, aux, destination, source);
}

int main() {
    int n;
    scanf("%d", &n);
    hanoi(n, 'A', 'C', 'B');
}
