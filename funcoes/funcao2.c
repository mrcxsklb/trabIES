#include<stdio.h>

// Exercicio funcoes 02
int fatorialR (int x) {
    if(x != 1) {
        return x * fatorialR(x - 1);
    }
    return x;
}

int fatorial(int x){
  int fat;
  for(int i=fat=1; i<=x; i++)
    fat*=i;
  return fat;
}

int main() {
    int x;
    
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Recursivo -> %d! = %d\nIterativo -> %d! = %d\n", x, fatorialR(x), x, fatorial(x));
    return 0;
}
