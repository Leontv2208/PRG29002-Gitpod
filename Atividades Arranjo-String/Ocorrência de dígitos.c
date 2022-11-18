#include <stdio.h>

int main(void){

    int numero;
    int count[10]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int resto, i;

    printf("Entre com um inteiro: ");
    scanf("%9d", &numero);

    while(numero>0){
        resto = numero%10;
        count[resto] += 1;
        numero = numero/10;
    }
    
    printf("Digito:       0  1  2  3  4  5  6  7  8  9\n");
    printf("Ocorrencias:  ");
    

    for (i=0; i<10; i++) {
    printf("%d  ", count[i]);
    }

    return 0;
}