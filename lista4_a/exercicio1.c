#include <stdio.h>

int main (void) {
    unsigned int linha, coluna, nlinha, ncoluna;

    printf("Insira o numero de linhas: ");
    scanf("%d", &linha);
    
    printf("Insira o numero de colunas: ");
    scanf("%d", &coluna);

    for(nlinha = linha; nlinha > 0; nlinha--) {
      for(ncoluna = coluna; ncoluna > 0; ncoluna--) printf ("*");

      printf ("\n");
    }

  return 0;
}