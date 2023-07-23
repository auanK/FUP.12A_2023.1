#include <stdio.h>

int main() {
    char name[100];
    scanf("%[^\n]", name);

    int sum = 0;
    for (int i = 0; name[i] != '\0'; i++) sum += name[i];
    
    int value = sum % 50;
    printf("%d\n", value);
    
    int letter = 'a' - 1;
    for (int i = 'a'; i <= 'z'; i++) {
        int current_value = (sum + i) % 50;
        if (current_value < value) {
            letter = i;
            value = current_value;
        }
    }

    int new_value = (sum + letter) % 50;
    if (letter != 'a' - 1) printf("%s%c\n%d\n", name, letter, new_value);
    else printf("%s\n%d\n", name, value);
}
