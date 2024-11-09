/*143. Escreva um programa que leia dez números inteiros e calcule a diferença entre os 
dois maiores números digitados pelo usuário. */
#include <stdio.h>
#include <conio.h>

void main(){
    int num[10], maior, segund;

    printf("Digite um numero: ");
    scanf("%d", &num[0]);

    maior = num[0];
    segund = num[0];

    for (int i = 1; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
        if (num[i] > maior)
        {
            segund = maior;
            maior = num[i];
        }
        else if (num[i] > segund && num[i] < maior) 
        {
            segund = num[i]; 
        }
    }
    
    printf("A diferenca entre os dois maiores numeros eh %d.", maior - segund);

    getch();

}