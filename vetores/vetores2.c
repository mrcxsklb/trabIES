#include <stdio.h>
#define MAX 10



void ler_vet(int *v, int n){
  int *last, *p;
  for(last=v+n, p=v; p < last; p++, v++)
    scanf("%d", v);
}

void imprimir_vet(int *v, int n){
  int *last, *p;
  for(last=v+n, p=v; p < last; p++, v++)
    printf("%d ", *v);
}  

int main(void) {
  int vet[11];
  int tamanho = MAX;
  printf("Digite os 10 valores de um vetor:\n");
  ler_vet(vet, tamanho);

  int i, j, aux;
  for (i = 0; i < tamanho - 1; i++) {
    for (j = 0; j < tamanho -i -1; j++) {
        if (vet[j] > vet[j + 1]) {
            aux = vet[j];
            vet[j] = vet[j + 1];
            vet[j + 1] = aux;
        }
    }
  }
  imprimir_vet(vet, tamanho);  
  return 0;
}