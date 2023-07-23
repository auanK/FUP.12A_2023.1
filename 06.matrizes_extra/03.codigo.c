#include <stdio.h>

int count_pattern_100(int sequence[], int size) {
    int count = 0;
    for (int i = 0; i < size - 2; i++) {
        if (sequence[i] == 1 && sequence[i + 1] == 0 && sequence[i + 2] == 0) count++;
    }
    return count;
}

int main() {
    int n, sequence[10000];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) scanf("%d", &sequence[i]);

    printf("%d\n", count_pattern_100(sequence, n));
}
