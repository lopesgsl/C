/*117. Escreva um programa que leia 10 números inteiros e, para cada número lido, calcule o 
seu fatorial.*/
#include <stdio.h>

int main(){
    int num[10], fatorial;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }

    for (int t = 0; t < 10; t++)
    {
        printf("\n%d! ->", num[t]);
        fatorial = num[t];

        for (int y = num[t]-1; y > 1; y--)
        {
            printf(" %d *", y);
            fatorial *= y;

        }
        printf(" 1 = %d", fatorial);
    }

    return 0;
}