#include <stdio.h>

int main(void)
{
    long numero;
    int digito, digito_visto[10]={0};

    printf("Entre com um inteiro: ");
    scanf("%ld", &numero);

    while(numero>0){
        digito = numero%10;
        if(digito_visto[digito] == 1){
            printf("Ha digitos repetidos\n");
            break;
        }
        digito_visto[digito] = 1;
        numero = numero/10;
    }


    return 0;

}