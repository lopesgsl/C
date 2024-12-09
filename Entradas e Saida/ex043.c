#include <stdio.h>

int main(){
    float preco, preco_ant, var;

    printf("\n<<<<<<Mercado de acoes>>>>>>\n");
    printf("Sera que essa acao valorizou, vou lhe informar a variacão entre os valores.\n\n");
    printf("Valor atual: R$");
    scanf("%f", &preco);
    printf("Valor Anterior: R$");
    scanf("%f", &preco_ant);

    var = (preco-preco_ant)/preco_ant;

    printf("Aconteceu uma variacao de %.1f%%", var*100);
    return 0;
}