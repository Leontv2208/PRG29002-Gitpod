#include <stdio.h>
#include <stdlib.h>

#define ARQ_CADASTRO "cadastro.txt"

typedef struct {
    char nome[101];
    char cpf[12];
    int idade;
} Pessoa;

Pessoa le_pessoa_teclado();
void imprime_pessoa_tela(Pessoa p);
void salva_pessoa_arquivo(Pessoa p);
Pessoa abrir_pessoa_arquivo();

int main(void)
{
    int op;

    printf("Entre com uma opcao:\n");
    printf("1. Cadastrar / sobrescrever\n");
    printf("2. Ler o cadastro\n");
    printf("Sua escolha: ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            salva_pessoa_arquivo(le_pessoa_teclado());
            break;
        case 2:
            imprime_pessoa_tela(abrir_pessoa_arquivo());
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}

Pessoa le_pessoa_teclado()
{
    Pessoa p;
    printf("Nome: ");
    scanf("%s", p.nome);
    printf("CPF: ");
    scanf("%s", p.cpf);
    printf("Idade: ");
    scanf("%d", &p.idade);
    return p;
}

void imprime_pessoa_tela(Pessoa p)
{
    printf("Nome: %s\n", p.nome);
    printf("CPF: %s\n", p.cpf);
    printf("Idade: %d\n", p.idade);
}

void salva_pessoa_arquivo(Pessoa p)
{
    FILE *arq;
    arq = fopen(ARQ_CADASTRO, "a");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
    fprintf(arq, "%s\n%s\n%d\n", p.nome, p.cpf, p.idade);
    fclose(arq);
}

Pessoa abrir_pessoa_arquivo()
{
    Pessoa p;
    FILE *arq;
    arq = fopen(ARQ_CADASTRO, "r");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }
    fscanf(arq, "%s%s%d", p.nome, p.cpf, &p.idade);
    fclose(arq);
    return p;
}
