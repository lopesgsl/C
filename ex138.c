/*138. Escreva um programa que leia um número inteiro positivo e calcule a soma de todos 
os seus algarismos.*/
#include <stdio.h>

void main(){
    int num;
    int soma = 0, alg = 0;

    printf("\n              Soma dos algarismo\n\n");

    printf("Digite  um numero: ");
    scanf("%d", &num);

    int termo[num];

    for (int i = 1; i <= num; i*=10)
    {
        if (num/i >= 1)
        {
            termo[alg] = (num/i)%10;
            alg++;
        }
    }

    for (int i = 0; i < alg; i++)
    {
        soma += termo[i]; 
    }
    
    printf("A soma de todos os algorismo e %d.", soma);
}