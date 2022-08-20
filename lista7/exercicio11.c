#include <stdio.h>

void misterio (char *n);

int main (void) {
    char nome [41];
    
    gets(nome);
    misterio(nome);
    
    return 0;
}

void misterio (char *n) {
    while(* n != ' ') n ++;
    n ++;
    puts(n);
}

/* O programa lê dois nomes separados por um espaço em branco, considera eles como um só e imprime apenas o que vem depois do espaço em branco, nesse caso o segundo nome inserido.
    Entrada:
    julia turazzi

    Saída:
    turazzi
*/