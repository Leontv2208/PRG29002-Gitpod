#include <stdio.h>
#define N 5

int main(void){

    int i;
    double a[N], b[N];
    double soma;

    for(i=0; i<N; i++){
        a[i] = i*i;
    }

    for(i=0; i<N; i++){
        printf("Entre com o valor %d: ", i);
        scanf("%lf", &b[i]);
    }

    for(i=0;i<N;i++){
        a[i] += b[N-1-i];
    }

    for(i=0; i<N;i++) {
        printf("%lg\n", a[i]);
    }

    soma = 0.0;
    for(i=0;i<N;i++){
        soma+= a[i];
    }
    printf("A soma eh %lg\n", soma);

    return 0;
}