#include <stdio.h>

int main(){
    float peso, altura, imc;

    printf("\n---------Calculadora de IMC----------\n");
    printf("Peso (Kg): ");
    scanf("%f", &peso);
    printf("Altura (Metros): ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);

    printf("Seu indice de massa corporal (IMC) e de %.1f", imc);


    return 0;
}