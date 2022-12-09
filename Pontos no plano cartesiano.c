#include <stdio.h>
#include <math.h>

typedef struct{

int Quadrante;
double Distancia;
double Medio;
int Valor;


} Ponto;

int quadrante(double x, double y){

    if (x==0 || y==0) {
        return 0;
    } else if (x>0 && y>0) {
    return 1;
    } else if (x<0 && y>0) {
    return 2;
    } else if (x<0 && y>0) {
    return 3;
    } else if (x>0 && y<0) {
    return 4;
    }    
}

double distancia(int Xa, int Xb, int Ya, int Yb){

double d;
int pow, a, b;
pow = 2;


d = sqrt(((Xb-Xa)*(Xb-Xa))+((Yb-Ya)*(Yb-Ya))); 

return d;
}

double ponto_medio(double A, double B){

    double media;
    media = ((A+B)/2);

    return media;
}






int main(void){

    Ponto x1,y1;
    Ponto x2, y2;
    Ponto ponto1, ponto2;
    Ponto X, Y;
    

    printf("Entre com o ponto 1: ");
    scanf("%d %d", &x1.Valor, &y1.Valor);

    printf("Entre com o ponto 2: ");
    scanf("%d %d", &x2.Valor, &y2.Valor);

    ponto1.Quadrante = quadrante(x1.Valor,y1.Valor);
    ponto2.Quadrante = quadrante(x2.Valor, y2.Valor);
    
    printf("Quadrante do ponto 1: %d\n", ponto1.Quadrante);
    printf("Quadrante do ponto 2: %d\n", ponto2.Quadrante);

    ponto1.Distancia = distancia(x1.Valor, x2.Valor, y1.Valor, y2.Valor);
    printf("Distancia: %lg\n", ponto1.Distancia);

    X.Medio = ponto_medio(x1.Valor, x2.Valor);
    Y.Medio = ponto_medio(y1.Valor, y2.Valor);

    printf("Ponto medio: %lg %lg\n", X.Medio, Y.Medio);

    return 0;
}