#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int right[61] = {0}; 
    int left[61] = {0}; 
    int sum = 0;

    for (int i = 0; i < n; i++) {
        int number;
        char side;
        scanf("%d %c", &number, &side);

        if (side == 'D') right[number]++;
        else left[number]++;
    }

    for (int i = 30; i <= 60; i++) {
        if (left[i] < right[i]) sum += left[i];
        else sum += right[i];
    }
    printf("%d\n", sum);
}
