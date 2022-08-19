#include <stdio.h>
#include <stdbool.h>

int main() {
    int A, B, C;
    double D, X;
    bool L = false;
    
    A = 5; B = 10; C = -8; D = 1.5; 

    X = 2 *A % 3 - C; // 9
    printf("X = %.2lf", X); 

    return 0;    
}