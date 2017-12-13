#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, aux, perf=0;
	printf("Insira o numero desejado: \n");
	scanf("%d", &n);
	aux = n - 1;
	while (aux > 0){
		if (n % aux == 0){
			perf = perf + aux;
		}
		aux--;
	}
	if (n == perf)
		printf("O numero %d e' perfeito!!", n);
	else
		printf("O numero %d nao e' perfeito! \n", n);
	
	return EXIT_SUCCESS;
}
		
		
	