#include <stdio.h>

int fatorial (int x) {
    if(x != 1) {
        return x * fatorial(x - 1);
    }
    return x;
}

// Exercicio funcoes 03
float ex (int n) {
    int i;
    float soma = 1 + n;
    for (i = 2; pow(n, i)/(float)fatorial(i) > 0.000001; i++)
        soma += pow(n, i)/(float)fatorial(i);
    return soma;    
}

int main () {
    printf("%f\n", ex(3));
    return 0;
}