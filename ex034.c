#include <stdio.h>

int main(){
    int dia, prazo, entrega, mesi;

    printf("\nDeseja saber quando seu pedido vai chegar? informe os seguites dados\n");

    printf("\nDia do pedido: ");
    scanf("%f", &dia);
    printf("Prazo de entrega: ");
    scanf("%f", &prazo);

    mesi = (prazo+dia)/30;

    entrega = (prazo+dia)-(30*mesi);

    printf("\nDeve chegar no dia %i", entrega);

    return 0;
}