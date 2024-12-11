#include <stdio.h>

int main(){
    float salario;

    printf("\n\\\\\\\\\\\\\\\\ Valor liquido /////////\n");
    printf("Este programa vai descontar o imposto de renda e a previdencia de seu salario.\n\n");

    printf("Salario: ");
    scanf("%f", &salario);

    salario -= salario*0.11;

    if (salario >= 4664.69)
    {
        salario -= (salario*0.227);
    }
    else if (3751.06 <= salario && salario <= 4664.68)
    {
        salario -= (salario*0.225);
    }
    else if (2826.66 <= salario && salario <= 3751.05)
    {
         salario -= (salario*0.15);
    }
    else if (1903.99 <= salario && salario <= 2826.65)
    {
         salario -= (salario*0.075);
    }

    printf("o VALOR LIQUIDO de seu salario e de R$%.2f.\n", salario);
    
    return 0;
}