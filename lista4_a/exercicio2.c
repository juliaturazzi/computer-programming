#include <stdio.h>

int main (void) {
    int linhaUsu, linha, coluna;
  
    printf("Insira o numero de linhas: ");
    scanf("%d", &linhaUsu);
  
    for(linha = 1; linha <= linhaUsu; linha = linha + 1) {
        for(coluna = 1; coluna <= linha; coluna = coluna + 1) putchar('*');
      
        putchar('\n');
}
  
    return 0;
}