/* Programa que calcula cada linha j de B é a linha j de A multiplicada pelo 
    elemento da diagonal principal da linha j, impressa como matriz B */

#include <stdio.h>

int imprimirA(int entradaA[6][6]) {
  for(int i = 0; i < 6; ++i) {
      for(int j = 0; j < 6; ++j) printf ("%6d", entradaA[i][j]);

      printf ("\n");
    }
}

int matrizB (int saida[6][6]) {
  int matrizA[6][6];
  for(int i = 0; i < 6; ++i) {
      for(int j = 0; j < 6; ++j) printf ("%6d", saida[i][j]);
        
      printf ("\n");
    }
}

int main (void) {
  int i, j, A[6][6], saida[6][6];

  printf("Insira os elementos da matriz A: \n");
  for(i = 0; i < 6; i++)
      for(j = 0; j < 6; j++) scanf ("%d", &A[i][j]);
        
  for(i = 0; i < 6; i++)
      for(j = 0; j < 6; j++) saida[i][j] = A[i][j] * A[i][i];

  printf ("\nMatriz A:\n");
  imprimirA (A);
  
  printf ("\nMatriz B:\n");
  matrizB (saida);

  return 0;
}