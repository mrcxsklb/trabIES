#include <stdio.h>

int menu(){
  int opcao;
  
  printf("\nEscolha a opcaoo de pagamento:\n");
  printf("1 - a vista com 10%% de desconto\n");
  printf("2 - em duas vezes (preco da etiqueta)\n");
  printf("3 - de 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$ 100,00)\n");

  scanf("%d", &opcao);
  return opcao;
}

float opcao1(float x){
  printf("Valor final: R$ %.2f\n", x*0.9);
}

float opcao2(float x){
  printf("Valor final: R$ %.2f x2\n", x/2);
}

float opcao3(float x){
  int quantPrestacoes;
  
  printf("Escolher o total de prestacoes com juros:\n");
        scanf("%d", &quantPrestacoes);
        if(x >= 100) {
            for (int i = 1; i <= quantPrestacoes; i++) {
                printf("Prestacao [%d] = %.2f\n", i, (x*1.03)/3);
                x *= 1.03;
            }
            printf("Total a ser pago sera de: %.2f\n", x);    
        } else
            printf("Total de %d prestacoes de: %.2f\n", quantPrestacoes, x/quantPrestacoes);

}

int main(void) {
  float gasto;
  int opcao;
  
  printf("Digite o gasto do cliente\nR$ ");
  scanf("%f", &gasto);
  opcao = menu();

  switch(opcao){
    case 1: opcao1(gasto);
      break;
    case 2: opcao2(gasto);
      break;
    case 3: opcao3(gasto);
      break;
  }
  
  return 0;
}
