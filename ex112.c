/*112. Escreva um programa que leia um número inteiro N e imprima o enésimo termo da 
série de Fibonacci. (1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...).*/
#include <stdio.h>
int main(){
    int num, ant = 1, prox=1, ant2;

    printf("\n        Sequencia de fibonacci\n\n");

    printf("Quantos numeros deseja na sua sequencia?: ");
    scanf("%i", &num);

    if (num == 1 || num == 2)
    {
        printf("O %i termo da sequencia e o numero %i.", num, prox);
    }
    else
    {
        for (int i = 3; i <= num; i++)
        {
            ant2 = prox;
            prox += ant;
            ant = ant2;
        }
        printf("O %i termo da sequencia e o numero %i.", num, prox);
    }
    
    return 0;
}