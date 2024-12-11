/*144. Escreva um programa que leia um número inteiro N e calcule o primeiro número 
natural cujo fatorial é maior do que N. */
#include <stdio.h>
#include <conio.h>

void main(){
    int num, num_fat, fatorial;

    printf("==== FATORIAL MAIOR Q N ====");

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int t = 2; t < num; t++)
    {
        fatorial = t;
        for (int i = t-1; i > 0; i--)
        {
            fatorial *= i;
            if (fatorial >= num)
            {
                num_fat = t;
                break;
            } 
        }  
        if (fatorial >= num)
        {
            break;
        }
    }

    printf("O numero natural em que seu fatorial e maior que %d e %d", num,num_fat);
    getch();
}