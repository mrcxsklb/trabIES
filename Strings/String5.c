#include <stdio.h>
#include <string.h>

int main () {
    char str[3];
    printf("Entre com SIM ou NAO.\n");
    scanf("%[^\n]", str);
    if (!strcmp(str, "SIM")) {
        printf("1\n");
    }
    else if (!strcmp(str, "NAO")) {
        printf("0\n");
    }
    else return 0;
}