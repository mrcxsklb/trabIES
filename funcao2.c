#include<stdio.h>

// Exercicio funcoes 02
int fatorial (int x) {
    if(x != 1) {
        return x * fatorial(x - 1);
    }
    return x;
}

int main() {
    printf("%d\n", fatorial(5));
    return 0;
}
