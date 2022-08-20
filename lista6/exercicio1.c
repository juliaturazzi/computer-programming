/* Programa que calcula e informa a quantidade de vogais 
presentes na string de tamanho informado pelo usuario */

#include <stdio.h>

void conta_vogais(char string[], int vogais[]);

int main(void) {
    int tamanho = 0;
    char string[tamanho];
    int vogais[tamanho], i;
    int vezesa, vezese, vezesi, vezeso, vezesu;
    vezesa = vezese = vezesi = vezeso = vezesu = 0;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tamanho);

    printf("\nInsira elemento por elemento presente na string (separados por enter):\n");

    for(int i = 0; i < tamanho; i++) {
        scanf("%s", &string[i]);
        vogais[i] = string[i];

        switch(vogais[i]) {
        case 'a':
            vezesa++;
            break;

        case 'e':
            vezese++;
            break;

        case 'i':
            vezesi++;
            break;


        case 'o':
            vezeso++;
            break;

        case 'u':
            vezesu++;
            break;

        case 'A':
            vezesa++;
            break;

        case 'E':
            vezese++;
            break;

        case 'I':
            vezesi++;
            break;


        case 'O':
            vezeso++;
            break;

        case 'U':
            vezesu++;
            break;
        }
    }

    printf("A vogal 'a' aparece %d vezes\n", vezesa);
    printf("A vogal 'e' aparece %d vezes\n", vezese);
    printf("A vogal 'i' aparece %d vezes\n", vezesi);
    printf("A vogal 'o' aparece %d vezes\n", vezeso);
    printf("A vogal 'u' aparece %d vezes\n", vezesu);

    return 0;
}