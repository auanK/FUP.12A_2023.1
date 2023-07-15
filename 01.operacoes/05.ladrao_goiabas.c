#include <stdio.h>

int main() {
    int capac, ban, goi, man;
    scanf("%d%d%d%d", &capac, &ban, &goi, &man);

    int via = (ban + goi + man) / capac;

    if ((ban + goi + man) % capac != 0) {
        via++;
    }

    printf("%d\n", via);
}