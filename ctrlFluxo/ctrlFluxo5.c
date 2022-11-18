/* Escrever um programa em "C" que solicita as notas das duas provas feitas por
cada um dos alunos de uma turma (as notas têm de estar no intervalo [0 10]) e
imprime para cada um a média das notas. O programa deve parar imediatamente
após ter sido digitado o valor 50 para a nota da primeira prova*/

#include <stdio.h>

void media(float nota1, float nota2){
    float sum = 0.0;
    float r;
    sum = nota1 + nota2;
    r = sum/2.0;
    printf("Media: %.2f\n", r);
}

int main()
{
    float nota1, nota2;
    printf("Entre com as notas das duas provas: ");
    scanf("%f %f", &nota1, &nota2);
    while(nota1 <= 10.0 && nota2 <= 10.0){
        media(nota1, nota2);
        printf("Entre com as notas das duas provas: ");
        scanf("%f %f", &nota1, &nota2);
        if(nota1 > 10 && nota1 < 50)
            scanf("%f %f", &nota1, &nota2);
        if(nota1 == 50)
            return 0;
    }
    return 0;
}


