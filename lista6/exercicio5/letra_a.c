/* Programa que recebe uma string e retorna 
   o seu tamanho, sem utilizar o strlen */

#include <stdio.h>
 
void tamanhostring (int n, char *str) {
    if (str[n] == '\0') {
        printf("%i", n);
        return;
    }
     
    tamanhostring(n + 1, str);
}
 
int main(void) {
    char str[50];
    
    printf("Insira a string: ");
    scanf("%s", str);
    
    printf("\nO tamanho da string '%s' = ", str);
    tamanhostring(0, str);
     
    return 0;
}