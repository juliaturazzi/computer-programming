#include <stdio.h>

int main (void) {
    int vetor[10], numero, maior, menor;
    int j, i, contpares, soma, rep;
  
    soma = contpares = rep = 0;

    printf("Insira 10 numeros inteiros: \n");

    // Maior numero
    for(i = 0; i < 10; i++) scanf("%d", &vetor[i]);
    maior = vetor[0];
    
    for(i = 0; i < 10; i++)
      if(vetor[i] > maior) maior = vetor[i];
        
    printf("\nMaior valor da lista: %d \n", maior);

    // Menor numero
    for(i = 0; i < 10; i++)
        menor = vetor[0];
  
    for(i = 1; i < 10; i++)
      if(vetor[i] < menor) menor = vetor[i];
        
    
    printf("Menor numero da lista: %d \n", menor);

  // Valores pares
    for(i = 0; i < 10; i++)
      if(vetor[i] % 2 == 0) contpares++;
        
    printf("Quantidade de valores pares: %d \n", contpares);

  // Soma dos numeros 
    for(i = 0; i < 10; i++) soma = soma + vetor[i];
    
    printf("Soma de todos os numeros da lista: %d \n", soma);

  // Se o valor encontra-se no vetor
    printf("Insira o numero que deseja procurar: \n");
    scanf("%d", &numero);
    
    for(i = 0; i < 10; i++)
        if(numero == vetor[i]) rep++;
        
    
    if(rep > 0) printf("O numero %d esta no vetor.\n", numero);
    
   else printf("O numero %d nao esta no vetor.\n", numero);

  return 0;
}