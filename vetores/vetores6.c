/*Fazer um programa que lê valores para uma matriz do tipo "float" de 5 linhas
por 3 colunas e imprime a diferença entre a média dos elementos das colunas
pares e a média dos elementos das linhas ímpares.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float matrix[5][3];
    float media1 = 0, media2 = 0;
    int i;
    printf("Entre com 15 valores para a matriz 5x3: ");
    for( i = 0; i<5; i++){
        for(int j = 0; j<3; j++){
            scanf("%f", &matrix[i][j]);
        }
    }
    for(i = 0; i<5; i++){
        media1 += matrix[i][0];
        media1 += matrix[i][2];
    }
    media1 = media1/10.0;
    printf("Media da coluna par %f\n", media1);
    
    for(i = 0; i<3; i++){
        media2 += matrix[1][i];
        media2 += matrix[3][i];
    }
    media2 = media2/6.0;
    printf("Media da coluna impar %f\n", media2);
    return 0;
}

