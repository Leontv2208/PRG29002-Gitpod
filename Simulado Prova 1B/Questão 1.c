#include <stdio.h>

int main(void)
{
    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11;


    printf("Entre com os nove primeiros digitos do CPF: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9);

    d10 = (((10*d1)+(9*d2)+(8*d3)+(7*d4)+(6*d5)+(5*d6)+(4*d7)+(3*d8)+(2*d9))*10)%11;
    if (d10 == 10) {
    d10 = d10%10;
    }

    d11 = (((11*d1)+(10*d2)+(9*d3)+(8*d4)+(7*d5)+(6*d6)+(5*d7)+(4*d8)+(3*d9)+(2*d10))*10)%11;
       
    if (d11 == 10) {
    d11 = d11%10;
    }

    printf("CPF completo: %d%d%d.%d%d%d.%d%d%d-%d%d\n", d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11);
    
    switch (d9) {
    case 0: printf("RS\n");
            break;
    case 1: printf("DF, GO, MT, MS, TO\n");
            break;
    case 2: printf("AC, AP, AM, PA, RO, RR\n");
            break;
    case 3: printf("CE, MA, PI\n");
            break;
    case 4: printf("AL, PB, PE, RN\n");
            break;
    case 5: printf("BA, SE\n");
            break;
    case 6: printf("MG\n");
            break;
    case 7: printf("ES, RJ\n");
            break;
    case 8: printf("SP\n");
            break;
    case 9: printf("PR, SC\n");
            break;
    }
      

    return 0;
}