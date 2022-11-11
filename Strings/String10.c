/*Escrever uma função que recebe uma string e um caracter como parâmetro
e remove todas as ocorrências do caracter da string.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void removeOcorr(char str[], char l){
    int i, j, tam, k;
    char aux[20];
    
    aux[0] = l;
    tam = strlen(str);
    for(i = 0; i < tam; i++){
        for(j = 0; j < 1; j++){
            if(str[i] == aux[j]){
                for(k = i; k<tam; k++){
                    str[k] = str[k+1];
                }
            }
        }
    }
}

int main()
{
    char str[20], letra;
    
    printf("Insira primeiramente a string desejada\n");
    scanf("%s%*c", str);
    fflush(stdin);
    printf("Insira a letra que deseja remover\n");
    scanf("%c", &letra);
    fflush(stdin);
    removeOcorr(str, letra);
    printf("%s", str);
    return 0;
}


