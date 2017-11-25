#include <stdio.h>
#include <stdlib.h>

int main(){
	float x, y, soma;
	
	printf("Insira dois numeros reais: \n");
	scanf("%f %f", &x, &y);
	float *p1 = &x;
	float *p2 = &y;
	printf("Endereco de x e': 0x%x\n", p1);
	printf("Endereco de y e': 0x%x\n", p2);
	soma = x + y;
	printf("Somatorio e': %f\n", soma);
	return EXIT_SUCCESS;
}
	