/*.Fazer um programa que imprime a tabela ASCII (código decimal, código hexa,
caracter) para os códigos de 0 a 127*/

#include <stdio.h>

int prtTabela(){
    printf("\tTABELA ASCII\n");
    for (int i = 0; i <= 127; i++) {
        printf("\t %d | %x | %c \t\n", i, i, i);
    }
    return 0;
}

int main()
{
    prtTabela();

    return 0;
}

