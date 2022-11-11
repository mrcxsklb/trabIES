#include <stdio.h>
#define max 100

char printStrInverso(char str[], int i) {
    if (i - 1 >= 0) {
        printf("%c", str[i]);
        return printStrInverso(str, i-1);
    }
    else return printf("%c", str[i]);
}

char printStr(char str[], int i) {
    if (str[i + 1] != '\0') {
        printf("%c", str[i]);
        return printStr(str, i+1);
    }
    else printf("%c\n", str[i]);
}

int main () {
    char str[max];
    int i;
    printf("Entre com a String.\n");
    scanf("%[^\n]", str);
    for (i = 0; str[i] != '\0'; i++);
    printStr(str, 0);
    printStrInverso(str, i);

}