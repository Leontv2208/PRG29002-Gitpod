#include <stdio.h>

int main()
{
    int n, i;

    printf("Entre com n: ")
    scanf("%d", &n);

    printf("Contagem de 1 até n: ");
    for (i=1; i <= n; i++) {
        printf("%d\n", i);
    }

    printf("Contagem de 0 até n-1: ");
    for (i=0; i < n; i++) {
        printf("%d\n", i);
    }

    printf("Contagem de 0 até n, de 3 em 3: ");
    for (i=0; i <= n; i+=3) {
        printf("%d\n", i);
    }
    




    return 0;




}