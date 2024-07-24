#include <stdio.h>

int main(){
    float dinho, parc;

    printf("\n                          Emprestimos consignados\n\n");

    printf("Valor do emprestimo: R$");
    scanf("%f", &dinho);
    printf("Quantas parcelas?: ");
    scanf("%f", &parc);
    if(parc > 120){
        printf("O maximo de parcelas e de 120 parcelas");

        return 0;
    }

    dinho = dinho+(dinho*0.04);
    dinho = dinho/parc;

    printf("Voce pagara no total R$%.2f em %.0fX", dinho, parc);


    return 0;
}