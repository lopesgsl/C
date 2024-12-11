/*131. Escreva um programa que leia 10 números reais distintos e calcule o segundo maior 
número lido.*/
#include <stdio.h>

int main(){
    int num[10], x, maior, seg_maior;
    int total = 1;
    printf("\n            O segundo maior numero.\n\n");

        printf("Digite um numero: ");
        scanf("%d", &num[0]);

        maior = num[0];
    for (int i = 1; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &x);

        int distinto = 1;
        for (int j = 0; i < total; j++)//Procura se o valor ja foi digitado
        {
            if (num[j] == x)
            {
                distinto = 0;
                break;
            }
        }
        if (distinto)//Verifica se e distinto
        {
            num[total] = x;
            total++;
        }
        else{
            printf("\nEste numero ja foi digitado, tente novamente.\n\n");
            i--;
        }
        //Confere se e o segundo maior numero
        if (num[i] > maior)
        {
            seg_maior = maior;
            maior = num[i];
        }
        if (num[i] > seg_maior && num[i] < maior)
        {
            seg_maior = num[i];
        }
    }
    printf("O segundo maior numero e %d.\n", seg_maior);
    return 0;
}