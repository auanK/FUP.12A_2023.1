#include <stdio.h>

int main() {
    char char_1, oper, char_2;
    scanf("%c %c %c", &char_1, &oper, &char_2);

    int value_1 = char_1 - 'a';
    int value_2 = char_2 - 'a';
    int tmp;

    if (oper == '+') tmp = (value_1 + value_2) % 26;
    else tmp = (value_1 - value_2 + 26) % 26;
    
    int result = 'a' + tmp;

    printf("%c\n", result);
}
