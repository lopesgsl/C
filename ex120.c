/*120. Escreva um programa que leia um número inteiro positivo N e imprima a maior 
quantidade possível de números inteiros positivos de forma que a soma de todos os 
números impressos seja menor ou igual a N.*/
#include <stdio.h>

int main(){
    int n;
    int soma = 1;

    printf("Digite um numero: ");
    scanf("%d", &n);

    int i = 1;

    while (soma <= n)
    {
        soma+=i;
        if (soma <= n)
        {
            printf("%d ", i);
        }
        i++;
    }
    

    return 0;
}