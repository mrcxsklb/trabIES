/* Fazer uma função para ler e retornar o valor das 3 notas de um aluno.*/
#include <stdio.h>
#include <stdlib.h>

int *notas(){
    static int r[3];
    printf("Digite as notas do aluno: ");
    for(int i = 0; i<3; i++){
        scanf("%d", &r[i]);
    }
    return r;
}

int main(){
    int *func;
    int n1, n2, n3;
    func = notas();
    
    n1 = func[0];
    n2 = func[1];
    n3 = func[2];
    printf("NOTAS: %d;%d;%d", n1, n2, n3);
    
    return 0;
}