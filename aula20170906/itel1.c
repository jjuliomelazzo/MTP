#include <stdio.h>

int main()
{
    int numero;
    int i;
    printf ("Entre com um número: ");
    scanf("%d", &numero); getchar();
    for (i=0, i < numero; i++)
        fatorial = fatorial*(numero-i);
    printf ("%d! = %d\n", numero, fatorial);
    return  0;
}
