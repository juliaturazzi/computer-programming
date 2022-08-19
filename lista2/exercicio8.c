/* 
    Descrição: Este programa calcula a média de um 
    aluno e informa se foi aprovado ou reprovado.
*/

#include <stdio.h>

int main (void) {
    float notaAluno = 0;
    float mediaAluno = 0.0;
    int notasLidas = 0;
    int quantProvas = 0;
    
    printf("Insira a quantidade de provas: ");
    scanf("%d", &quantProvas);
    
    while(notasLidas < quantProvas){
        printf("Insira o valor da nota: ");
        scanf("%f", &notaAluno);
        
        mediaAluno = mediaAluno + notaAluno;
        notasLidas = notasLidas + 1;
    }
    
    mediaAluno = mediaAluno / quantProvas;
    printf ("A media do aluno foi %f\n", mediaAluno);
    
    if(mediaAluno >= 5.0)  printf ("Aprovado\n");
    else  printf ("Reprovado\n");
    
    return 0; 
}