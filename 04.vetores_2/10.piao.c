#include <stdio.h>

int main() {
    int lim, num_jog, mai = 0, men = 0, a = 0;
    scanf("%d %d", &lim, &num_jog);
    int jog[num_jog], emp[num_jog];

    for (int i = 0; i < num_jog; i++) {
        scanf("%d", &jog[i]);
        jog[i] = (jog[i] < 0) ? jog[i] * -1 : jog[i];
        if (i == 0) {
            mai = jog[i];
            men = jog[i];
        } else {
            if (jog[i] >= mai) mai = jog[i];
            if (jog[i] <= men) men = jog[i];
        }
    }

    if (men <= lim && men >= 0) {
        for (int i = 0; i < num_jog; i++)
            if (jog[i] == men) emp[a++] = i;
        printf("%d\n", emp[a - 1]);
    } else printf("nenhum\n");
    

    a = 0;
    for (int i = 0; i < num_jog; i++)
        if (jog[i] == mai) emp[a++] = i;
        
    printf("%d\n", emp[a - 1]);
}
