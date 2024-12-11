#include <stdio.h>
#include <stdlib.h>

int main(){
    char num[6];

    printf("\n++++++ Partido politico ++++++\n");
    printf("Este programa ira facilitar seu trabalho de indentifica o partido politico de cada deputado.\n\n");

    printf("Numero do deputado estadual: ");
    scanf("%s", &num);
    int num_int = atoi(num);

    if (num_int >= 10000 && num_int <= 99999)
    {
        if (num[0] == '1' && num[1] == '3')
        {
            printf("\nSeu candidado e filiado ao partido PT.\n");
        }
        else if (num[0] == '1' && num[1] == '4')
        {
            printf("\nSeu candidado e filiado ao partido PTB.\n");
        }
        else if (num[0] == '1' && num[1] == '5') 
        {
            printf("\nSeu candidato e filiado ao partido PMDB.\n");
        }
        else if (num[0] == '2' && num[1] == '5')
        {
            printf("\nSeu candidado e filiado ao partido DEM.\n");
        }
        else if (num[0] == '4' && num[1] == '5')
        {
            printf("\nSeu candidado e filiado ao partido PSDB.\n");
        }
        else if (num[0] == '6' && num[1] == '5')
        {
            printf("\nSeu candidado e filiado ao partido PCdoB.\n");
        }
        else
        {
            printf("\nNao foi possivel indentificar um partido no nosso banco de dados.\n");
        }
    }
    else
    {
        printf("\nDigite um numero valido.\n");
    }
    
    return 0;
}