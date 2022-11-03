#include <stdio.h>
#define MAX 3

void ler_matriz(int m[][MAX]){
  for(int i=0; i<MAX; i++)
    for(int j=0; j<MAX; j++)
      scanf("%d", &m[i][j]);
}

void imprimir_matriz(int m[][MAX]){
  printf("\n");
  for(int i=0; i<MAX; i++){
    for(int j=0; j<MAX; j++)
      printf("%d ", m[i][j]);
    printf("\n");
  }
}

int maior(int m[][MAX]){
  int maior = m[0][0];
  for(int i=1; i<MAX; i++)
    for(int j=1; j<MAX; j++)
      if(m[i][j]>maior)
        maior = m[i][j];
  return maior;
}

int menor(int m[][MAX]){
  int menor = m[0][0];
  for(int i=1; i<MAX; i++)
    for(int j=1; j<MAX; j++)
      if(m[i][j]<menor)
        menor = m[i][j];
  return menor;
}

int main(void) {
  int matriz[MAX][MAX];

  printf("Digite os elementos de uma matriz 3x3:\n");
  ler_matriz(matriz);
  imprimir_matriz(matriz);
  printf("\nMaior elemento: %d\n", maior(matriz));
  printf("Menor elemento: %d\n", menor(matriz));
  
  return 0;
}
