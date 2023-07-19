#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int v[n];
    for (int i = 0; i < n; i++) scanf("%d", &v[i]);

    int ed = 1;
    for (int i = 1; i < n; i++) {
        if (v[i] != v[i - 1]) ed++;
    }

    int e[ed], q[ed], idx = 0, count = 1;
    e[0] = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] == v[i - 1])
            count++;
        else {
            q[idx] = count;
            e[idx] = v[i - 1];
            idx++;
            count = 1;
        }
    }
    q[idx] = count;
    e[idx] = v[n - 1];

    int maior = -1;
    for (int i = 0; i < ed; i++)
        if (q[i] > maior) maior = q[i];

    int prim = 1;
    for (int i = 0; i < ed; i++) {
        if (q[i] == maior) {
            printf(prim ? "%d" : " %d", e[i]);
            prim = 0;
        }
    }
    printf("\n");
}
