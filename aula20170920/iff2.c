#include<stdio.h>
#include<stdlib.h>

int main (){
    int num;
    float n1, R1;
    double n2, R2;
    int i;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    n1 = 1/num;
    n2 = 1/num;

    for (i=0; i < 729; i++){
        R1 = n1 + n1;
        R2 = n2 + n2;
    }
    printf("Resultado: %.15f\n", n1);
    printf("Resultado: %.15d", n2);
    return EXIT_SUCCESS;
}
