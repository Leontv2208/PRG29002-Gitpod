#include <stdio.h>
#define MAX_ITEMS 1000
#include <string.h>


typedef struct{
    char descricao[21];
    double preço_kg;
    double peso_total;
} Item;

typedef struct{
    char nome_fantasia;
    Item estoque[MAX_ITEMS];
    int n_items;
    double caixa;
} Feira;

double valor_total_item(Item item);
void adiciona_item (Feira *feira, Item *item);

int main(void)
{
    Feira feira;
    strcpy(feira.nome_fantasia, "Feira do IFSC");
    feira.caixa =100.0;
    feira.n_items=0;

    Item pera = {"Pera nacional", 7.50, 100.0};    
    Item banana = {"Banana Caturra", 3.00, 200.0};
    Item uva = {"Uva Italia", 12.50, 50.0};
}

double valor_total_item(Item item)
{
    double valor;
    valor = item.preço_kg * item.peso_total;
    return valor;
}

void adiciona_item(Feira *feira, Item item)
{

}
