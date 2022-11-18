#include <stdio.h>
#define MAX 10

typedef struct{
  int vet[MAX];
  int maior, menor;
  int tamanho;
} VETOR;

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

int maior(int *v, int n){
  int maior, i;

  for(i=1, maior=v[0]; i<n; i++)
    if(maior < v[i])
      maior = v[i];

  return maior;
}

int menor(int *v, int n){
  int menor, i;

  for(i=1, menor=v[0]; i<n; i++)
    if(menor > v[i])
      menor = v[i];

  return menor;
}

int main(void) {
  VETOR v;
  v.tamanho = MAX;

  printf("Digite os 10 valores de um vetor:\n");
  ler_vet(v.vet, v.tamanho);
  imprimir_vet(v.vet, v.tamanho);
  v.maior = maior(v.vet, v.tamanho);
  v.menor = menor(v.vet, v.tamanho);
  printf("\nMaior = %d\nMenor = %d\n", v.maior, v.menor);
  
  return 0;
}