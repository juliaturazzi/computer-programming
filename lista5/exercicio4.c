#include<stdio.h>

int main (void) {
    int matriz1[5][5], matriz2[5][5], mult[5][5], i, j, k;

    printf ("Insira a matriz 1:\n");
    for(i = 0; i < 5; i++)
      for(j = 0; j < 5; j++) scanf("%d", &matriz1[i][j]);
        
    
    printf("Insira a matriz 2:\n");
    for(i = 0; i < 5; i++)
      for(j = 0; j < 5; j++) scanf("%d", &matriz2[i][j]);

    // Multiplicacao das duas matrizes
    printf("A multiplicacao das matrizes 1 e 2:\n");
    for(i = 0; i < 5; i++) {
      for(j = 0; j < 5; j++) {
        mult[i][j] = 0;
        for(k = 0; k < 5; k++) mult[i][j] += matriz1[i][k] * matriz2[k][j];
        }
    }

    for (i = 0; i < 5; i++) {
      for (j = 0; j < 5; j++) printf("%5d", mult[i][j]);
      printf ("\n");
    }

  return 0;
}