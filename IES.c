#include <stdio.h>
#include <math.h>

int calcPotencia (int n, int x) {
    int i = 1;
    int aux = n;
    while (i < x) {
        n = aux*n;
        i++;
    }
    return n;
}

int fatorial (int x) {
    if(x != 1) {
        return x * fatorial(x - 1);
    }
    return x;
}

float ex (int n) {
    int i;
    float soma = 1 + n;
    for (i = 2; pow(n, i)/(float)fatorial(i) > 0.000001; i++)
        soma += pow(n, i)/(float)fatorial(i);
    return soma;    
}

int main () {
    printf("%f ", ex(3));
    return 0;
}