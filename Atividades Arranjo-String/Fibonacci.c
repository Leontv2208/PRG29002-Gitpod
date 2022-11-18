#include <stdio.h>
#define N 10



int main(void){
    int a, b;
    int x, y;
    int f[N]={};
    int i;
    
    
    printf("Entre com os termos iniciais: ");
    scanf("%d %d", &x, &y);

    printf("Entre com os coeficientes: ");
    scanf("%d %d", &a, &b);

    printf("Sequencia: ");

    for (i=0; i<N; i++)
    {
        switch (i){

            case 0:
                f[0] = x;
                printf("%d ", f[0]);
                break;
            case 1:
                f[1] = y;
                printf("%d ", f[1]);
                break;
            default:
                f[i] = (a*f[i-1])+(b*f[i-2]);
                printf("%d ", f[i]);
                break;
        }
    } printf("\n");

return 0;
}

