/*145. Escreva um programa que leia um número inteiro N e, a seguir leia vários números 
inteiros. O processo de leitura deve ser encerrado quando a soma dos números 
digitados pelo usuário (excluindo-se o valor de N) for superior ao valor de N. */

#include <stdio.h>

void main(){
    int num, soma = 0;

    printf("\n==== SOMA ATE CHEGA NO LIMITE ====\n\n");

    printf("Digite um limite: ");
    scanf("%d", &num);
    
    int lista[num];
    for (int i = 0; i < num; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &lista[i]);

        soma += lista[i];

        printf("\nA soma total dos numeros eh: %d\n", soma);
        if (soma > num)
        {
            break;
        }
    }
    

}