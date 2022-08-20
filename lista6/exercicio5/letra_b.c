/* Programa que recebe duas strings a serem comparadas como argumento 
e diz se as duas strings são iguais ou não (retorna <0 se primeira string 
é menor que a segunda, = 0 se forem iguais e >0 se a primeira string é 
maior que a segunda), sem utilizar strcmp */

#include <stdio.h>
#include <string.h>

int comparar(char str1[], char str2[]);

int main() {
  char vetor1[10] = "123454321";
  char vetor2[5] = "0987";

  printf("%d\n", comparar(vetor1, vetor2));
}

int comparar(char str1[], char str2[]) {
  int tamanho1;
  int x, y;
  x = 0, y = 0;
    
  while(str1[x] != '\0') x++;
  x++;

  tamanho1 = x;

  while(str2[y] != '\0') y++;  
  y++;

  if(x > y) return 1;
  else if(x < y) return -1;

  return 0;
}