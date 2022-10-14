#include <stdio.h>
#define try 3
#define senha 314159

int main(void){

    int n, t; 
    t=1;       

    while (t <= try) {
        printf("Entre com a senha: ");
        scanf("%d", &n);

        if (n == senha) {
            printf("Acesso autorizado\n");
            break;
        } else {
            if (t == 3) {
            printf("Acesso negado (senha incorreta)\n");
            printf("Sistema bloqueado\n");
            break;
            } else {
            printf("Acesso negado (senha incorreta)\n");
            t++;
            }
                        
            }
        }
return 0;
} 

