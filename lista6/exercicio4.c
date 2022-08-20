/* Programa que calcula o mmc de dois numeros 
    fornecidos pelo usuario utilizando funcao */

#include <stdio.h>

int mdc (int a, int b) {
  if(b == 0) return a;
  else return mdc (b, a % b);
}

int mmc (int a, int b) {
    return ((a * b) / mdc (a, b));
}

int main (void) {
  int a, b;

  printf("Insira dois numeros para o calculo do mmc: \n");
  scanf("%d%d", &a, &b);

  printf("O mmc entre %d e %d tem como resultado: %d\n", a, b, mmc(a,b));

  return 0;
}