#include <stdio.h>

int main (void) {
  int lastIdade, contagem, somaDasIdades, minimo, maximo;
  
  lastIdade = -1;
  maximo = 0;
  minimo = 99999;
  somaDasIdades = 0;
  contagem = 0;

  while(lastIdade != 0) {
    int idade;
    
    printf("Insira a %d idade: ", contagem + 1);
    scanf("%d", &idade);
    
    if(idade != 0) {
        if(minimo > idade) minimo = idade;
        
        if(maximo < idade) maximo = idade;
            
        somaDasIdades += idade;
        contagem++;
    }
    lastIdade = idade;
  }

  printf("Total de pessoas = %d\n", contagem);
  printf("Media de idade das pessoas = %d\n", somaDasIdades/ contagem);
  printf("Idade manima = %d\n", minimo);
  printf("Idade mixima = %d\n", maximo);
}