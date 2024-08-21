/*110. Escreva um programa que leia um número natural N e calcule o seu fatorial.*/
#include <stdio.h>

int main(){
    int num, fatorial;

    printf("\n                Calculadora de fatorial\n\n");

    printf("Digite um numero: ");
    scanf("%i", &num);

    printf("\n%i! ->", num);
    fatorial = num;

    for (int i = num-1; i >= 2; i--)
    {
        printf(" %i *", i);
        fatorial *= i;

    }

    printf(" 1 = %i", fatorial);

    return 0;
}