#include <stdio.h>
#include <stdbool.h>

int main() {
    bool L;

    L = ((10 > 5)||(5 > 10)); //verdadeiro

    // retorna 1 quando verdadeira e 0 quando falsa
    printf("A expressao é %d", L);

    return 0;
}