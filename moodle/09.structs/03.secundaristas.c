#include <stdio.h>

typedef struct st {
    char name[100];
    float n1, n2, n3, media;
} student;

void bubble_sort(student list[], int n){
    student aux;
    for (int k = n - 1; k > 0; k--) {
        for (int j = 0; j < k; j++) {
            if (list[j].media < list[j + 1].media) {
                aux = list[j];
                list[j] = list[j + 1];
                list[j + 1] = aux;
            }
        }
    }
}

int main(){
    int num_stu;
    scanf("%d", &num_stu);
    
    student list[num_stu];
    for(int i = 0; i < num_stu; i++){
        scanf(" %[^\n]s", list[i].name);
        scanf("%f %f %f", &list[i].n1, &list[i].n2, &list[i].n3);
        list[i].media = (list[i].n1 + list[i].n2 + list[i].n3)/3;
    }
    
    bubble_sort(list, num_stu);
    for(int i = 0; i < num_stu; i++){
        printf("%d: %s\n", i, list[i].name);
        printf("   Media: %.2f\n", list[i].media);
        printf("   N1: %.2f, N2: %.2f, N3: %.2f\n", list[i].n1, list[i].n2, list[i].n3);
    }
}