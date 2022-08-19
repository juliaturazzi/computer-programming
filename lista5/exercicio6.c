#include <stdio.h>

int main (void) {
    int matriz[5][4], i, j, soma, maior, matricula;
    soma = maior = 0;

    // Leitura das tres primeiras informacoes de cada aluno 
    printf("Insira respectivamente o numero da matricula, media das provas e media de trabalhos: \n");
    for(i = 0; i < 5; i++) {
      for(j = 0; j < 3; j++) scanf("%d", &matriz[i][j]);
        
    // Calculo da nota   
      /* Coloquei a soma das medias como pedido no enunciado,
         mas caso fosse necessC!rio fazer a media da soma da media de 
         provas e da media de trabalhos faria: 
         matriz1[i][3]= (matriz1[i][1] + matriz1[i][2])/2  */

      matriz[i][3] = matriz[i][1] + matriz[i][2];
      printf("O aluno %d tem como nota final: %d\n", matriz[i][0], matriz[i][3]);
    }
 
    // Matricula do aluno que obteve a maior nota final 
    for(i = 0; i < 5; i++) {
      if(matriz[i][3] > maior) {
          matricula = matriz[i][0];
          maior = matriz[i][3];
        }
      for(j = 0; j < 3; j++);  
    } 
    printf("\nA matricula do aluno que obteve a maior nota: %d\n", matricula);

    // Media aritmetica das notas finais
   for(i = 0; i < 5; i++) 
        soma+= matriz[i][3];
    
    soma = soma/5;
    
    printf("A media aritmetica das notas finas: %d\n", soma);
 
  return 0;
}