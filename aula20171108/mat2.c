#include <stdio.h>
#include <stdlib.h>
#include "matriz.h"

int main() {
	Matriz A;
	double ordem, detA;
	printf("Entre com a ordem da matriz: ");
	scanf("%lf", &ordem); 
	A = criarMatriz(ordem, ordem);
	preencherMatriz(A);
	imprimirMatriz(A);
	printf("Determinante de A: %.2lf\n", determinante(A));
	detA = determinante(A);
	destruirMatriz(A);
	
	return EXIT_SUCCESS;
	}