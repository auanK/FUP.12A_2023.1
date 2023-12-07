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
    char ultron_code[11]; 
    scanf("%s", ultron_code);

    char people_codes[10][21]; 
    int num_people = 0;

    while (scanf("%s", people_codes[num_people]) != EOF) num_people++;

    for (int i = 0; i < num_people; i++) {
        int result = is_ultron(ultron_code, people_codes[i]);

        if (result == 2) printf("chefe");
        else if (result == 1) printf("ultron");
        else printf("pessoa");
        if (i < num_people - 1) printf(" ");
    }
    printf("\n");
}
