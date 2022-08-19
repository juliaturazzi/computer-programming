#include <stdio.h>
#include <stdbool.h>

int main() {
    int A, B, C;
    double D, X;
    bool L = false;
    
    A = 5; B = 10; C = -8; D = 1.5;

    X = (!L + A < C | C + C * B >= 1&1);
    printf("X = %.3lf", X);  // 0 (falso)

    return 0;
}