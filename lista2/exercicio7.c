/* 
    Descrição: Este programa calcula a media de
    três provas.
*/

#include <stdio.h>

int main (void) {
    float notaAluno;
    float mediaAluno;
    float notaAluno2;
    float notaAluno3;
    
    notaAluno = notaAluno2 = notaAluno3 = mediaAluno = 0;

    printf("Insira a nota da prova 1: ");
    scanf("%f", &notaAluno);
    mediaAluno = mediaAluno + notaAluno;

    printf("Insira a nota da prova 2: ");
    scanf("%f", &notaAluno2);
    mediaAluno = mediaAluno + notaAluno2;

    printf("Insira a nota da prova 3: ");
    scanf("%f", &notaAluno3);
    mediaAluno = mediaAluno + notaAluno3;

    mediaAluno = mediaAluno/ 3;
    printf("A média é: %f\n", mediaAluno);
    
    if(mediaAluno >= 5.0)  printf("Aprovado\n");
    else  printf("Reprovado\n");

    return 0;
}