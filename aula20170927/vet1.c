#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10000

int main(){
    srand (time(0));
    int n;
    int i;
    int vet[N];
    printf("Insira um numero: ");
    scanf("%d", &n);
    for (i=0; i < 10000; i++)
        rand()%(n + 1);
    return EXIT_SUCCESS;
}
