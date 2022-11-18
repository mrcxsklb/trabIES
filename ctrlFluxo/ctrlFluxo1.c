/*. Faça um programa em "C" que lê dois valores e imprime:
- se o primeiro valor for menor que o segundo, a lista de valores do primeiro até
o segundo;
- se o primeiro valor for menor que o segundo a lista de valores do segundo até
o primeiro em ordem decrescente;
- se ambos forem iguais a mensagem "valores iguais".
*/
#include <stdio.h>
#include <stdlib.h>
int compara(int a, int b){
    if(a > b){
        return 1;
    }
    else if(b > a){
        return 0;
    }
    else{
        return -1;
    }
}

void listaValores(int a, int b){
    int i;
    if(compara(a, b) == 1){
        for(i=a;i<=b;i++){
            printf("%d ", i);
        }
    }
    else if(compara(a, b) == 0){
        for(i=b;i>=a;i--){
            printf("%d ", i);
        }
    }
    else{
        printf("Valores iguais!");
    }
    printf("\n");
}

int main()
{
    int a, b;
    printf("Insira dois numeros:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    listaValores(a, b);
    return 0;
}

