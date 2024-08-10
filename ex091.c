/*91. Escreva um programa que leia o valor de um mês e de um ano e verifique a 
quantidade de dias do mês informado pelo usuário. */
#include <stdio.h>

int main(){
    int mes, ano;

    printf("\n======= Quantos dias tem esse mes? =======\n\n");

    do{
    printf("Digite o numero do mes (1 a 12): ");
    scanf("%i", &mes);
    }while (mes > 13);   

    printf("Digite o ano: ");
    scanf("%i", &ano);

if (mes == 2)
{
    if ( ano%4 == 0 && ano%100 != 0)
    {
        printf("\nSeu mes tem 29 dias.");
    }
    else
    {
        printf("\nSeu mes tem 28 dias.");
    }
}
else{
    if (mes <= 7)
    {
        if (mes%2 == 0)
        {
            printf("\nSeu mes tem 30 dias"); // caso for  impar
        }
        else{
            printf("\nSeu mes tem 31 dias."); // caso for par
        }
    }
    else{
        if (mes%2 == 0)
        {
            printf("\nSeu mes tem 30 dias"); // caso for  impar
        }
        else{
            printf("\nSeu mes tem 31 dias."); // caso for par
        }
    }
}

    return 0;
}