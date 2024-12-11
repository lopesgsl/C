/*98. Escreva um programa que imprima todos os números inteiros entre 1 e 100 em ordem 
ascendente.*/
#include <stdio.h>

int main(){
    printf("< Contador de 1-100 >\n\n");

    for (size_t i = 1; i < 100; i++)
    {
        printf("%i\n", i);
    }
    
    return 0;
}