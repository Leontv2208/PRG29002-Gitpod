#include <stdio.h>

#define VALOR_INICIAL 10000.0
#define TAXA_INICIAL 6.0
#define PASSO_TAXA 1.0
#define NUM_TAXAS 5
#define NUM_ANOS 4

int main(void)
{
    int i,j;
    double taxa[NUM_TAXAS];
    double valor[NUM_TAXAS];
    double rend;

    for (i=0;i<NUM_TAXAS;i++){
        taxa[i] = TAXA_INICIAL + i * PASSO_TAXA/100.0;
        valor[i] = VALOR_INICIAL;
    }

    for (j=1;j<= NUM_ANOS;j++){
        for (i=0;i<NUM_TAXAS;i++){
            rend = valor[i] * taxa[i];
            valor[i] += rend;
            printf("%.2lf ", valor[i]);
        }
        printf("\n");
    }

    return 0;
}