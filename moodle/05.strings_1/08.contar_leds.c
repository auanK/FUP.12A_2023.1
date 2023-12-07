#include <stdio.h>

int main(){
    int n, ind, count;
    scanf("%d", &n);
    char number[31];
    int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    for(int i = 0; i < n; i++) {
        count = 0;
        scanf(" %s", number);
        for(int j = 0; number[j] != '\0'; j++) {
            ind = number[j] - '0';
            count += leds[ind];
        }
        printf("%d leds\n", count);
    }
}