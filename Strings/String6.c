#include <stdio.h>
#include <ctype.h>
#define max 100

int main () {
    char str[max];
    int espaco = 1;
    int i;
    printf("Entre com a String.\n");
    scanf("%[^\n]", str);
    for (i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i]))
            espaco++;
    }
    printf("A String possui %d palavras\n", espaco);
    return 0;
}