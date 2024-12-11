/*111. Escreva um programa que leia o termo inicial e a razão de uma PA e um número 
inteiro positivo N e imprima os N primeiros termos da progressão. */
#include <stdio.h>

int main(){
    int termo, razao, num;

    printf("\n{ Gerador de P.A }\n\n");

    printf("Termo inicial: ");
    scanf("%i", &termo);
    printf("Razao: ");
    scanf("%i", &razao);
    printf("Quantidade de termos: ");
    scanf("%i", &num);

    printf("\n");
    for (int i = 1; i <= num; i++)
    {
        printf("%i ", termo);
        termo+=razao;
    }

    return 0;
}