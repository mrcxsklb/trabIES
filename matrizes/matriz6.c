#include <stdio.h>
#define MAX 4

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

void imprimir_diagonal_secundaria(int m[][MAX]){
  printf("\n");
  for(int i=0; i<MAX; i++){
    for(int j=0; j<MAX; j++){
      if(i+j==MAX-1)
        printf("%d", m[i][j]);
      printf("%*c", 2, 32);
    }
    printf("\n");
  }
}

int main(void) {
  int matriz[MAX][MAX];

  printf("Digite os elementos de uma matriz 4x4:\n");
  ler_matriz(matriz);
  imprimir_matriz(matriz);
  imprimir_diagonal_secundaria(matriz);
  return 0;
}
