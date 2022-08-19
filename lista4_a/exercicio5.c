#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void) {
    int i, n, par, impar;
    int max = 100;
    par = impar = 0;
    
    double Impar, Par;
    
    srand(time(NULL));

    for(i = 0; i < 1000000; i++){
        n = rand();
        n = n % max;
        
        if(n % 2) par++;
        else impar++;   
    }

    Impar = (double)(impar*100)/1000000;
    Par  =  (double)(par*100)/1000000;
    
    printf("Quantidade de números pares: %d\n", par);
    printf("Quantidade de números ímpares: %d\n", impar);
    printf("Porcentagem de números pares: %.1lf%%\n", Par);
    printf("Porcentagem de números ímpares: %.1lf%%\n", Impar);
    
    return 0;
}