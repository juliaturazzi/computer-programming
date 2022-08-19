#include <stdio.h>
#include <stdbool.h>

int main() {
    bool L;

    L = (11 > 2) && (5 > 30); //falso

    // retorna 1 quando verdadeira e 0 quando falsa
    printf("A expressao é %d", L);

    return 0;
}