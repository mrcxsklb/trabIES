/*Fazer um programa em "C" que lê um conjunto de 10 valores inteiros e verifica
se algum dos valores é igual a média dos mesmos.*/

#include <stdio.h>

void lerValores(int vet[]){
    for(int i = 0; i<10;i++){
        scanf("%d", &vet[i]);
    }
}

int verificaNum(int vet[]){
    int media = 0;
    for(int i = 0; i<10;i++){
        media += vet[i];
    }
    
    media = media / 10;
    
    for(int i = 0; i<10;i++){
        if(vet[i] == media){
            return vet[i];
        }
    }
    return 0;
}

int main()
{
    int vet[10];
    printf("Entre com 10 valores para o vetor: ");
    lerValores(vet);
    
    if(verificaNum(vet) == 0){
        printf("Nao ha numeros igual a media!\n");
    }
    else
        printf("%d eh o numero igual a media!!\n", verificaNum(vet));
    return 0;
}

