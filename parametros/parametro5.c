#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100

typedef struct {
    char nome[30];
    char endereco[max];
    char fone[10];
    long int CEP;   
} AgendaEletronica;

AgendaEletronica novaPessoa(AgendaEletronica pessoa[], int *tam) {
    int i;
    for (i = 0; strcmp(pessoa[i].nome, "\0") != 0; i++);
    printf("Nome: ");
    scanf("%[^'\n']%*c", pessoa[i].nome);
    printf("Endereco: ");
    scanf("%[^'\n']%*c", pessoa[i].endereco);
    printf("Telefone: ");
    scanf("%[^'\n']%*c", pessoa[i].fone);
    printf("CEP: ");
    scanf("%ld", &pessoa[i].CEP);
    (*tam)++;
    return pessoa[i];
}

void dadosPessoa(AgendaEletronica pessoa[], int i) {
    printf("%s\n", pessoa[i].nome);
    printf("%s\n", pessoa[i].endereco);
    printf("%s\n", pessoa[i].fone);
    printf("%ld\n", pessoa[i].CEP);
}

void listaNomesPorLetraInicial(AgendaEletronica pessoa[], int tam, char n) {
    int i;
    for (i = 0; i < tam; i++) {
        if (pessoa[i].nome[0] == n) {
            printf("%s\n", pessoa[i].nome);
        }
    }
}

int listarNomes (AgendaEletronica pessoas[], int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("%s\n", pessoas[i].nome);
    }
}

void menu (AgendaEletronica agenda[]) {
    int i = -1;
    int tam = 0;
    char n;
    while (i != 0) {
        printf("O que deseja fazer?\n");
        printf("[0] Sair\n");
        printf("[1] Cadastrar uma nova pessoa\n");
        printf("[2] Listar todas as pessoas cadastradas\n");
        printf("[3] Listar pessoas que iniciam com uma letra desejada\n");
        scanf("%d%*c", &i);
        switch (i) {
        case 1:
            novaPessoa(agenda, &tam);
            break;
        case 2:
            listarNomes(agenda, tam);
            break;
        case 3:
            printf("Deseja os dados de qual pessoa cadastrada?\n");
            scanf("%c", &n);
            listaNomesPorLetraInicial(agenda, tam, n);
        default:
            break;
        }
    }
}

int main () {
    AgendaEletronica agenda[max];
    menu(agenda);
    return 0;   
}