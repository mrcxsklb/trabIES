#include <stdio.h>

void soma_sub_prod(float a, float b, float *soma, float *sub, float *prod){

  *soma = a+b;
  *sub = a-b;
  *prod = a*b;
}

int main(void) {
  float x, y, soma, sub, prod;
  
  printf("Digite dois numeros: ");
  scanf("%f %f", &x, &y);
  soma_sub_prod(x, y, &soma, &sub, &prod);
  
  printf("Soma = %.2f\nDiferenca = %.2f\nProduto = %.2f\n", soma, sub, prod);
    
  return 0;
}