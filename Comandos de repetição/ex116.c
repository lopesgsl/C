/*116. Escreva um programa que leia o nome, o sexo e a idade de um grupo de 20 pessoas e 
calcule o percentual de mulheres que tem entre 18 e 21 anos.*/
#include <stdio.h>

int main(){
    int idade[20];
    char sexo[20], nome[99];
    float porc = 0;


    printf("\n          { Cadastro de pessoas }\n\n");

    for (int i = 0; i < 20; i++)
    {
        printf("O nome da pessoa: ");
        scanf("%s", nome);
        printf("Idade da pessoa: ");
        scanf("%d", &idade[i]);
        printf("Sexo da pessoa(M ou F): ");
        scanf("%c", &sexo[i]);
        printf("\n");

        if (idade[i] >= 18 && idade[i] <= 21)
        {
            if (sexo[i] == 'f' || sexo[i] == 'F')
            {
                porc++;
            }     
        }
    }
    

    porc = (porc/20)*100;
    printf("Das 20 pessoas citadas apenas %.2f%% sao mulheres com idade entre 18 a 21 anos.", porc);

    return 0;
}