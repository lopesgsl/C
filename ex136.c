/*136. Escreva um programa que leia um número inteiro positivo N e calcule o seu valor 
correspondente em binário.*/
#include <stdio.h>

void main(){
    int num;
    printf("\n              Conversor de binario.\n\n");

    printf("Digite um numero: ");
    scanf("%d", &num);

    int binario[num], cont = 0;

    for (int i = 0; num > 0; i++)
    {
        binario[i] = (num%2);
        num = num/2;
        cont++;
    }
    printf("\nEste numero convertido para binario e: ");

    for (int x = cont-1; x >= 0; x--)
    {
        printf("%d ", binario[x]);
    }
    
}