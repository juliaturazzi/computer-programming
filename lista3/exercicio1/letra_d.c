#include <stdio.h>
#include <stdbool.h>

int main() {
    int A, B, C;
    double D, X;
    bool L = false;
    
    A = 5; B = 10; C = -8; D = 1.5;

    X = (-C * 2) + (D + B)/ A; // 18.3
    printf("X = %.3lf", X);

    return 0;
}