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

    for(i=0; i<9999999; i++){
      x = (double)rand()/ RAND_MAX;
      y = (double)rand()/ RAND_MAX;
      
      k = x*x + y*y;
      
      if (k <= 1) dentro++;
   }
 
   pi = (double)(dentro * 4)/ 9999999;
   printf("O resultado é %lf\n", pi);
}