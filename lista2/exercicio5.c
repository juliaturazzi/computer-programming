/* 
    Descrição: Este programa calcula a nota de um aluno de uma disciplina
    que possui 3 testes e uma prova, através de uma fórmula já especificada.
*/

#include <stdio.h>

int main(void) {
    float teste1, teste2, teste3, prova, notafinal;
    teste1 = teste2 = teste3 = prova = notafinal = 0;

    printf("Nota do teste 1: ");
    scanf("%f", &teste1);

    printf("Nota do teste 2: ");
    scanf("%f", &teste2);
    
    printf("Nota do teste 3: ");
    scanf("%f", &teste3);
    
    printf("Nota da prova: ");
    scanf("%f", &prova);

    notafinal = 0.8 * prova + 0.2 * (teste1 + teste2 + teste3)/ 3;
    
    printf("Teste 1: %f\n", teste1);
    printf("Teste 2: %f\n", teste2);
    printf("Teste 3: %f\n", teste3);
    printf("Prova: %f\n", prova);
    printf("Nota final: %f\n", notafinal);
    
    return 0;
}