/*115. Escreva um programa que leia o peso e a altura de um grupo de 20 pessoas e calcule o 
percentual de pessoas abaixo do peso, o percentual de pessoas acima do peso e o 
percentual de pessoas que estão dentro da faixa de peso adequada.*/
#include <stdio.h>

int main(){
    float peso[20], altura[20], imc[20];
    float acima = 0,abaixo = 0, normal = 0;

    printf("\n                Porcentagem de IMC\n");
    printf("informe o peso de a altura de casa pessoa respectivamente.\n\n");    

    for (int i = 0; i < 20; i++)
    {
        printf("PESO da %i pessoa: ", i+1);
        scanf("%f", &peso[i]);
        printf("ALTURA da %i pessoa: ", i+1);
        scanf("%f", &altura[i]);
    }

    for (int t = 0; t < 20; t++)
    {
        imc[t] = peso[t]/(altura[t]*altura[t]);

        if (imc[t] < 18.5)
        {
            abaixo++;
        }
        else if (imc[t] > 24.9)
        {
            acima++;
        }
        else
        {
            normal++;
        }        
    }

    abaixo = (abaixo/20)*100;
    acima = (acima/20)*100;
    normal = (normal/20)*100;
    printf("Entao das 20 pessoas cadastradas\n\n %.2f%% Acima do peso.\n\n %.2f%% Abaixo do peso.\n\n %.2f%% Peso normal.", acima, abaixo, normal);


    return 0;
}