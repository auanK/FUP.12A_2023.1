#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int is_palindrome(int num) {
    int temp = num;
    int reverse = 0;
    while (temp != 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    return num == reverse;
}

int main() {
    int n, num_pals;
    scanf("%d %d", &n, &num_pals);

    int init = pow(10, n) - 1;
    int final = pow(10, n - 1);

    int pals[99999];
    int num_pals_found = 0;
    for (int i = init; i >= final; i--) {
        for (int j = i; j >= final; j--) {
            int res = i * j;
            if (is_palindrome(res)) pals[num_pals_found++] = res;
        }
    }

    for (int i = 1; i < num_pals_found; i++) {
        int key = pals[i];
        int j = i - 1;
        while (j >= 0 && pals[j] < key) {
            pals[j + 1] = pals[j];
            j--;
        }
        pals[j + 1] = key;
    }
    
    for (int i = 0; i < num_pals; i++) printf("%d\n", pals[i]);
}
