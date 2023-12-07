#include <stdio.h>

int main() {
    int size_total, size_fig;
    scanf("%d %d", &size_total, &size_fig);

    int vector[size_fig];
    for (int i = 0; i < size_fig; i++) scanf("%d", &vector[i]);

    int found_repeated = 0;
    for (int i = 1; i < size_fig; i++) {
        if (vector[i] == vector[i - 1]) {
            if (!found_repeated) {
                printf("%d", vector[i]);
                found_repeated = 1;
            } else {
                printf(" %d", vector[i]);
            }
        }
    }

    if (found_repeated) printf("\n");
    else printf("N\n");

    int vector_falt[size_total];
    int counter_fig = 0;
    for (int i = 1; i <= size_total; i++) {
        int flag = 0;
        for (int j = 0; j < size_fig; j++) {
            if (i == vector[j]) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            vector_falt[counter_fig] = i;
            counter_fig++;
        }
    }

    if (counter_fig != 0) {
        for (int i = 0; i < counter_fig - 1; i++)
            printf("%d ", vector_falt[i]);
        printf("%d\n", vector_falt[counter_fig - 1]);
    } else {
        printf("N\n");
    }
}