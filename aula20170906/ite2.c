#include <stdio.h>
#include <stdlib.h>

int main(){
	int b, p, aux=1, i;
	printf("Insira o valor da base: \n");
	scanf("%d", &b);
	printf("Insira o valor da potencia: \n");
	scanf("%d", &p);
	for (i = 0; i < p; i++)
		aux = aux * b;
	printf("O resultado da operacao e': %d", aux);
	return EXIT_SUCCESS;
}
		