/* 
    Descrição: Este programa calcula a idade de duas pessoas
    e indica qual delas é a mais velha.
*/

#include <stdio.h>

int main(void) {
    int idade1, idade2, dia1, dia2, mes1, mes2, ano1, ano2, nome1, nome2;
    idade1 = idade2 = dia1 = dia2 = mes1 = mes2 = ano1 = ano2 = 0;

    printf("Insira a data de nascimento do primeiro indivíduo: "); 
    scanf("%d %d %d", &dia1, &mes1, &ano1); 
    
    printf("Insira a data de nascimento do segundo indivíduo: "); 
    scanf("%d %d %d", &dia2, &mes2, &ano2);
    
    if(ano1 > ano2)  printf("segundo");

    else if(ano1 < ano2)  printf("primeiro");
    
    else if((ano1 = ano2) && (mes1 > mes2))  printf("segundo");
    
    else if((ano1 = ano2) && (mes2 > mes1))  printf("primeiro");
    
    else if((ano1 = ano2) && (mes1 = mes2) && (dia1 > dia2))  printf("segundo");

    else if((ano1 = ano2) && (mes1 = mes2) && (dia2 > dia1))  printf("primeiro");
    
    else  printf("mesmo dia");
    
    return 0;
}