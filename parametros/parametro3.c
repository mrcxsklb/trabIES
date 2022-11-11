#include <stdio.h>

typedef struct{
  int vet[100], tamanho;
  float media;
  int maior;
  int menor;
} ESTATISTICA;

int lervet(int *vet){
  int i;
  for(i=0; 1; i++){
    scanf("%d", &vet[i]);
    if(vet[i] < 0)
      break;
  }
  return i+1;
}

void calcular_estat(ESTATISTICA *dados){
  float soma=0.;

  dados->maior = dados->vet[0];
  dados->menor = dados->vet[0];
  for(int i=0; i<dados->tamanho; i++){
    soma += dados->vet[i];
    if(dados->vet[i] > dados->maior)
      dados->maior = dados->vet[i];
    if(dados->vet[i] < dados->menor && dados->vet[i] >= 0)
      dados->menor = dados->vet[i];
  }
  dados->media = soma/dados->tamanho;
}

int main(void) {
  ESTATISTICA dados;

  printf("Digite os elementos de um vetor, sendo o ultimo elemento negativo:\n");
  dados.tamanho = lervet(dados.vet);  
  calcular_estat(&dados);
  printf("\nMedia = %.2f\nMenor = %d\nMaior = %d\n", dados.media, dados.menor, dados.maior);
  
  return 0;
}