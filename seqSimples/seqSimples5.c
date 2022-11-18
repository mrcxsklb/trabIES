/*Fazer um programa em "C" que solicite 2 números e informe
a) A soma dos números;
b) O produto do primeiro número pelo quadrado do segundo;
c) O quadrado do primeiro número;
d) A raiz quadrada da soma dos quadrados;
e) O seno da diferença do primeiro número pelo segundo;
f) O módulo do primeiro número. */
#include <stdio.h>
#include <math.h>
void sum(double a, double b){
    printf("A soma dos numeros: %lf\n", a+b);
}
void prod(double a, double b){
    printf("O produto do primeiro numero pelo quadrado do segundo: %lf\n", a*(b*b));
}
void quadprim(double a){
    printf("O quadrado do primeiro numero: %lf\n", a*a);
}
void sqr(double a,double b){
    int r;
    r = a+b;
    printf("A raiz quadrada da soma dos quadrados: %lf\n", sqrt(r));
}
void senodif(double a,double b){
    double r;
    r = a-b;
    printf("O seno da diferenca do primeiro numero pelo segundo: %lf\n", sin(r));
}
void moduloprim(double a){
    if(a < 0){
        printf("O modulo do primeiro numero: %lf\n", a*(- 1));
    }
    else{
        printf("O modulo do primeiro numero: %lf", a);
    }
}

int main()
{
    double a, b;
    printf("Insira dois numeros:\n");
    scanf("%lf", &a);
    scanf("%lf", &b);

    sum(a, b);
    prod(a,b);
    quadprim(a);
    sqr(a,b);
    senodif(a,b);
    moduloprim(a);
    
    return 0;
}

