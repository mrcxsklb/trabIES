/*Faça um programa em C para ler os elementos de uma matriz 3 x 4 de
números reais. Depois exiba os elementos da mesma na tela. Por fim mostre
a soma de cada uma das 3 linhas.*/
#include <stdio.h>
#include <stdlib.h>
#define MAX 4

void printMat(int matriz[][MAX]){
    int i, j;
    for(i=0;i<3;i++){
        for(j=0;j<MAX;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int sumLinhas(int matriz[][MAX], int lin){
    int i, j, sum = 0;
    for(i = lin; i < (lin + 1);i++){
        for(j=0; j<MAX; j++){
                sum += matriz[i][j]; 
        }
    }
    return sum;
}

int main(){
    int l = 3, c = MAX, lin = 0;
    int i, j, r = 0;
    int matriz[3][MAX];
    
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printMat(matriz);
    
    for(i=0;i<3;i++){
        r = sumLinhas(matriz, lin);
        printf("Soma da Linha %d = %d\n", i, r);
        lin++;
    }
    
    return 0;
}



