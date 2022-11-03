#include<stdio.h>
#include <math.h>

float valorPrestacoes(int x, float total) {
    int i, quantPrestacoes;
    switch (x)
    {
    case 1:
        printf("Total de uma prestacao de %.2f\n", total*0.9);
        break;
    
    case 2:
        printf("Total de duas prestacoes de: %.2f\n", total/2);
        break;

    case 3:
        printf("Escolher o total de prestacoes com juros:\n");
        scanf("%d", &quantPrestacoes);
        if(total >= 100) {
            for (i = 1; i <= quantPrestacoes; i++) {
                printf("Prestacao [%d] = %.2f\n", i, (total*1.03)/3);
                total *= 1.03;
            }
            printf("Total a ser pago sera de: %.2f\n", total);    
        } else {
            printf("Total de %d prestacoes de: %.2f\n", quantPrestacoes, total/quantPrestacoes);
        }
                
        break;
    }
    return 0;
}

void printOpcoes (float total) {
    printf("[1] A vista = %.2f;\n", total*0.9);
    printf("[2] Duas parcelas de = %.2f;\n", total/2);
    printf("[3] Parcelado de 3 a 10 vezes, contem juros de 3%% ao mes para compras acima de 100 reais.\n");
}

// Exercicio funcoes 04
float conta (float total) {
    int opcao;
    printf("Total da compra: %.2f\n", total);
    printf("Selecione a opcao de pagamento:\n");
    printOpcoes(total);
    scanf("%d", &opcao);
    valorPrestacoes(opcao, total);
    return 0;
}

int main () {
    conta(254);
    return 0;
}