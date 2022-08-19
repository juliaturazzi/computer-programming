#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, j;
  int x[5], y[5],z[5], soma[5], vezes[5], inter[5], count;
  count = 0;
  
  printf("Insira os numeros de dos vetores x e y.\n\n");

  for(i = 0; i < 5; i++) {
    printf("Insira um numero para o vetor x: ");
    scanf("%d", &x[i]);

    printf("Insira um numero para o vetor y: ");
    scanf("%d", &y[i]);

    soma[i] = x[i] + y[i];
    vezes[i] = x[i] * y[i];
  }
    
  for(i = 0; i < 5; i++) {
    for(j = i + 1; j < 5; j++) {
      if(x[i] == x[j]) {
        printf("Favor inserir números diferentes para o mesmo vetor.");
        exit(0);
      }
      
      else if(y[i] == y[j]) {
        printf("Favor inserir números diferentes para o mesmo vetor.");
        exit(0);
      }
    }
  }
  
  printf("\nRealizando a soma de todos os números de x e y (levando em conta a correspondência), temos: ");
  for(i = 0; i < 5; i++) printf("%d ", soma[i]);

  printf("\n\nRealizando a multiplicação de todos os números de x e y (levando em conta a correspondência), temos: ");
  for(i = 0; i < 5; i++) printf("%d ", vezes[i]);
  
  printf("\n\nEsses numeros pertencem a 'x' mas nao pertencem a 'y': ");
    for(i = 0; i < 5; i++)
      if(x[i] != y[i]) {
        x[i] = z[i];
        
        printf("%d ", z[i]);
        continue;
      }

    printf("\n\nOs números que pertencem ao vetor x e ao vetor y são: ");
    for(i = 0; i < 5; i++) {
      for(j = 0; j < 5; j++)
        if(x[i] == y[j]) {
          printf("%d ", x[i]);
          count++;
        }
    }
    
    if(count == 0) printf("Não há intersecção entre os vetores x e y.");
    
    printf("\n\nRealizando a união dos vetores x e y, temos: ");
    for(i = 0; i < 5; i++) {
      if(x[i] == y[i]) printf("%d ", x[i]);
      else {
        printf("%d ", x[i]);
        printf("%d ", y[i]);
      }
    }
  
  return 0;
}