#include <math.h>
#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;

    temp = *y;
    *y = *x;
    *x = temp;

    
}


int main(void)
{
    int x = 10;
    int y = 20;
    

    printf("x vale %d e y vale %d\n", x, y);

    swap(&x,&y);

    printf("x vale %d e y vale %d\n", x, y);

    return 0;
}