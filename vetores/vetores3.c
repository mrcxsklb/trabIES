/*Fazer uma rotina que recebe como parâmetro um array de 5 posições
contendo as notas de um aluno ao longo do ano e devolve a média do aluno.*/
#include <stdio.h>

void getNotas(float aluno[]){
    for(int i = 0; i<5; i++){
        scanf("%f", &aluno[i]);
    }
}

float media(float aluno[]){
    float m = 0;
    for(int i = 0; i<5; i++){
        m += aluno[i];
    }
    m = m/5.0;
    return m;
}

int main()
{
    float aluno[5], resp;
    printf("Entre com as cinco notas do aluno: ");
    getNotas(aluno);
    resp = media(aluno);
    printf("MEDIA DO ALUNO : %.2f", resp);
    return 0;
}

