#include <stdio.h>

int potencia_fatorial(int base, int expoente);
int binomial(int n, int k);
void imprime_pascal(int num_linhas);


int main(void)
{
    int num_linhas;

    printf("Entre com o numero de linhas: ");
    scanf("%d", &num_linhas);

    imprime_pascal(num_linhas);

    return 0;
}


void imprime_pascal(int num_linhas)
{
    int n, k;

    for (n = 0; n < num_linhas; n++) {
        for (k = 0; k <= n; k++) {
            printf("%5d", binomial(n, k));
        }
        printf("\n");
    }
}


int potencia_fatorial(int base, int expoente)
{
    int pot = 1;

    while (expoente > 0) {
        pot *= base;
        base--;
        expoente--;
    }

    return pot;
}


int binomial(int n, int k)
{
    return potencia_fatorial(n, k) / potencia_fatorial(k, k);
}
