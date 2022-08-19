#include <stdio.h>

int main (void) {
  int linha, coluna, linhaUsu;

  printf("Insira o numero de lihas: ");
  scanf("%d", &linhaUsu);

  for(linha = linhaUsu; linha >= 1; linha--) {
      printf("\n");

      for(coluna = 0; coluna < (linhaUsu - linha); coluna++) printf(" ");

      for(coluna = 1; coluna <= linha; coluna++) printf("*");
    }

  return 0;
}