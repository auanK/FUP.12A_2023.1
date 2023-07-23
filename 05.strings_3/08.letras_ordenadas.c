#include <stdio.h>

void find_longest(char c, int sz[]) {
    int longest = 0;
    for (int i = c - 'A' + 1; i >= 0; i--) if (sz[i] > longest) longest = sz[i];
    sz[c - 'A' + 1] = longest + 1;
}

int main() {
    int longest = 0, sz[27];
    char text[315];
    scanf("%s", text);

    for (int i = 0; i < 27; i++) sz[i] = -315;
    sz[0] = 0;

    for (int i = 0; text[i]; i++) find_longest(text[i], sz);
    for (int i = 0; i < 27; i++) if (sz[i] > longest) longest = sz[i];

    printf("%d\n", longest);
}