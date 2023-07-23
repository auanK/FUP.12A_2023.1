#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d\n", &n);

    char text[n][101];
    for (int i = 0; i < n; i++) {
        scanf("%[^\n]", text[i]);
        getchar();
    }

    for (int i = 0; i < n; i++) {
        int flag = (text[i][0] >= 'a' && text[i][0] <= 'z') ? 0 : 1;
        
        for (int j = 0; j < strlen(text[i]); j++) {
            if (text[i][j] >= 'a' && text[i][j] <= 'z') {
                if (flag) text[i][j] = text[i][j] - 32;
                flag = !flag;
            } else if (text[i][j] >= 'A' && text[i][j] <= 'Z') {
                if (!flag) text[i][j] = text[i][j] + 32;
                flag = !flag;
            }
        }
    }
    for (int i = 0; i < n; i++) printf("%s\n", text[i]);
}
