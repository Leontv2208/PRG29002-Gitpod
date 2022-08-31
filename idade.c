#include <stdio.h>

int main(void)
{
    int idade;
    int poder, dever;

    printf("Entre com sua idade: ");
    scanf("%d", &idade);

    poder = idade >= 16;
    dever = 18 <= idade && idade <= 70;

    printf("Pode: %d\n", poder);
    printf("Deve: %d\n", dever);





 return 0;
}