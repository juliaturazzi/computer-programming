#include <stdio.h>

void Converter(int numeroBase10 , int numeroBase2 [32]) ;

int main(int argc , char * argv []) {
    int nb10 , nb2 [32] , i , teste = 1;
    
    while(1) {
        scanf("%d", & nb10);
        if(nb10 < 0) break;

/*
* Como a funcao e void nao ha valor retornado
* e portanto nao posso atribuir a nenhuma variavel
*/
    printf("\nTeste % d\n", teste ++) ;
    printf("%d\n", nb10);
    
    Converter(nb10 , nb2);

/* Aqui imprimo o vetor */
    printf("\n\n");
    }

    return 0;
}

void Converter (int numeroBase10 , int numeroBase2 [32]) {
    int j;
    for(int i = 31; i>= 0; i--) {
        j = numeroBase10 >> i;
        
        if(j & 1) printf("1");  
        else printf("0"); 
    }
}

/* Entrada:
    5

   Saída:
    Teste  1
    5
    00000000000000000000000000000101
*/