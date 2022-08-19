#include <stdio.h>

int main(void) {    
    int matriz1[2][3], matriz2[2][3], soma[2][3];
    int i, j;

    printf("Insira a matriz 1:\n");
    for (i = 0; i < 2; ++i)
    for (j = 0; j < 3; ++j) scanf("%d", &matriz1[i][j]);

    printf("Insira a matriz 2:\n");
    for (i = 0; i < 2; ++i)
    for (j = 0; j < 3; ++j) scanf("%d", &matriz2[i][j]);

// Soma das matrizes
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 3; ++j)
            soma[i][j] = matriz1[i][j] + matriz2[i][j];

    printf("A soma das matrizes 1 e 2: \n");
    for (i = 0; i < 2; ++i)
        for (j = 0; j < 3; ++j) {
            printf("%d   ", soma[i][j]);
            if (j == 2) printf("\n");
    }

  return 0;
}