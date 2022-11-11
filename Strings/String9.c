#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 20

typedef struct {
    char pnome[max];
    char snome[max];
} PESSOA;

int getLetras (char *pessoa) {
    int i = 0;
    while (pessoa[i] != '\0')
        i++;
    return i;
}

int main() {
    PESSOA listaPessoas[max];
    int i, j, tam, letras = 0;
    printf("Digite a lista de prenomes e sobrenomes:\n");
    for (i = 0; i < max; i++) {
        scanf("%s%*c", listaPessoas[i].pnome);
        letras += getLetras(listaPessoas[i].pnome);
        scanf("%s%*c", listaPessoas[i].snome);
        letras += getLetras(listaPessoas[i].snome);
        if (strcmp(listaPessoas[i].pnome, "FIM") == 0) break;
    }
    tam = i;
    char temp[max];
    for(j = 0; j < tam; j++) {
        for (i = 1; i < tam; i++) {
            if(strcmp(listaPessoas[i-1].snome, listaPessoas[i].snome) > 0) {
                strcpy(temp, listaPessoas[i].snome);
                strcpy(listaPessoas[i].snome, listaPessoas[i-1].snome);
                strcpy(listaPessoas[i-1].snome, temp); 
            }
        }
    }

    for(j = 0; j < tam; j++) {
        for (i = 1; i < tam; i++) {
            if(strcmp(listaPessoas[i-1].pnome, listaPessoas[i].pnome) > 0) {
                strcpy(temp, listaPessoas[i].pnome);
                strcpy(listaPessoas[i].pnome, listaPessoas[i-1].pnome);
                strcpy(listaPessoas[i-1].pnome, temp); 
            }
        }
    }
    printf("\n");
    for (i = 0; i < tam; i++) {
        printf("%s\n", listaPessoas[i].pnome);
    }
    printf("\n");
    for (i = 0; i < tam; i++) {
        printf("%s\n", listaPessoas[i].snome);
    }
    printf("Media de letras nos nomes %.2f\n", (float)letras/tam);
    return 0;
}
