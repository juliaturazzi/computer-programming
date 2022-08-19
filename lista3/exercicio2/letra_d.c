#include <stdio.h>
#include <stdbool.h>

int main() {
    bool L;

    L = (11 > 2)||(3 > 30); //verdadeiro

    // retorna 1 quando verdadeira e 0 quando falsa
    printf("A expressao é %d", L);

    return 0;
}