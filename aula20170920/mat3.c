#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float num, b, logaritimo;
    printf("Entre com o numero desejado: ");
    scanf("%f", &num);
    printf("Entre com a base do logaritimo: ");
    scanf("%f", &b);
    logaritimo = log(num)/log(b);
    printf("Resultado: %f", logaritimo);
    return EXIT_SUCCESS;
}
