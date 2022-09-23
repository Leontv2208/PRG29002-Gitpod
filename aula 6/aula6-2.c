#include <stdio.h>

void decompor(double x, double *f, int *i)
{
    *i = (int)x;
    *f = x - *i;
}

int main (void)
{
    double x, f;
    double i;

    printf("Entre com um número real: ");
    scanf("%lf", &x);

    decompor(x, &f, &i);
    printf("Parte fracionária: %lg", f);

    return 0;
}