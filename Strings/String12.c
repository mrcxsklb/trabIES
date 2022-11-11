#include <stdio.h>
#define MAX 100

char * apontar_char_espaco(char *str){
  while(*(str++))
    if(*str == ' ')
      return str;
  printf("\nEspaco em branco nao encontrado.\n");
  return NULL;
}

void print_str(char *str){
  printf("\nElemento -> Endereco\n");
    while(*str){
      printf("%c -> %d\n", *str, str);
      str++;
    }
}

int main(void) {
  char str[MAX], *p_espaco;

  printf("Digite uma string: ");
  scanf("%[^\n]%*c", str);
  p_espaco = apontar_char_espaco(str);

  print_str(str);
  printf("\nEspaco em branco -> %d\n", p_espaco);
  return 0;
}