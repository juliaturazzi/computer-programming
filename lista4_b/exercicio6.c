#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>

int main (void) {
  while(true) {
    int numerobase, opcao, teste;

    printf("\n\n<Conversao de base>\n");
    printf("1:decimal para hexadecimal \n");
    printf("2:hexadecimal para decimal \n");
    printf("3:decimal para octal \n");
    printf("4:octal para decimal \n");
    printf("5:Encerra \n");

    printf("Insira uma das opcoes listadas acima: ");
    scanf("%i", &opcao);

    switch(opcao) {
        case 1:
          printf("Insira um numero na base decimal: ");
          scanf("%d", &numerobase);
          printf("Em hexadecimal o numero %d (base decimal) e igual a %X \n", numerobase, numerobase);
          break;

        case 2:
          printf("Insira um numero na base hexadecimal: ");
          scanf("%X", &numerobase);
          printf("Em decimal o numero %X (base hexadecimal) e igual a %d \n", numerobase, numerobase);
          break;

        case 3:
          printf("Insira um numero na base decimal: ");
          scanf("%X", &numerobase);
          printf("Em octal o numero %d (base decimal) e igual a %o \n", numerobase, numerobase);
          break;

        case 4:
          printf("Insira um numero ena base octal: ");
          scanf("%o", &numerobase);
          printf("Em decimal o numero %o (base octal) e igual a %d \n", numerobase, numerobase);
          break;

        case 5:
          printf("Encerrado \n");
          exit(0);
          break;


        default:
          printf ("Opcao nao existente \n");
          break;
        }

    printf("\nVoce deseja retornar ao menu principal(1) ou finalizar o programa(2): ");
    scanf("%d", &teste);
    
    if (teste == 2) return 0;
    }
}