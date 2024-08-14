/*95. Escreva um programa que leia quatro números reais e verifique se eles formam, na 
ordem em que foram digitados, uma progressão aritmética, uma progressão 
geométrica, os dois tipos de progressão ou nenhum tipo de progressão.*/
#include <stdio.h>

int main(){
    float num[4], razao_pa, razao_pg;

    printf("\n'''''''' P.A OU P.G ''''''''\n\n");

    for (int i = 0; i < 4; i++)
    {
        printf("Digite %i numeros: ",i+1);
        scanf("%f", &num[i]);
    }

    if (num[0] < num[1] && num[1] < num[2] && num[2] < num[3])//Crescente
    {
        if (num[2]- num[1] == num[1] - num[0])
        {
            printf("\nIsto e uma progressao Aritmetrica.\n");
        }
        else
        {
            printf("\nEsto e uma progressao Geometrica.\n");
        }    
    }
    else if (num[0] > num[1] && num[1] > num[2] && num[2] > num[3])//Decrescente
    {
        if (num[1] - num[2] == num[0] - num[1])
        {
            printf("\nIsto e uma progressao Aritmetrica.\n");
        }
        else
        {
            printf("\nEsto e uma progressao Geometrica.\n");
        } 
    }
    else if (num[0]==num[1] && num[1] == num[2] && num[2] == num[3])//Constante
    {
        printf("\nEsta ordem e uma progressao tanto  aritmetrica e geometrica.\n");
    }
    else
    {
        printf("\nEsta sequencia nao esta em uma ordem.\n");
    }

    return 0;
}