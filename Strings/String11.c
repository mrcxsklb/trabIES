#include <stdio.h>
#define MAX 100

void incluir_caracter_str(char *dst, char *src, char c, int pos){

  for(int i=0; i<pos; i++)
    *(dst++) = *(src++);
  *(dst++) = c;
  
  while(*src)
    *(dst++) = *(src++);
  *dst = '\0';
}

int main(void) {
  char str[MAX], str2[MAX], c; int pos;

  printf("Digite uma string: ");
  scanf("%[^\n]%*c", str);
  printf("Digite um caracter: ");
  scanf("%c%*c", &c);
  printf("Digite o numero de uma posicao: ");
  scanf("%d", &pos);

  printf("Antes: %s\n", str);
  incluir_caracter_str(str2, str, c, pos);
  printf("Depois: %s\n", str2);
  
  return 0;
}