#include <stdio.h>
#include <stdlib.h>
#define MAX 3

void printMat(int matriz[][MAX]){
    int i, j;
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int sumImpares(int matriz[][MAX]){
    int i, j, sum = 0;
    for(i=0;i<MAX;i++){
        for(j=0;j<MAX;j++){
            if(matriz[i][j]%2 == 1){
                sum += matriz[i][j]; 
            }
        }
    }
    return sum;
}

int main(){
    int l = MAX, c = MAX;
    int i, j, r = 0;
    int matriz[MAX][MAX];
    
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printMat(matriz);
    r = sumImpares(matriz);
    printf("Soma dos Impares = %d", r);
    
    return 0;
}