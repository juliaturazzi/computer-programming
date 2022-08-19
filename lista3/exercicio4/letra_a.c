#include <stdio.h>

int main() {
    int c, y;
    double x, z, a, b, result;

    x = 6.0; y = 2; z = 4.0; a = 8;  b = 7.5; c = 12;

    result = x - y * ++a;
    printf("O resultado da expressão é: %.3lf", result); // -12.0
   
    return 0;
}