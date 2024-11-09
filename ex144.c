/*144. Escreva um programa que leia um número inteiro N e calcule o primeiro número 
natural cujo fatorial é maior do que N. */
#include <stdio.h>
#include <conio.h>

void main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    int fatorial = num;

    for (int i = num-1; i > 1; i--)
    {
        fatorial *= i;
        printf("%d\n", fatorial);
    }
    

    getch();
}