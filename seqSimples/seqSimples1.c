/*1. Fazer um programa em C que pergunta um valor em metros e imprime o
correspondente em decímetros, centímetros e milímetros.*/

#include <stdio.h>
#include <stdlib.h>

void convertMed(float m){
    float dec, cent, mili;
    printf("\nMedida em decimetros: \t%.4lfdm", dec = m * 10);
    printf("\nMedida em centimetros: \t%.4lfcm", cent = m * 100);
    printf("\nMedida em milimetros: \t%.4lfmm", mili = m * 1000);
}

int main()
{
    float medida;
    printf("Informe o valor em metros: ");
    scanf("%f", &medida);
    convertMed(medida);
    return 0;
}