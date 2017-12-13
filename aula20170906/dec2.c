#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero, numero2, numero3;
    int cont=0;
    printf("Insira um numero divisor de 8192: ");
    scanf("%d", &numero);
    if (8192%numero == 0){
        printf ("+1 ponto!\n\n");
        cont++;
    }
    else
        printf ("Errou!\n\n");


    srand(time(0));//semente
    int x = rand()%100;
    int menor = 1328, maior = 1360;
    int y = menor + rand()%(maior-menor+1);
    printf ("Numero sorteado entre 1328 e 1360: %d\n", y);
    printf ("Insira o somatorio do numero sorteado com 101: ");
    scanf("%d", &numero2);

    if (y + 101 == numero2){
        printf ("+1 ponto!\n\n");
        cont++;
    }
    else
        printf ("Errou!\n\n");

    srand(time(0));//semente
    int w = rand()%100;
    int menor1 = 0, maior1 = 99;
    int z = menor1 + rand()%(maior1-menor1+1);
    printf ("Numero sorteado entre 0 e 99: %d\n", z);
    printf ("Insira a multiplicacao do numero sorteado por 3: ");
    scanf("%d", &numero3);

    if (z*3 == numero3){
        printf ("+1 ponto!\n\n");
        cont++;
    }
    else
        printf ("Errou!\n\n");

    printf ("Pontuacao final = %d\n", cont);

    return 0;
}

