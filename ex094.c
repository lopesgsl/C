/*94. Escreva um programa que leia um valor inteiro a ser sacado pelo usuário e identifique 
quantas cédulas de cada tipo devem ser usadas para que o saque seja efetuado. Você 
pode supor que o caixa tem cédulas de R$ 10,00, R$ 20,00, R$ 50,00 e R$ 100,00. O 
valor máximo de um saque é R$ 1000,00 e, para cada saque, deve-se priorizar o uso 
das cédulas maiores. */
#include <stdio.h>

int main(){
    int valor;
    float dez, vinte, cinq, cem;

    printf("\n<... Maquina de troco ...>\n");
    printf("Limite minimo para sacar e de R$10.00.\n\n");

    do
    {
        printf("Valor da compra(Ate R$1000,00): R$");
        scanf("%i", &valor);
    } while (valor >= 1000);


    cem = valor/100;
    cinq = (valor%100)/50;
    vinte = ((valor%100)%50)/20;
    dez = (((valor%100)%50)%20)/10;

    if (valor >= 10)
    {
        printf("\nVoce recebera:\n\n %.0f notas de R$100,00.\n %.0f notas de R$50,00.\n %.0f notas de R$20,00.\n %.0f notas de R$10,00.", cem,cinq,vinte,dez);
    }
    else
    {
        printf("Valor insuficiente.");
    }

    return 0;
}