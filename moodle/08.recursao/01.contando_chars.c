#include <stdio.h>
#include <string.h>

int conta_char_rec(char s[], int n, char c){
    if(n == 0) return 0;
    return (s[n - 1] == c) + conta_char_rec(s, n - 1, c);
}

int main(){
   char s[102], c;
   fgets(s, sizeof(s), stdin);
   scanf("%c", &c);
   int n = strlen(s) - 1;
   printf("%d\n", conta_char_rec(s,n,c));
}