#include <stdio.h>

void dobra(double *x)
{
    *x = 2.0 * *x;
}

int main(void)
{
    double a = 3.0;

    printf("valor inicial: %lg\n", a);
    dobra(&a);
    printf("valor dobrado: %lg\n", a);

    return 0;
}