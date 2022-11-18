/*Fazer um programa que lê um valor, um operador (+,-,*,/) e outro valor e
imprime o resultado da expressão:
<valor 1> <operador> <valor 2>*/
#include <stdio.h>

void calculadora(float x, char c, float y){
    if(c == '+'){
        printf("%.2f %c %.2f = %.2f", x, c, y, x+y);
    }
    else if(c == '-'){
        printf("%.2f %c %.2f = %.2f", x, c, y, x-y);
    }
    else if(c == '*'){
        printf("%.2f %c %.2f = %.2f", x, c, y, x*y);
    }
    else{
        printf("%.2f %c %.2f = %.2f", x, c, y, x/y);
    }
}

int main()
{
    float x, y;
    char c;
    printf("Entre com a seguinte formatacao: VALOR OPERADOR VALOR\n");
    scanf("%f %c %f", &x, &c, &y);
    calculadora(x, c, y);
    return 0;
}

