#include <stdio.h>
#include <ctype.h>
#define max 80

int main () {
    char str[max];
    int punct = 0;
    int digit = 0;
    int lower = 0;
    int i;

    printf("Entre com a String.\n");
    scanf("%[^\n]", str);
    for (i = 0; str[i] != '\0'; i++) {
        if (ispunct(str[i])) {
            punct++;
        }
        else if (islower(str[i])) {
            lower++;
        }
        else if (isdigit(str[i])) {
            digit++;
        }
    }
    printf("A string tem %d caracteres.\n", i);
    printf("%d sao de pontucao.\n", punct);
    printf("%d sao numeros.\n", digit);
    printf("%d sao letras minusculas\n", lower);

    return 0;
}