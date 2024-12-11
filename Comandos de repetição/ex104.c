/*104. Escreva um programa que leia um número inteiro N e verifique se ele é um número 
perfeito. Um número é perfeito quando ele é igual à soma de todos os seus divisores 
exatos exceto ele mesmo. Por exemplo, o número 6 (1+2+3) é um número perfeito.*/
#include <stdio.h>

int main(){
    int num, perf == 0;

    printf("\n//////// Numeros perfeitos ////////\n");

    printf("Digite um numero: ");
    scanf("%i", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            perf += i;
        }
    }
    if (perf-num == num)
    {
        printf("\nEste numero e perfeito.\n");
    }
    else{
        printf("\nEste numero nao e perfeito.\n");
    }
    return 0;
}