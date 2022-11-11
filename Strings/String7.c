#include <stdio.h>
#define max 100

int main () {
    char stra[max], strb[max];
    printf("Entre com a String a ser copiada.\n");
    scanf("%[^\n]%*c", stra);
    int i = 0;
    while (stra[i] != '\0') {
        strb[i] = stra[i];
        i++;
    }
    strb[i] = '\0';
    printf("%s", strb);
    return 0;
}