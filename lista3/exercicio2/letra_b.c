#include <stdio.h>
#include <stdbool.h>

int main() {
    bool L;

    L = (!(5==6)&&(5!=6) && ((2 > 1)||(5 <= 4))); //verdadeiro

    // retorna 1 quando verdadeira e 0 quando falsa
    printf("A expressao é %d", L);

    return 0;
}