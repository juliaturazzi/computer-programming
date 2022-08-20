#include <stdio.h>
#include <stdlib.h>

int main (void) {
    double *memoria, i;
    i = 0;
 
    while(1) {
        memoria = (double *)  malloc (i*sizeof(double));
        if(!memoria) {
            printf("O limite de memoria: %f", (8*i*sizeof (memoria)));
            free(memoria);
            break;
        }
    
      i += 10000;
      free(memoria);
    }

  return 0;
}

/* Saída:
    O limite de memoria: 29627520000.000000
*/