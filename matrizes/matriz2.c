/*Faça um programa em C para ler os elementos de uma matriz 3 x 3 de
números inteiros. Depois exiba os elementos da mesma na tela. Por fim
mostre o menor e maior elemento da matriz*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 4

void printMat(int matriz[][MAX]){
    int i, j;
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int sumColunas(int matriz[][MAX], int colun){
    int i, j, sum = 0;
    for(i=0;i<MAX;i++){
        for(j=colun;j < (colun + 1);j++){
                sum += matriz[i][j]; 
        }
    }
    return sum;
}

int main(){
    int l = MAX, c = MAX, colun = 0;
    int i, j, r = 0;
    int matriz[MAX][MAX];
    
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printMat(matriz);
    
    for(i=0;i<c;i++){
        r = sumColunas(matriz, colun);
        printf("Soma da Coluna %d = %d\n", i, r);
        colun++;
    }
    return 0;
}