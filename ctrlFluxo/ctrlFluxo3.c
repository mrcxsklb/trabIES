/*Fazer um programa em "C" que lê o preço de um produto e inflaciona esse
preço em 10% se ele for menor que 100 e em 20% se ele for maior ou igual a
100. Sem 'if' ou '?'*/
#include <stdio.h>

int main()
{
    float x;
    printf("Entre com o preco do produto: ");
    scanf("%f", &x);
    while(x<100){
        printf("Novo preco R$%.2f\n", x+(x*0.1));
        return 0;
    }
    printf("Novo preco R$%.2f\n", x+(x*0.2));
    return 0;
}

