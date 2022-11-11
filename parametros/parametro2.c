#include <stdio.h>

int razao(int a, int b, int *r){
  if (b == 0)
    return 0;

  *r = a/b;
  return 1;
}

int main(void) {
  int x, y, r;
  
  printf("Digite dois numeros: ");
  scanf("%d %d", &x, &y);

  
  if(razao(x, y, &r))
    printf("\nOperacao possivel.\n%d/%d = %d\n", x, y, r);
  else
    printf("\nOperacao impossivel.\n");
  
  return 0;
}