#include <stdio.h>

void troca (int *a, int *b) {
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
} /* Fim de troca */

int main (void) {
    int x, y;

    scanf("%d %d", &x, &y);
    troca(&x, &y);

    printf(" Troquei ----> %d %d\n", x, y);

  return 0;
}

/* Entrada:
    10
    20

  Saída:
    Troquei ----> 20 10
*/