/* 
    Descrição: Este programa calcula a média de duas 
    notas e informa se o aluno foi aprovado ou reprovado
*/

#include <stdio.h>

int main(void) {
    float p1, p2, media;
    p1 = p2 = media = 0;

    printf("Nota da prova 1: ");
    scanf("%f", &p1);

    printf("Nota da prova 2: ");
    scanf("%f", &p2);

    media = (p1 + p2) / 2;

    printf("Média: %f\n", media);

    if(media >= 5) printf("Aprovado\n");
    else printf("Reprovado\n");

    return 0;
}