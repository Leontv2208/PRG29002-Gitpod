#include <stdio.h>

typedef struct {
    double real;
    double img;
} Complex;

double modulo (Complex z){
    return sqrt(z.real*z.real + z.img*z.img);

}

int main(void){
    Complex z1 = {0,1}; // 0 + i
    Complex z2 = {3,4}; // 3 + 4i

    printf("A parte real de z1 eh %lf\n", z1.real);
    printf("A parte imaginaria de z1 eh %lf\n", z1.img);

    printf("O modulo de z1 eh %lf\n", modulo(z1));
    printf("O modulo de z2 eh %lf\n", modulo(z2));

    return 0;
}  