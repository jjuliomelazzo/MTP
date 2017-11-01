#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float media(float * numeros, int n){
    float m=0.0f;
    int i;
    for (i=0; i < n; i++) m+=numeros[i];
    m /= n;
    return m;
}
float desviopadrao(float * numeros, int n){
    float m = media(numeros, n);
    float dp = 0.0f;
    int i;
    for (i=0; i < n; i++) dp+=(numeros[i]-m)*(numeros[i]-m);
    dp /=n;
    return sqrt(dp);
}

int main(){
    int i;
    int n; //quantidade de números
    float * numeros;
    printf("Quantos numeros deseja trabalhar?: ");
    scanf("%d", &n);
    numeros = (float*) malloc(n*sizeof(float));
    for (i=0; i < n; i++){
        printf("Entre com o %do numero: ", i+1);
        scanf("%f", numeros+i);
    }
    printf("A media dos numeros e': %f/n", media (numeros, n));
    printf("O desvio padrão dos numeros e': %f/n", desviopadrao (numeros, n));
    free(numeros);
    return 0;
}
