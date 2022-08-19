#include<stdio.h>
#include<string.h>

int main (void) {
  char str1[50], str2[50], opcao, vetor[50], c;
  int i, j, x, y, contagem;

  printf("Insira a frase 1: ");
  fgets(str1, 50, stdin);

  for(i = 0; i < 50; i++) 
    if(str1[i] == '\n') str1[i] = '\0';

  printf("Insira a frase 2: ");
  fgets(str2, 50, stdin);

  for(j = 0; j < 50; j++)
    if(str2[j] == '\n') str2[j] = '\0';
    
  printf("\nEscolha uma opcao:\n");
  printf("a.Strings invertidas. \n");
  printf("b.Strings em outro vetor. \n");
  printf("c.Qual e a string maior. \n");
  printf("d.A String de maior tamanho. \n");
  printf("e.Ocorrencia do caractere na string e sua posicao. \n");
  scanf("%c", &opcao);

  if(opcao == 'a') {
    for(i = 0; str1[i] != '\0'; i++);
    for(j = 0; str2[j] != '\0'; j++);
    printf ("Inverso da frase 1: ");

    for(i--; i >= 0; i--) printf("%c", str1[i]);
    
    printf("\n");
    printf("Inverso da frase 2: ");
    
    for(j--; j >= 0; j--) printf("%c", str2[j]);
    }

  if(opcao == 'b') {
    strcat(str1, " ");
    strcat(str1, str2);
    strcat(vetor, str1);
      
    puts(vetor);
   }

  if(opcao == 'c') {
    x = strlen(str1);
    y = strlen(str2);
      
    if(x > y) printf("A string 1 e maior");
        
    if(y > x) printf("A string 2 e maior");
        
    if(x == y) printf("As strings possuem o mesmo tamanho\n");  
    }

  if (opcao == 'd') {
    x = strlen(str1);
    y = strlen(str2);
      
    if(x > y) printf("%s\n", str1);

    if(y > x) printf("%s\n", str2);
        
    if(x == y) printf("As strings possuem o mesmo tamanho\n"); 
    }

  if (opcao == 'e') {
    scanf(" %c", &c);

    for(i = 0; i < (strlen (str1)); i++) {
        if(str1[i] == c) {
            printf("\nEsse caractere aparece na string 1 e na posicao: %d \n",i);
            break;
            }
          
        else if(i == strlen (str1) - 1) {
            printf ("\nEsse caractere nao aparece na string 1.\n");
            }
        }
    
    for(i = 0; i < (strlen (str2)); i++) {
        if(str2[i] == c) {
            printf("\nEsse caractere aparece na string 2 e na posicao: %d\n",i);
            break;
        }
        
        else if (i == strlen (str2) - 1) printf ("\nEsse caractere nao aparece na string 2.\n");
        
        }
    }
  return 0;
}