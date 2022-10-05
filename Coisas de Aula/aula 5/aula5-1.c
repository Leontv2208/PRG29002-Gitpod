#include <stdio.h>
#include <math.h>

double lei_dos_cossenos (double y, double z, double alpha)
{
    return (sqrt(y*y + z*z - 2*y*z*cos(alpha)));
}

int main (void)
{
    printf("Entre com dois números: ");
    scanf("%lf%lf", &y, &z);
    printf("Entre com o ângulo (radianos)");
    scanf("%lf", &alpha);
    x= lei_dos_cossenos(y, z, alpha);
    printf("O lado x vale: %lg\n", x)

    return 0;
}