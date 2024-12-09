#include <stdio.h>

int main(){
    float kwh, kwh1, kwh2;

    printf("\n'''''''''Conta de energia''''''''''\n");
    printf("Deseja saber o valor a paga no energia? informe os dois ultimos valores do contador.\n\n");

    printf("Consumo atual: ");
    scanf("%f", &kwh1);
    printf("Consumo anterior: ");
    scanf("%f", &kwh2);

    kwh = kwh1-kwh2;
    kwh = (kwh*0.35)+((kwh*0.35)*0.17)+15;

    printf("Voce deve pagar no total R$%.2f", kwh);

    return 0;
}