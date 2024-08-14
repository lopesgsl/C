/*96. Escreva um programa que leia cinco números inteiros e determine o segundo maior 
número digitado pelo usuário e a ordem em que o mesmo foi digitado. */
#include <stdio.h>

int main(){
    int num[5], maior, seg_maior;

    printf("\n{{{{ Indentificador de Segundo maior numero }}}}\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o 1 numero: ");
        scanf("%i", &num[i]);
    }

    maior = num[0];
    seg_maior = 0;

    for (int j = 0; j < 5; j++)
    {
        if (maior < num[j])
        {
            maior = num[j];
        }
    }
    for (int l = 0; l < 5; l++)
    {
        if (seg_maior < num[l] && num[l] < maior)
        {
            seg_maior = num[l];
        }
    }
    for (int t = 0; t < 5; t++)
    {
        if (seg_maior == num[t])
        {
            printf("\nO segundo maior numero e %i no qual foi o %i numero a ser digitado.",seg_maior, t+1);
            break;
        }
    }
    
    return 0;
}