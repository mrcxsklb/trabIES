#include <stdio.h>
#include <math.h>

// Exercicio funcoes 01
int calcPotencia (int n, int x) {
    int i = 1;
    int aux = n;
    while (i < x) {
        n = aux*n;
        i++;
    }
    return n;
}

// Exercicio funcoes 02
int fatorial (int x) {
    if(x != 1) {
        return x * fatorial(x - 1);
    }
    return x;
}

// Exercicio funcoes 03
float ex (int n) {
    int i;
    float soma = 1 + n;
    for (i = 2; pow(n, i)/(float)fatorial(i) > 0.000001; i++)
        soma += pow(n, i)/(float)fatorial(i);
    return soma;    
}

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
    conta (100);
    return 0;
}