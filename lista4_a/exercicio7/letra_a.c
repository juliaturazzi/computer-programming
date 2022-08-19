#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main() {
    double x,y,k,pi;
    int i, dentro; 
    dentro = 0;

    srand(time(NULL));
    dentro = 0;

    for(i=0; i<1000000; i++){
        x = (double)rand()/ RAND_MAX;
        y = (double)rand()/ RAND_MAX;
        
        k = x*x + y*y;
        
        if(k<=1) dentro++;
   }

   pi = (double)(dentro * 4)/ 1000000;
   printf("O resultado é %lf\n", pi);
}