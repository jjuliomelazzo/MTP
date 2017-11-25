#include <stdio.h>
#include <stdlib.h>
#define N 100

typedef
struct stponto {
	int x, y;
}
Ponto;

int main(){
	FILE * arquivo;
	Ponto * pontos;
	char nome_arquivo[N];
	pontos = (Ponto *) malloc(2*sizeof(Ponto));
	printf("\nQual o nome do arquivo: ");
	scanf("%s", nome_arquivo);
	arquivo = fopen (nome_arquivo, "rb");
	fread(pontos, 2*sizeof(int), 2, arquivo);
	fclose(arquivo);
	printf("%d %d %d %d", pontos[0].x,pontos[0].y,pontos[1].x,pontos[1].y);
	
	free(pontos);
	return EXIT_SUCCESS;
}
	
	