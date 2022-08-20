#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int i, n, *pvetor, cont=0;
    float media;
    
    scanf("%d", &n);
    pvetor = (int *)malloc(n * sizeof(int));
    
    if(!pvetor) {
        puts("Sem memória.");
        return 1;
    }
    
    for(i = 0; i < n; i++) scanf("%d", pvetor + i); 
    media = 0.0;
    
    for(i = 0; i < n; i++) media += *(pvetor + i);
    media = media / n;
    
    for(i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) 
            if (*(pvetor + j) < *(pvetor + i)) {
                int k = *(pvetor + i);
                *(pvetor + i) = *(pvetor + j);
                *(pvetor + j) = k;
        }
    }

    printf("\nMedia: %f\n", media);
   
    printf("Notas em ordem crescente: ");
    for(i = 0; i < n; i++)  printf("%d ", *(pvetor + i));
    
    free(pvetor);
    
    return 0;
}

/* Entrada:
    7
    5
    5
    6
    4
    10
    9
    5


   Saída:
    Media: 6.285714
    Notas em ordem crescente: 4 5 5 5 6 9 10 
*/