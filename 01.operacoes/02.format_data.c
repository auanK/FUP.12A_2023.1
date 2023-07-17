#include <stdio.h>

int main() {
    int hor, min, day, mon, year;
    
    scanf("%d%d%d%d%d", &hor, &min, &day, &mon, &year);

    hor %= 12;
    printf("%02d:%02d %02d/%02d/%02d\n", hor, min, day, mon, year % 100);
}