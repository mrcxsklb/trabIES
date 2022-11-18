/*Fazer um programa que solicita um número decimal e imprime o
correspondente em hexa e octal.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void hexaOctal(int value, char str[]){
    printf("%d em octal: %o\n",value, value);
    printf("%d em hexa: %X\n",value, value);
}

int main()
{
    int x;
    char str[10];
    printf("Insira o numero decimal: ");
    scanf("%d", &x);
    hexaOctal(x, str);
    return 0;
}

