/*Fazer um programa em "C" que lê uma lista de 20 produtos e preços e
os armazena em um array do tipo da estrutura abaixo. O programa deve, em
seguida, ordenar o vetor em ordem alfabética de nome de produto e inflacionar
os produtos cujo valor for menor que 100 em 5%. Por fim a lista de
produtos/preços deve ser impressa.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

typedef struct{
    char nome[80];
    float preco;
}Produto;

void lerProd(Produto x[]){
    int i;
    for(i=0;i<MAX;i++){
        printf("Produto[%d]=", i);
        scanf("%s%*c", x[i].nome);
        fflush(stdin);
        printf("Preco[%d]=",i);
        scanf("%f", &x[i].preco);
        fflush(stdin);
    }
}

void ordenaNome(Produto x[]){
    int i, j;
    Produto aux;
    printf("\nOrdenando...\n");
    for(i=1;i<MAX;i++){
        aux = x[i];
        for(j=i;(j>0) && strcmp(aux.nome, x[j - 1].nome)<0;j--){
            x[j] = x[j - 1];
        }
        x[j] = aux;
    }
}

void inflacionarProds(Produto x[]){
    int i;
    printf("Corrigindo precos...\n");
    for(i=0;i<MAX;i++){
        if(x[i].preco < 100.0){
            x[i].preco = x[i].preco + (x[i].preco * (0.05));
        }
    }
}

void printProds(Produto x[]){
    int i;
    printf("Imprimindo produtos..!\n\n");
    for(i=0;i<MAX;i++){
        printf("Nome: %s -", x[i].nome);
        printf(" Preco: R$%.2f\n", x[i].preco);
    }
}

int main()
{
    Produto x[MAX];
    
    printf("Entre com os produtos e seus precos\n");
    lerProd(x);
    ordenaNome(x);
    inflacionarProds(x);
    printProds(x);
    
    return 0;
}