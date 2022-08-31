#include <stdio.h>

int main(void)
{
    int long_var = 0;
    long_var = long_var + 8;
    long_var+= 8; 
    long_var+= 8; 
    printf("%d\n", long_var);

    int a = 1;
    a *= 2;
    a *= 2;
    a *= 2;
    a *= 2;
    printf("%d\n", a);

    int b = 1357;
    printf("%d", b);
    b /= 10;
    printf("%d", b);
    b /= 10;
    printf("%d", b);
    b /= 10;
    printf("%d\n", b);

    
    
    

    return 0;
}