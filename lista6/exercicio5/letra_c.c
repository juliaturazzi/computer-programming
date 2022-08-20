/* Programa que recebe duas strings e concatena 
   a segunda string ao final da primeira, sem utilizar strcat */

#include <stdio.h>
#include <string.h>

void concatenar (char string1[], char string2[]) {
    int i, j;
    i = j = 0;

    while(string1[i] != '\0' && string1[i] != '\n') i++;
        
        
    while (string2[j] != '\0' && string2[j] != '\n') {
        string1[i] = string2[j];
        i++;
        j++;
    }
    
    string1[i] = '\0';
    //printf(string1);
}

int main(void) {
    char str1[50], str2[50];
 
    printf("Insira a string 1: ");
    fgets(str1, 50, stdin);
          
    printf("\nInsira a string 2: ");
    fgets(str2, 50, stdin);
          
    concatenar (str1,str2);
    printf("\nStrings depois de concatenadas: %s", str1);
          
    return 0;
}