/*Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e
imprime no vídeo o correspondente em graus Celsius usando as fórmulas que
seguem.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double formCelsius(double f){
    double resp;
    resp = (f - 32.0)*(5.0/9.0);
    return resp;
}

int formtoCelsius(int fh){
    return (fh - 32.0)*(5.0/9);
}

int main()
{
    double f, c;
    int fh, cl;
    
    printf("Entre com o valor em graus Fahrenheit(double): ");
    scanf("%lf", &f);
    c = formCelsius(f);
    printf("Valor em Celcius: %.2lf\n", c);
    
    printf("Entre com o valor em graus Fahrenheit(int): ");
    scanf("%d", &fh);
    cl = formtoCelsius(fh);
    printf("Valor em Celcius: %d\n", cl);
    
    return 0;
}

