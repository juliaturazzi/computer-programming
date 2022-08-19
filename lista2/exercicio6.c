/* 
    Descrição: Este programa calcula a soma de todos os números
    inteiros entre 0 e n. (modo 1)
*/

#include <stdio.h>

int main(void) {
    int n, soma;
    n = soma = 0;
    
    printf("Escolha um número inteiro: ");
    scanf("%d", &n);
    
    /* considerando a1 = 1 */
    soma = (1 + n) * n / 2;
    
    printf("A soma de todos os números inteiros ente 0 e o número escolhido é: %d\n", soma);
        
    return 0;
 }