#include <stdio.h>
#include <string.h>
#define max 100

void checkDigit(int digit) {
    int flag;
    while (digit) {
        flag = digit%10;
        switch (flag) {
            case 0:
                printf("zero ");
            break;
            case 1:
                printf("um ");
            break;
            case 2:
                printf("dois ");
            break;
            case 3:
                printf("tres ");
            break;
            case 4:
                printf("quatro ");
            break;
            case 5:
                printf("cinco ");
            break;
            case 6:
                printf("seis ");
            break;
            case 7:
                printf("sete ");
            break;
            case 8:
                printf("oito ");
            break;
            case 9:
                printf("nove ");
            break;
        }
        digit /= 10;
    }
}

int main () {
    int digit;
    printf("Entre com o numero");
    scanf("%d", &digit);
    checkDigit(digit);
    return 0;
}