#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_oper, num_grit;
    scanf("%d%d", &num_oper, &num_grit);

    int oper[num_oper], gri[num_grit];

    for (int i = 0; i < num_oper; i++) scanf("%d", &oper[i]);
    for (int i = 0; i < num_grit; i++) scanf("%d", &gri[i]);

    for (int i = 0; i < num_grit; i++) {
        for (int j = 0; j < num_oper; j++) {
            if (j == 0) {
                if (abs(oper[j]) == gri[i]) oper[j + 1] *= -1;
            } else if (j == num_oper - 1) {
                if (abs(oper[j]) == gri[i]) oper[j - 1] *= -1;
            } else {
                if (abs(oper[j]) == gri[i]) {
                    oper[j + 1] *= -1;
                    oper[j - 1] *= -1;
                }
            }
        }
    }

    printf("[");
    for(int i = 0; i < num_oper - 1; i++) printf("%d ", oper[i]);
    printf("%d]\n", oper[num_oper - 1]);
    
}