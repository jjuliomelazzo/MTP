#include <stdio.h>
#include <stdlib.h>

void par(){
	int p, vet[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	for (p=0; p < 20; p++){
		if (vet[p] % 2 == 0)
	printf("%d,", vet[p]);	
	}
}

void impar(){
	int i, vet[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	for (i=0; i < 20; i++){
		if (vet[i] % 2 == 1)
	printf("%d,", vet[i]);		
	}
}

int main(){
	int x;
	printf("Digite 1 para impares e 2 para pares: ");
	scanf("%d", &x);
	if (x == 2){
		printf("\n\nNumeros pares entre 1 e 20: \n"); 
		par();
	}
	if (x == 1){
		printf("\n\nNumeros impares entre 1 e 20: \n");
		impar();
	}
	
	return EXIT_SUCCESS;
}