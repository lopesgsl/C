#include <stdio.h>

int main(){
    float dinho, parc;

    printf("\n                          Emprestimos consignados\n\n");

    printf("Valor do emprestimo: R$");
    scanf("%f", &dinho);
    printf("Quantas parcelas?: ");
    scanf("%f", &parc);

    dinho = dinho+(dinho*0.04);
    dinho = dinho/parc;

    printf("Voce pagara no total R$%f em %.0fX", dinho, parc);


    return 0;
}