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
    int base, potencia;
    
    printf("Digite um numero (base): ");
    scanf("%d", &base);
    printf("Digite um numero (potência): ");
    scanf("%d", &potencia);
    printf("%d\n", calcPotencia(base, potencia));
}
