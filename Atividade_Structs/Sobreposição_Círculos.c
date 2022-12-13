#include <stdio.h>
#include <math.h>

typedef struct{
double X;
double Y;
} Ponto;

typedef struct{
Ponto centro;
double raio;
} Disco;

double distancia(Ponto p1, Ponto p2){

    return sqrt((pow(p2.X-p1.X, 2)) + ((pow(p2.Y-p1.Y, 2))));

}

int sobrepoem(Disco c1, Disco c2, double distancia){

/*Dois discos se sobrepõem se a distância entre seus centros
 é menor que a soma dos raios.*/
    double soma;
       soma = c1.raio+c2.raio; 

    if (distancia < soma) {
        return 1;
    } else {
        return 0;
    }
}

    



int main(void){
    Disco disco1, disco2; 
    double d;   
    
    printf("Entre com o centro do disco 1: ");
    scanf("%lf %lf", &disco1.centro.X, &disco1.centro.Y);

    printf("Entre com o raio do disco 1: ");
    scanf("%lf", &disco1.raio);

    printf("Entre com o centro do disco 2: ");
    scanf("%lf %lf", &disco2.centro.X, &disco2.centro.Y);

    printf("Entre com o raio do disco 2: ");
    scanf("%lf", &disco2.raio);

    d = distancia(disco1.centro, disco2.centro);

    switch (sobrepoem(disco1, disco2, d)) {
        case 1:
            printf("Os discos se sobrepoem\n");
            break;
        case 0:
            printf("Os discos nao se sobrepoem\n");
            break;
    }

    return 0;    
}