#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int vector[n];
    for (int i = 0; i < n; i++) scanf("%d", &vector[i]);

    int count = 0;    
    for (int i = 0; i < n; i++) {
        if (vector[i] != 0) {
            count++;
            for (int j = i + 1; j < n; j++) {
                if (vector[j] == vector[i]) vector[j] = 0;
            }
        }
    }
    printf("%d\n", count);
}
