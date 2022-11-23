#include <stdio.h>
#include <string.h>
#define N 3

typedef struct {
    char nome[11];
    int idade;
} Pessoa;

typedef struct{
    char nome[11];
    Pessoa prof;
    Pessoa turma[N];
    int notas [N];
} Disciplina;

void imprime_pessoa(Pessoa p){
     printf("Nome: %s, idade: %d\n", p.nome, p.idade);
}

int main(void)
{
    int i;
    Disciplina prg1;
    Pessoa e, r;
    Pessoa turma[N];

    e.idade = 35;
    strcpy(e.nome, "Eraldo");

    r.idade = 39;
    strcpy(r.nome, "Roberto");

    strcpy(prg1.nome, "Prog 1");
    prg1.prof = r;

    prg1.prof.idade = 100; 

    for(i = 0; i < N; i++) {
        printf("Entre com o nome do aluno %d: ", i);
        scanf("%s", turma[i].nome);
        printf("Entre com a idade do aluno %d: ",i);
        scanf("%d", &turma[i].idade);
    }

    printf("Professores:\n");
    imprime_pessoa(e);
    imprime_pessoa(r);
    printf("Alunos:\n");

    for(i = 0; i < N; i++){
         imprime_pessoa(turma[i]);
    }
}