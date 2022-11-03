#include <stdio.h>
#include <math.h>

// Exercicio funcoes 01
int calcPotencia (int n, int x) {
    int i = 1;
    int aux = n;
    while (i < x) {
        n = aux*n;
        i++;
    }
    return n;
}

int main () {
    printf("%d\n", calcPotencia(7, 2));
}