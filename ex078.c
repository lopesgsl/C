#include <stdio.h>

int main(){
    float gas, alco;

    printf("\n[[[[[[[ Gasolina ou alcool ]]]]]]]\n\n");

    printf("Digite o valor da gasolina: R$");
    scanf("%f", &gas);
    printf("Digite o valor do alcool: R$");
    scanf("%f", &alco);

    gas *= 0.7;

    if (gas <= alco)
    {
        printf("\nE mais economico abastecer com gasolina.\n");
    }
    else
    {
        printf("\nE mais economico abastecer com alcool.\n");
    }
    

    return 0;
}