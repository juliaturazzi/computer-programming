/* Programa que calcula o mdc de dois numeros 
    fornecidos pelo usuario utilizando funcao */

#include<stdio.h>

int mdc (int a, int b) {
  if (b == 0) return a;

  else return mdc (b, a % b);
}

int main (void) {
  int a, b;
  
  printf ("Insira dois numeros para o calculo do mdc: \n");
  scanf ("%d%d", &a, &b);

  printf ("O mdc entre %d e %d tem como resultado: %d \n", a, b, mdc (a, b));

  return 0;
}