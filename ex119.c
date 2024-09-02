/*119. Escreva um programa que leia um número inteiro N e imprima todos os termos da 
série de Fibonacci que são menores ou iguais a N.*/
#include <stdio.h>

int main(){
    int num, ant = 1, prox=1, ant2;

    printf("\n        Sequencia de fibonacci V2.0\n\n");

    printf("Quantos numeros deseja na sua sequencia?: ");
    scanf("%i", &num);

    printf("\n");

        for (int i = 1; i <= num; i++)
        {
            printf("%d ", ant);
            ant2 = prox;
            prox += ant;
            ant = ant2;
        }

    return 0;
}