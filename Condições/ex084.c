#include <stdio.h>

int main(){
    float peso, altura, imc, peso_ideal;

    printf("\n---------Calculadora de IMC----------\n");
    printf("Peso (Kg): ");
    scanf("%f", &peso);
    printf("Altura (Metros): ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);

    // IMC IDEAL PARA UMA PESSOA DE 18 A 25ANOS = 18,6 a 24,9

    printf("Seu indice de massa corporal (IMC) e de %.1f", imc);
    
    if (imc < 18.6)
    {
        peso_ideal = 18.6 * (altura*altura);
        peso_ideal -= peso;
        printf(", contudo voce esta abaixo do peso ideal sendo necessario ganha %.1f Kg.\n", peso_ideal);
    }
    else if (imc > 24.9)
    {
        peso_ideal = 24.9 * (altura*altura);
        peso_ideal = peso - peso_ideal;
        printf(", contudo voce esta acima do peso ideal sendo necessario perde %.1f Kg.\n", peso_ideal);
    }
    else
    {
        printf(" e esta com o indice ideal.\n");
    }


    return 0;
}