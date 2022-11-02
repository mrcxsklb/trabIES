#include <stdio.h>

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

int main () {

    return 0;
}