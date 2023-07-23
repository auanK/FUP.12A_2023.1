#include <stdio.h>
#include <string.h>

int is_ultron(char *ultron_code, char *person_code) {
    int total_letters = strlen(person_code);
    int matching_letters = 0;

    for (int i = 0; i < total_letters; i++) {
        char letter = person_code[i];
        if (strchr(ultron_code, letter) != NULL) matching_letters++;
    }

    int matching_percentage = (matching_letters * 100) / total_letters;

    if (matching_percentage == 100) return 2; 
    else if (matching_percentage > 50) return 1; 
    else return 0; 
}

int main() {
    int x;
    scanf("%d", &x);

    char ultron_code[27];
    char person_code[101];

    for (int i = 0; i < x; i++) {
        scanf("%s", ultron_code);
        scanf("%s", person_code);

        int result = is_ultron(ultron_code, person_code);

        if (result == 2) printf("chefe\n");
        else if (result == 1) printf("ultron\n");
        else printf("pessoa\n");
    }
}