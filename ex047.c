#include <stdio.h>

int main(){
    float dinho, parc1, parc2, parc3, parc4, parc5;

    printf("\n////////Banco do nordeste\\\\\\\\\n");

    printf("Digite o valor do emprestimo: R$");
    scanf("%f", &dinho);

    parc1 = dinho*0.2;
    parc2 = parc1+(parc1*0.07);
    parc3 = parc2+(parc2*0.07);
    parc4 = parc3+(parc3*0.07);
    parc5 = parc4+(parc4*0.07);

    printf("Do valor de R$%.2f voce para no total R$%.2f sendo cada parcela.\n\n", dinho, parc1+parc2+parc3+parc4+parc5);
    printf("1X = R$%.2f\n", parc1);
    printf("2x = R$%.2f\n", parc2);
    printf("3X = R$%.2f\n", parc3);
    printf("4X = R$%.2f\n", parc4);
    printf("5X = R$%.2f\n", parc5);
    printf("\nVoce pagara um acrecimo de R$%.2f", (parc1+parc2+parc3+parc4+parc5)-dinho);

    return 0;
}