#include <stdio.h>

int main() {
    int x, y, z;
    x = y = 10;
    
    z = ++x;
    x = -x;
    y++;
    
    x = x + y - (z--);
    printf("Valores de x %d, y %d e z %d\n", x, y, z);  // -11, 11, 10
    
    return 0;
}