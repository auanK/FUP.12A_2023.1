#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char** v = (char**)malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++) {
        int len;
        scanf("%d", &len);
        
        v[i] = (char*)malloc((len + 1) * sizeof(char));
        scanf(" %[^\n]", v[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(v[j], v[j + 1]) > 0) {
                char* temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++) printf("%s\n", v[i]);
}