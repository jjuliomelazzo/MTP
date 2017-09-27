#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define N 256

int main(){
    char palavras[5][256];
    int i, j, aux = 0;
    printf("Digite as palavras: \n");
    for (i=0; i < 5; i++)
        fgets(palavras[i], N, stdin);

 return EXIT_SUCCESS;
}
