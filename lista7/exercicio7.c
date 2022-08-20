#include <stdlib.h>
#include <stdio.h>

int main (void) {
    int i, n, *pvetor;
    float media;

/* Define um valor para n , scanf ou n = */
    scanf("%d", &n);

/* aloca espaco na memoria */
    pvetor = (int *) malloc (n * sizeof (int));
    if(!pvetor) {
        puts("Sem memoria .");
        return 1;
    }

/* aqui uso pvetor , vamos ler um vetor */
    for(i = 0; i < n; i++) scanf("%d", pvetor + i);
    
/* faco alguma coisa */
    media = 0.0;
    for(i = 0; i < n; i++) media += *(pvetor + i);
    
    printf("%f\n", media / n);

/* aqui nao preciso mais de pvetor */
    free(pvetor);
    
    return 0;
}

/* Entrada:
    5
    4
    5
    4
    4
    10

   Saída:
    5.400000
*/