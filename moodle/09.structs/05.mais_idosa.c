#include <stdio.h>
#include <string.h>

typedef struct p {
    char name[50];
    int age;
    char gender;
} people;

int main() {
    int qtd_peoples, qtd_womans;
    scanf("%d", &qtd_peoples);

    people peoples[qtd_peoples];
    for (int i = 0; i < qtd_peoples; i++) {
        scanf("%s", peoples[i].name);
        scanf("%d", &peoples[i].age);
        scanf(" %c", &peoples[i].gender);
        if (peoples[i].gender == 'f') qtd_womans++;
    }

    if (qtd_womans) {
        int old = 0;
        char name_old[100];
        for (int i = 0; i < qtd_peoples; i++) {
            if (peoples[i].gender == 'f') {
                if (peoples[i].age > old) {
                    old = peoples[i].age;
                    strcpy(name_old, peoples[i].name);
                }
            }
        }
        printf("%s\n", name_old);
    } else printf("nao tem mulher\n");
}
