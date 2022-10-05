#include <stdio.h>

int main(void)
{
    int idade;

    printf("Entre com sua idade: ")
    scanf("%d", &idade);

    if (idade >= 16) {
        printf("Você tem direito de votar ")
        if (idade >= 16 && idade <= 70){
            printf("E seu voto é obrigatório.\n")
        } else {
            printf("E seu voto é facultativo.\n")
        }

    } else {
        printf("Você ainda não pode votar.\n")
    }



    return 0;
}