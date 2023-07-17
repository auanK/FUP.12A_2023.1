#include <stdio.h>

int main() {
    int jog1, jog2, jog3, jog4;
    scanf("%d%d%d%d", &jog1, &jog2, &jog3, &jog4);
    int sum = jog1 + jog2 + jog3 + jog4;
    int rest = sum % 4;
    
    if (sum == 0) printf("nenhum\n");
    else if (rest == 0) printf("jog4\n");
    else if (rest == 1) printf("jog1\n");
    else if (rest == 2) printf("jog2\n");
    else if (rest == 3) printf("jog3\n");
}