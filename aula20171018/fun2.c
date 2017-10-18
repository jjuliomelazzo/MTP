#include <stdio.h>
#include <stdlib.h>

int divisao (int num1, int num2, int *pnum1, int *pnum2, int *pd){
    if (num2 == 0)
        return 0;
    else
        *pd = num1/num2;

    return 0;
}


int main(){
    int num1, num2, d;
    printf("Insira os numeros para efetuar a divisao: ");
    scanf("%d, %d", &num1, &num2);
    return EXIT_SUCCESS;
}
