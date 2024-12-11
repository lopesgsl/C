/*100. Escreva um programa que leia um número inteiro positivo N e imprima os N 
primeiros números pares positivos.*/
#include <stdio.h>

int main(){
    int num;

    printf("\n(((( Os primeiros pares))))\n");

    printf("Digite um numero: ");
    scanf("%i", &num);

    for (size_t i = 0; i < (num*2); i++)
    {
        if (i%2 == 0)
    {
        printf("%i ", i);
    }
    }
    
    return 0;
}