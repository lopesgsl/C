#include <stdio.h>

int main(){
    float km, preco;

    printf("\nJoao caso deseje descobrir o valor gasto em suas viagens relate as informacoes a seguir\n\n");

    printf("Distancia percorrida: ");
    scanf("%f", &km);
    printf("Valor da gasolina: R$");
    scanf("%f", &preco);

    km = km/14;
    preco = km*preco;

    printf("\nVoce devera desebolsar R$ %.2f para chega ao seu destino.", preco);
    return 0;
}