#include <stdio.h>

int main (void) {
    int var ; // var e um inteiro
    int * varPtr ; // varPtr e um ponteiro para inteiros
    
    var = 7;
    varPtr = & var ; // varPtr aponta para onde esta var
    
    printf ("O endereco de var e %p\n" 
    "O valor de varPtr e %p\n", &var , varPtr );

    printf ("O valor de var e %d\n" 
    "O valor que varPtr aponta e %d\n", var , * varPtr );

    // Para os fortes
    printf (" Mostrando que * e & sao complementares \n"
    " &* varPtr = %p\n"
    " *& varPtr = %p\n", &* varPtr , *& varPtr );

    return 0;
}

/* Saída:
    O endereco de var e 0x7ffeed2b84b4
    O valor de varPtr e 0x7ffeed2b84b4
    O valor de var e 7
    O valor que varPtr aponta e 7
    Mostrando que * e & sao complementares 
    &* varPtr = 0x7ffeed2b84b4
    *& varPtr = 0x7ffeed2b84b4
*/ 