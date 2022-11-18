/*Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9*/
#include <stdio.h>

void tabuada(int x, int i){
    int r;
    for(i=1;i<=9;i++){
        printf("TABUADA DO %d:\n", i);
        for(x=0 ;x<=10;x++){
            printf("[%d] x {%d} = %d\n", i, x, r = i*x);
        }
    }
}

int main()
{
    int x, i;
    tabuada(x, i);
    return 0;
}

