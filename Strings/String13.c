#include <stdio.h>
#include <stdlib.h>

int converter_base2_dec(int valor_binario){
    int valor_decimal = 0, sequencial = 0, resto;
    
    while (valor_binario != 0){
        resto = valor_binario % 10;
        valor_binario /= 10;
        valor_decimal += resto * pow(2, sequencial);
        ++sequencial;
    }
    return valor_decimal;
}

int converter_base4_dec(int valor){
    int valor_decimal = 0, sequencia = 0;
  
    while(valor != 0){
        valor_decimal += (valor % 10) * pow(4, sequencia);
        ++sequencia;
        valor /= 10;
    }
    return valor_decimal;
}

int converter_base8_dec(int valor_octal){
    int valor_decimal = 0, sequencia = 0;
  
    while(valor_octal != 0){
        valor_decimal += (valor_octal % 10) * pow(8, sequencia);
        ++sequencia;
        valor_octal /= 10;
    }
    return valor_decimal;
}

int converter_base16_dec(int valor){
    int valor_decimal = 0, sequencia = 0;

    while(valor != 0){
        valor_decimal += (valor % 10) * pow(16, sequencia);
        ++sequencia;
        valor /= 10;
    }
    return valor_decimal;
}

int converter_base32_dec(int valor){
    int valor_decimal = 0, sequencia = 0;

    while(valor != 0){
        valor_decimal += (valor % 10) * pow(32, sequencia);
        ++sequencia;
        valor /= 10;
    }
    return valor_decimal;
}

int converte2decimal(char *str, int base){
  int n;
  
  // converte string para inteiro
  n = strtol(str, 0, 10);

  switch(base){
    case 2: return converter_base2_dec(n);
    case 4: return converter_base4_dec(n);
    case 8: return converter_base8_dec(n);
    case 16: return converter_base16_dec(n);
    case 32: return converter_base32_dec(n);
  }
}

int main(void) {
  char num[100]; int base;

  printf("Digite um numero: ");
  scanf("%[^\n]%*c", num);
  printf("Digite a base deste numero (2, 4, 8, 16, 32): ");
  scanf("%d", &base);

  printf("(%s)%d = (%d)10\n", num, base, converte2decimal(num, base));
  
  return 0;
}