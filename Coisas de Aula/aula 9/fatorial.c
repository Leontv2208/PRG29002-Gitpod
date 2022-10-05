#include <stdio.h>

long fatorial(int n)

int main(void)
{
    printf("O fatorial de 5 é %ld\n", fatorial(5));
    return 0;
}

long fatorial(int n)
{
    int i; 
    long f;
    f=1;
    for(i = 2; i <= n; i++) {
        f *=i;
    }    

    return f;
}