#include <stdio.h>

char *primoco(char *str, char c) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == c) {
            return &str[i];
        }
    }
    return 0;
}