#include <stdlib.h>
#include <stdio.h>

int main (void) {
    int i, n, *pvetor, contador=0;
    float media ;
    
    scanf("%d", &n);
    pvetor = (int*) malloc (n*sizeof(int));
    
    if(!pvetor){
        puts("Sem memória.");
        return 1;
    }
    
    for(i=0; i<n; i++){
        scanf("%d", pvetor + i);  
    }
    media = 0.0;
    
    for(i = 0; i<n; i ++){
        media += *(pvetor + i);
    }
    media = media/n;
    
    for(i = 0; i < n; i++)
        if(*(pvetor + i) > media) contador++;
        
    
    printf("\nMedia: %f\n", media);
    printf("Quantidade de notas maiores que a media: %d", contador);

    free (pvetor);
    
    return 0;
}

/* Entrada:
    4
    10
    9
    4
    4

  Saída:
    Media: 6.750000
    Quantidade de notas maiores que a media: 2
*/