/*125. Escreva um programa que leia um número inteiro positivo N e imprima os N primeiros 
números perfeitos. */
#include <stdio.h>

int main(){
    int n, cont = 0;
    unsigned long int num = 2, soma_div = 0;

    printf("\n           Numeros perfeitos\n\n");

    printf("Digite a quantidade de numeros desejadas: ");
    scanf("%d", &n);

    printf("\nOs %d primeiros numeros perfeitos sao --> ", n);

    for (;cont < n;)
    {
        soma_div = 0;
        for (unsigned long int i = 1; i <= num / 2; i++)
        {
            if (num%i == 0)
            {
                soma_div += i;
            }
        }
        if (soma_div == num)
        {
            printf("%lu ", num);
            cont++;
        }
        num++;
    }

    return 0;
}