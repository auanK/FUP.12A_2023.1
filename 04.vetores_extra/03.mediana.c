#include <stdio.h>
#include <string.h>

int main() {
    int len, gen;
    scanf("%d%d", &len, &gen);

    char chars[100], pass[len + 1];
    scanf("%s %s", chars, pass);

    for (int i = 0, n = strlen(chars); i < gen; i++) {
        int pos = len - 1;

        while (pos >= 0) {
            int idx = 0;
            while (chars[idx] != pass[pos]) idx++;

            idx = (idx + 1) % n; 
            pass[pos] = chars[idx];
            
            if (idx != 0) break;
            pos--;
        }
        printf("%s\n", pass);
    }
}
