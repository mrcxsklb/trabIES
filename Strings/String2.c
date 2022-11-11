#include <stdio.h>
#include <ctype.h>
#define max 100

int main () {
    char str[max];
    printf("Entre com a String.\n");
    scanf("%[^\n]", str);
    int i;
    for (i = 0; str[i] != '\0';i++) {
        if (!isspace(str[i])) {
            printf("%c", str[i]);
        }
        else printf("\n");
    }
    return 0;
}