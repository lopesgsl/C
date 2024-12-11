/*137. Escreva um programa que leia um número inteiro positivo e calcule o número de 
algarismos deste número.*/
#include <stdio.h>

void main(){
    int num, alg = 0;

    printf("\n          Quantidade de algarismos.\n\n");  
    printf("Digite um numero?: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i*=10)
    {
        if (num/i >= 1)
        {
            alg++;
        }
    }
    printf("O numero %d possui no total %d algarismos.", num, alg);
}