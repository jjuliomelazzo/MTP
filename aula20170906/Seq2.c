#include<stdio.h>

int main()
{
    float base, altura, areatriangulo;
    printf ("Entre com a base do triangulo: ");
    scanf("%f", &base);
    printf ("Entre com a altura do triangulo: ");
    scanf("%f", &altura);
    areatriangulo= (base*altura)/2;
    printf ("Area do triangulo: %.3f\n", areatriangulo);
    return 0;
}

