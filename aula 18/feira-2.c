#include <stdio.h>
#include <string.h>

#define MAX_ITENS 1000


typedef struct {
    char descricao[21];
    double peso_total;
    double preco_kg;
} Item;

typedef struct {
    Item estoque[MAX_ITENS];
    char nome_fantasia[21];
    double caixa;
    int n_itens;
} Feira;


double valor_total_item(Item item);
void adiciona_item(Feira *feira, Item *item);
void vender(Feira *feira, int id, double kg);
void imprime_feira(Feira *feira);
void altera_item(Feira *feira, int id,
                 double novo_peso_total, double novo_preco_kg);


int main(void)
{
    Feira feira;
    feira.n_itens = 0;
    feira.caixa = 100.0;
    strcpy(feira.nome_fantasia, "Feira do IFSC");

    Item pera = {"Pera nacional", 100.0, 7.50};
    Item banana = {"Banana caturra", 200.0, 3.00};
    Item uva = {"Uva Italia", 50.0, 9.00};

    adiciona_item(&feira, &pera);
    adiciona_item(&feira, &banana);
    adiciona_item(&feira, &uva);
    imprime_feira(&feira);

    printf("Cliente comprou 3 kg de pera.\n\n");
    vender(&feira, 0, 3.0);
    imprime_feira(&feira);

    printf("Promocao de pera.\n\n");
    altera_item(&feira, 0, -1.0, 6.50);
    imprime_feira(&feira);

    printf("Comprado do fornecedor 50 kg de uva.\n\n");
    altera_item(&feira, 2, 100.0, -1.0);
    imprime_feira(&feira);

    printf("\n");
    return 0;
}


double valor_total_item(Item item)
{
    return item.peso_total * item.preco_kg;
}


void vender(Feira *feira, int id, double kg)
{
    (*feira).estoque[id].peso_total -= kg;
    (*feira).caixa += kg * (*feira).estoque[id].preco_kg;
}


void adiciona_item(Feira *feira, Item *item)
{
    (*feira).estoque[(*feira).n_itens] = *item;
    (*feira).n_itens++;
}


void imprime_feira(Feira *feira)
{
    int i;
    printf("%s\n", feira->nome_fantasia);
    for (i = 0; i < feira->n_itens; i++) {
        printf("%3d | %-20s | %7.2f | %6.2f\n", i,
               feira->estoque[i].descricao,
               feira->estoque[i].peso_total,
               feira->estoque[i].preco_kg);
    }
    printf("Caixa: R$ %.2f\n", feira->caixa);
    printf("\n");
}


void altera_item(Feira *feira, int id,
                 double novo_peso_total, double novo_preco_kg)
{
    if (novo_peso_total >= 0.0) {
        feira->estoque[id].peso_total = novo_peso_total;
    }
    if (novo_preco_kg >= 0.0) {
        feira->estoque[id].preco_kg = novo_preco_kg;
    }
}
