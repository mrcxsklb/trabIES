#include <stdio.h>
#include <stdlib.h>

typedef struct pessoa{
    char nome[30];
    char endereco[50];
    char telefone[10];
    char idade[3];
} PESSOA;

int main () {
    PESSOA pessoa;
    printf("Entre com seu nome.\n");
    scanf("%[^\n]%*c", pessoa.nome);
    printf("Entre com seu endereco.\n");
    scanf("%[^\n]%*c", pessoa.endereco);
    printf("Entre com seu telefone.\n");
    scanf("%[^\n]%*c", pessoa.telefone);
    printf("Entre com sua idade.\n");
    scanf("%[^\n]%*c", pessoa.idade);

    printf("Seu nome eh %s, ", pessoa.nome);
    printf("voce tem %s anos, ", pessoa.idade);
    printf("mora na rua %s ", pessoa.endereco);
    printf("e seu telefone eh %s\n", pessoa.telefone);


    return 0;
}