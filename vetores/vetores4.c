/*Fazer uma rotina que recebe um array do tipo double e o número de valores
que devem ser solicitados ao usuário e devolve o array preenchido com os
valores digitados.*/
#include <stdio.h>

void preenche(double vet[], int n){
    for(int i = 0; i < n; i++){
        scanf("%lf", &vet[i]);
    }
}

int main()
{
    int n;
    double vet[100];
    printf("Entre com o numero de valores que deve ser solicitado: ");
    scanf("%d", &n);
    printf("Entre com os %d valores: ", n);
    preenche(vet, n);
    for(int i = 0; i < n; i++){
        printf("[%.2lf] ", vet[i]);
    }
    return 0;
}


