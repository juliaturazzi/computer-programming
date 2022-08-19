#include <stdio.h>

int main (void) {
  int i;
  float nota, media, contagem, soma;
  nota = contagem = soma = 0;

  while(1) {
    soma = 0;
    
    for(i = 1; i <= 3; i++) {
        printf("Insira a nota: ");
        scanf("%f", &nota);

        if (nota < 0) return 0;

        soma += nota;
    }

    media = soma / 3;
    printf("Media: %.2f\n\n", media);

    if (nota < 0) return 0;
    
    }
}
