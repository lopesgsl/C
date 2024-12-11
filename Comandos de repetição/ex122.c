/*122. Escreva um programa que leia um número inteiro N e verifique se ele pertence à série 
de Fibonacci.*/
#include <stdio.h>

int main(){
    int n, ant = 1, prox = 1, ant2;
    
    printf("\n                      Indentificador de termo\n\n");

    printf("Digite um numero: " );
    scanf("%d", &n);

    while(ant <= n+prox)
    {
        ant2 = prox;
        prox += ant;
        ant = ant2;

        if (ant == n)
        {
            printf("\nO numero %d esta sim na sequencia de Fibonacci.", ant);
            break;
        }
        else if(ant > n)
        {
            printf("\nSeu numero nao esta dentro da sequencia de Fibonacci.");
            break;
        }
    }
    

    return 0;
}