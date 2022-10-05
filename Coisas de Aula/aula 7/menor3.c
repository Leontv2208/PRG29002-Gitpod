#include <stdio.h>

int minimo(int a, int b, int c);

int main (void){
    int n1, n2, n3;
    printf("Entre com três numeros inteiros: ");
    scanf("%d%d%d", &n1, &n2, &n3)
    printf("%d\n", minimo(3,4,2));
return 0;
}

int minimo(int a, int b, int c)
{
    int min;
    if (a<b && a<c){
        return a;
    } else {
        if (b<c) {
            return b;
        } else {
            return c;
        }
    
    }
}